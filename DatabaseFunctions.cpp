#include "DatabaseFunctions.h"
using namespace System::Collections::Generic;

OdbcConnection^ ConnectToDatabase()
{
	String^ connectionString = "Driver={PostgreSQL ODBC Driver(UNICODE)};Server=192.168.56.1;Port=5432;Database=practik;Uid=postgres;Pwd=0000;";
	OdbcConnection^ connection = gcnew OdbcConnection(connectionString);
	connection->Open();
	return connection;
}

void FillDataGridFromDatabase(System::Windows::Forms::DataGridView^ dataGridView)
{
    OdbcConnection^ connection = ConnectToDatabase();
    OdbcCommand^ command = gcnew OdbcCommand("SELECT * FROM users;", connection);
    OdbcDataAdapter^ adapter = gcnew OdbcDataAdapter(command);
    DataTable^ dataTable = gcnew DataTable();

    try
    {
        // Заполняем DataTable данными из базы данных
        adapter->Fill(dataTable);

        // Привязываем DataTable к DataGridView
        dataGridView->DataSource = dataTable;

        // Автоматическая настройка высоты строк и длины столбцов
        dataGridView->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;
        dataGridView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
    }
    catch (Exception^ e)
    {
        // Обработка исключений
        MessageBox::Show(e->Message);
    }
    finally
    {
        // Закрываем соединение с базой данных
        connection->Close();
    }
}

void FillDataGridWithAllowedPrograms(DataGridView^ datagrid)
{
    // Подключение к базе данных
    OdbcConnection^ connection = ConnectToDatabase();

    // Создание адаптера данных и DataTable
    OdbcDataAdapter^ da = gcnew OdbcDataAdapter("SELECT * FROM public.allowedprograms", connection);
    DataTable^ dt = gcnew DataTable();

    // Заполнение DataTable данными из базы данных
    da->Fill(dt);

    // Привязка DataTable к DataGridView
    datagrid->DataSource = dt;

    // Закрытие подключения к базе данных
    connection->Close();
}

void FillDataGridWithProhibitedPrograms(DataGridView^ datagrid)
{
    // Подключение к базе данных
    OdbcConnection^ connection = ConnectToDatabase();

    // Создание адаптера данных и DataTable
    OdbcDataAdapter^ da = gcnew OdbcDataAdapter("SELECT * FROM public.prohibitedprograms", connection);
    DataTable^ dt = gcnew DataTable();

    // Заполнение DataTable данными из базы данных
    da->Fill(dt);

    // Привязка DataTable к DataGridView
    datagrid->DataSource = dt;

    // Закрытие подключения к базе данных
    connection->Close();
}

void FillDataGridWithLogStartEnd(DataGridView^ datagrid)
{
    // Подключение к базе данных
    OdbcConnection^ connection = ConnectToDatabase();

    // Создание адаптера данных и DataTable
    OdbcDataAdapter^ da = gcnew OdbcDataAdapter("SELECT * FROM public.log_start_end", connection);
    DataTable^ dt = gcnew DataTable();

    // Заполнение DataTable данными из базы данных
    da->Fill(dt);

    // Привязка DataTable к DataGridView
    datagrid->DataSource = dt;

    // Закрытие подключения к базе данных
    connection->Close();
}

void FillDataGridViewWithImagesTable(DataGridView^ dataGridView)
{
    OdbcConnection^ connection = ConnectToDatabase();

    // Создаем новый адаптер данных
    OdbcDataAdapter^ dataAdapter = gcnew OdbcDataAdapter("SELECT id_image, id_pc FROM public.images_table", connection);
    DataTable^ dataTable = gcnew DataTable();

    // Заполняем DataTable данными из базы данных
    dataAdapter->Fill(dataTable);

    // Привязываем DataTable к DataGridView
    dataGridView->DataSource = dataTable;

    connection->Close();
}

void SearchUsersWithConditions(DataGridView^ datagrid, String^ ipv4, String^ ipv6, String^ mac, String^ name, String^ os_version)
{
    // Подключение к базе данных
    OdbcConnection^ connection = ConnectToDatabase();

    // Начало формирования SQL-запроса
    String^ sql = "SELECT * FROM public.users WHERE ";
    bool firstCondition = true;

    // Добавление условий для каждого непустого TextBox
    if (!String::IsNullOrEmpty(ipv4)) {
        sql += "ipv4_pc = '" + ipv4 + "'";
        firstCondition = false;
    }
    if (!String::IsNullOrEmpty(ipv6)) {
        if (!firstCondition) sql += " AND ";
        sql += "ipv6_pc = '" + ipv6 + "'";
        firstCondition = false;
    }
    if (!String::IsNullOrEmpty(mac)) {
        if (!firstCondition) sql += " AND ";
        sql += "mac_pc = '" + mac + "'";
        firstCondition = false;
    }
    if (!String::IsNullOrEmpty(name)) {
        if (!firstCondition) sql += " AND ";
        sql += "name_pc = '" + name + "'";
        firstCondition = false;
    }
    if (!String::IsNullOrEmpty(os_version)) {
        if (!firstCondition) sql += " AND ";
        sql += "os_version = '" + os_version + "'";
    }

    // Если не было добавлено ни одного условия, удаляем WHERE
    if (firstCondition) {
        sql = sql->Replace(" WHERE ", "");
    }

    // Создание команды и адаптера данных
    OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
    OdbcDataAdapter^ da = gcnew OdbcDataAdapter(cmd);
    DataTable^ dt = gcnew DataTable();

    // Заполнение DataTable данными из базы данных
    da->Fill(dt);

    // Привязка DataTable к DataGridView
    datagrid->DataSource = dt;

    // Закрытие подключения к базе данных
    connection->Close();
}

void SearchLogStartEndByIPv4(DataGridView^ datagrid, String^ ipv4)
{
    // Подключение к базе данных
    OdbcConnection^ connection = ConnectToDatabase();

    // Подготовка SQL-запроса для поиска записей
    String^ sql = "SELECT lse.* FROM public.log_start_end AS lse "
        "INNER JOIN public.users AS u ON lse.id_pc = u.id_pc "
        "WHERE u.ipv4_pc = ?";
    OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);

    // Добавление параметра в команду
    cmd->Parameters->AddWithValue("?", ipv4);

    // Создание адаптера данных и DataTable
    OdbcDataAdapter^ da = gcnew OdbcDataAdapter(cmd);
    DataTable^ dt = gcnew DataTable();

    // Заполнение DataTable данными из базы данных
    da->Fill(dt);

    // Привязка DataTable к DataGridView
    datagrid->DataSource = dt;

    // Закрытие подключения к базе данных
    connection->Close();
}

void InsertProgramToDatabase(String^ name, String^ version)
{
    // Подключение к базе данных
    OdbcConnection^ connection = ConnectToDatabase();

    // Подготовка SQL-запроса для вставки данных
    String^ sql = "INSERT INTO public.allowedprograms (name_prog, version_prog) VALUES (?, ?)";
    OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);

    // Добавление параметров в команду
    cmd->Parameters->AddWithValue("?", name);
    cmd->Parameters->AddWithValue("?", version);

    // Выполнение команды
    cmd->ExecuteNonQuery();

    // Закрытие подключения к базе данных
    connection->Close();
}

void InsertProhibitedProgramToDatabase(String^ name)
{
    // Подключение к базе данных
    OdbcConnection^ connection = ConnectToDatabase();

    // Подготовка SQL-запроса для вставки данных
    String^ sql = "INSERT INTO public.prohibitedprograms (name_prog) VALUES (?)";
    OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);

    // Добавление параметра в команду
    cmd->Parameters->AddWithValue("?", name);

    // Выполнение команды
    cmd->ExecuteNonQuery();

    // Закрытие подключения к базе данных
    connection->Close();
}

void DeleteProgramFromDatabase(String^ name)
{
    // Подключение к базе данных
    OdbcConnection^ connection = ConnectToDatabase();

    // Подготовка SQL-запроса для удаления записи
    String^ sql = "DELETE FROM public.allowedprograms WHERE name_prog = ?";
    OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);

    // Добавление параметра в команду
    cmd->Parameters->AddWithValue("?", name);

    // Выполнение команды
    cmd->ExecuteNonQuery();

    // Закрытие подключения к базе данных
    connection->Close();
}

void DeleteProhibitedProgramFromDatabase(String^ name)
{
    // Подключение к базе данных
    OdbcConnection^ connection = ConnectToDatabase();

    // Подготовка SQL-запроса для удаления записи
    String^ sql = "DELETE FROM public.prohibitedprograms WHERE name_prog = ?";
    OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);

    // Добавление параметра в команду
    cmd->Parameters->AddWithValue("?", name);

    // Выполнение команды
    cmd->ExecuteNonQuery();

    // Закрытие подключения к базе данных
    connection->Close();
}

void ColorizeUserProgRows(DataGridView^ datagrid, String^ textbox1, String^ textbox2, String^ textbox3, String^ textbox4, String^ textbox5)
{
    // Подключение к базе данных
    OdbcConnection^ connection = ConnectToDatabase();

    // Получение данных из таблицы user_prog
   
    // Получение данных из таблиц prohibitedprograms и allowedprograms
    String^ sqlProhibited = "SELECT name_prog FROM public.prohibitedprograms";
    String^ sqlAllowed = "SELECT name_prog, version_prog FROM public.allowedprograms";
    OdbcCommand^ cmdProhibited = gcnew OdbcCommand(sqlProhibited, connection);
    OdbcCommand^ cmdAllowed = gcnew OdbcCommand(sqlAllowed, connection);
    OdbcDataAdapter^ daProhibited = gcnew OdbcDataAdapter(cmdProhibited);
    OdbcDataAdapter^ daAllowed = gcnew OdbcDataAdapter(cmdAllowed);
    DataTable^ dtProhibited = gcnew DataTable();
    DataTable^ dtAllowed = gcnew DataTable();
    daProhibited->Fill(dtProhibited);
    daAllowed->Fill(dtAllowed);

    // Формирование запроса к таблице users
    String^ sqlQuery = "SELECT id_pc FROM public.users WHERE ";
    sqlQuery += String::IsNullOrWhiteSpace(textbox1) ? "" : "ipv4_pc = '" + textbox1 + "' AND ";
    sqlQuery += String::IsNullOrWhiteSpace(textbox2) ? "" : "ipv6_pc = '" + textbox2 + "' AND ";
    sqlQuery += String::IsNullOrWhiteSpace(textbox3) ? "" : "mac_pc = '" + textbox3 + "' AND ";
    sqlQuery += String::IsNullOrWhiteSpace(textbox4) ? "" : "name_pc = '" + textbox4 + "' AND ";
    sqlQuery += String::IsNullOrWhiteSpace(textbox5) ? "" : "os_version = '" + textbox5 + "' AND ";
    // Удаление последнего " AND " если есть
    if (sqlQuery->EndsWith(" AND "))
    {
        sqlQuery = sqlQuery->Remove(sqlQuery->LastIndexOf(" AND "));
    }
    // Если запрос заканчивается на WHERE, значит все поля пусты, и мы выбираем все id_pc
    if (sqlQuery->EndsWith("WHERE "))
    {
        sqlQuery = "SELECT id_pc FROM public.users";
    }

    // Выполнение запроса и получение id_pc
    OdbcCommand^ command = gcnew OdbcCommand(sqlQuery, connection);
    OdbcDataAdapter^ adapter = gcnew OdbcDataAdapter(command);
    DataTable^ dataTable = gcnew DataTable();
    adapter->Fill(dataTable);

    // Формирование списка id_pc для фильтрации
    List<String^>^ idList = gcnew List<String^>();
    for each (DataRow ^ row in dataTable->Rows)
    {
        idList->Add(row["id_pc"]->ToString());
    }
    String^ ids = String::Join(",", idList); // Преобразование списка в строку для SQL запроса

    // Формирование запроса к таблице user_prog с учетом полученных id_pc
    String^ sqlUserProg = "SELECT * FROM public.user_prog WHERE id_pc IN (" + ids + ")";

    // Выполнение запроса и заполнение DataTable для user_prog
    OdbcCommand^ cmdUserProg = gcnew OdbcCommand(sqlUserProg, connection);
    OdbcDataAdapter^ daUserProg = gcnew OdbcDataAdapter(cmdUserProg);
    DataTable^ dtUserProg = gcnew DataTable();
    daUserProg->Fill(dtUserProg);

    // Привязка DataTable к DataGridView
    datagrid->DataSource = dtUserProg;

    // Окрашивание строк
    for each (DataGridViewRow ^ row in datagrid->Rows)
    {
        // Добавляем проверку на null
        String^ progName = row->Cells["name_prog"]->Value != nullptr ? row->Cells["name_prog"]->Value->ToString() : "";
        String^ progVersion = row->Cells["version_prog"]->Value != nullptr ? row->Cells["version_prog"]->Value->ToString() : "";

        // Проверка на запрещенные программы
        for each (DataRow ^ prohibitedRow in dtProhibited->Rows)
        {
            if (progName == prohibitedRow["name_prog"]->ToString())
            {
                row->DefaultCellStyle->BackColor = Color::Red;
                break;
            }
        }

        // Проверка на разрешенные программы
        bool nameMatch = false;
        for each (DataRow ^ allowedRow in dtAllowed->Rows)
        {
            if (progName == safe_cast<String^>(allowedRow["name_prog"]))
            {
                nameMatch = true;
                // Приведение к типу и проверка на null перед вызовом ToString()
                if (allowedRow["version_prog"] != nullptr && progVersion == safe_cast<String^>(allowedRow["version_prog"])->ToString())
                {
                    row->DefaultCellStyle->BackColor = Color::Green;
                    break;
                }
            }
        }

        if (nameMatch && row->DefaultCellStyle->BackColor != Color::Green)
        {
            row->DefaultCellStyle->BackColor = Color::Yellow;
        }
    }

    // Закрытие подключения к базе данных
    connection->Close();
}

void AddTrackingRecordByIPv4(String^ ipv4)
{
    OdbcConnection^ connection = ConnectToDatabase();

    // Проверяем, не открыто ли уже соединение
    if (connection->State != ConnectionState::Closed)
    {
        connection->Close();
    }

    OdbcCommand^ command;
    OdbcDataReader^ reader;

    connection->Open();
    command = gcnew OdbcCommand("SELECT id_pc FROM public.users WHERE ipv4_pc = ?", connection);
    command->Parameters->AddWithValue("ipv4_pc", ipv4);

    reader = command->ExecuteReader();
    if (reader->Read())
    {
        int id_pc = reader->GetInt32(0);
        reader->Close();

        command = gcnew OdbcCommand("INSERT INTO public.tracking (id_pc) VALUES (?)", connection);
        command->Parameters->AddWithValue("id_pc", id_pc);
        command->ExecuteNonQuery();
    }

    connection->Close();
}

void RemoveTrackingRecordByIPv4(String^ ipv4)
{
    OdbcConnection^ connection = ConnectToDatabase();

    // Проверяем, не открыто ли уже соединение
    if (connection->State != ConnectionState::Closed)
    {
        connection->Close();
    }

    OdbcCommand^ command;
    OdbcDataReader^ reader;

    connection->Open();
    command = gcnew OdbcCommand("SELECT id_pc FROM public.users WHERE ipv4_pc = ?", connection);
    command->Parameters->AddWithValue("ipv4_pc", ipv4);

    reader = command->ExecuteReader();
    if (reader->Read())
    {
        int id_pc = reader->GetInt32(0);
        reader->Close();

        command = gcnew OdbcCommand("DELETE FROM public.tracking WHERE id_pc = ?", connection);
        command->Parameters->AddWithValue("id_pc", id_pc);
        command->ExecuteNonQuery();
    }

    connection->Close();
}

void ViewTrackingTable(DataGridView^ dataGridView)
{
    OdbcConnection^ connection = ConnectToDatabase();

    // Создаем новый адаптер данных
    OdbcDataAdapter^ dataAdapter = gcnew OdbcDataAdapter("SELECT * FROM public.tracking", connection);
    DataTable^ dataTable = gcnew DataTable();

    // Заполняем DataTable данными из базы данных
    dataAdapter->Fill(dataTable);

    // Привязываем DataTable к DataGridView
    dataGridView->DataSource = dataTable;
}

void DisplayImageFromId(TextBox^ textBox1, PictureBox^ pictureBox1)
{
    OdbcConnection^ connection = ConnectToDatabase();
    int idImage;

    // Проверяем, не открыто ли уже соединение
    if (connection->State != ConnectionState::Closed)
    {
        connection->Close();
    }

    // Попытка преобразовать текст из TextBox в число
    if (Int32::TryParse(textBox1->Text, idImage))
    {
        OdbcCommand^ command = gcnew OdbcCommand("SELECT image_data FROM public.images_table WHERE id_image = ?", connection);
        command->Parameters->AddWithValue("id", idImage);


        connection->Open();
        OdbcDataReader^ reader = command->ExecuteReader(CommandBehavior::CloseConnection);

        if (reader->Read())
        {
            array<Byte>^ imageData = (array<Byte>^)reader["image_data"];
            MemoryStream^ ms = gcnew MemoryStream(imageData);
            pictureBox1->Image = Image::FromStream(ms);
        }
        else
        {
            MessageBox::Show("Изображение с таким id_image не найдено.");
        }

        connection->Close();
    }
}

void AddTrackingRecordByIPv4(TextBox^ textBox1)
{
    OdbcConnection^ connection = ConnectToDatabase();
    String^ ipv4 = textBox1->Text;
    int id_pc;

    // Проверяем, не открыто ли уже соединение
    if (connection->State != ConnectionState::Closed)
    {
        connection->Close();
    }
    connection->Open();
    // Находим id_pc по ipv4
    OdbcCommand^ commandFindId = gcnew OdbcCommand("SELECT id_pc FROM public.users WHERE ipv4_pc = ?", connection);
    commandFindId->Parameters->AddWithValue("ipv4", ipv4);
    Object^ result = commandFindId->ExecuteScalar();

    if (result != nullptr)
    {
        id_pc = Convert::ToInt32(result);
        // Добавляем запись в таблицу tracking
        OdbcCommand^ commandInsert = gcnew OdbcCommand("INSERT INTO public.ban_pc (id_pc) VALUES (?)", connection);
        commandInsert->Parameters->AddWithValue("id_pc", id_pc);
        commandInsert->ExecuteNonQuery();
    }
    connection->Close();
}

void RemoveTrackingRecordByIPv4(TextBox^ textBox1)
{
    OdbcConnection^ connection = ConnectToDatabase();
    String^ ipv4 = textBox1->Text;
    int id_pc;

    // Проверяем, не открыто ли уже соединение
    if (connection->State != ConnectionState::Closed)
    {
        connection->Close();
    }
    connection->Open();
    // Находим id_pc по ipv4
    OdbcCommand^ commandFindId = gcnew OdbcCommand("SELECT id_pc FROM public.users WHERE ipv4_pc = ?", connection);
    commandFindId->Parameters->AddWithValue("ipv4", ipv4);
    Object^ result = commandFindId->ExecuteScalar();

    if (result != nullptr)
    {
        id_pc = Convert::ToInt32(result);
        // Удаляем запись из таблицы tracking
        OdbcCommand^ commandDelete = gcnew OdbcCommand("DELETE FROM public.ban_pc WHERE id_pc = ?", connection);
        commandDelete->Parameters->AddWithValue("id_pc", id_pc);
        commandDelete->ExecuteNonQuery();
    }
    connection->Close();
}