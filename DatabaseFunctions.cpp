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
        // ��������� DataTable ������� �� ���� ������
        adapter->Fill(dataTable);

        // ����������� DataTable � DataGridView
        dataGridView->DataSource = dataTable;

        // �������������� ��������� ������ ����� � ����� ��������
        dataGridView->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;
        dataGridView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
    }
    catch (Exception^ e)
    {
        // ��������� ����������
        MessageBox::Show(e->Message);
    }
    finally
    {
        // ��������� ���������� � ����� ������
        connection->Close();
    }
}

void FillDataGridWithAllowedPrograms(DataGridView^ datagrid)
{
    // ����������� � ���� ������
    OdbcConnection^ connection = ConnectToDatabase();

    // �������� �������� ������ � DataTable
    OdbcDataAdapter^ da = gcnew OdbcDataAdapter("SELECT * FROM public.allowedprograms", connection);
    DataTable^ dt = gcnew DataTable();

    // ���������� DataTable ������� �� ���� ������
    da->Fill(dt);

    // �������� DataTable � DataGridView
    datagrid->DataSource = dt;

    // �������� ����������� � ���� ������
    connection->Close();
}

void FillDataGridWithProhibitedPrograms(DataGridView^ datagrid)
{
    // ����������� � ���� ������
    OdbcConnection^ connection = ConnectToDatabase();

    // �������� �������� ������ � DataTable
    OdbcDataAdapter^ da = gcnew OdbcDataAdapter("SELECT * FROM public.prohibitedprograms", connection);
    DataTable^ dt = gcnew DataTable();

    // ���������� DataTable ������� �� ���� ������
    da->Fill(dt);

    // �������� DataTable � DataGridView
    datagrid->DataSource = dt;

    // �������� ����������� � ���� ������
    connection->Close();
}

void FillDataGridWithLogStartEnd(DataGridView^ datagrid)
{
    // ����������� � ���� ������
    OdbcConnection^ connection = ConnectToDatabase();

    // �������� �������� ������ � DataTable
    OdbcDataAdapter^ da = gcnew OdbcDataAdapter("SELECT * FROM public.log_start_end", connection);
    DataTable^ dt = gcnew DataTable();

    // ���������� DataTable ������� �� ���� ������
    da->Fill(dt);

    // �������� DataTable � DataGridView
    datagrid->DataSource = dt;

    // �������� ����������� � ���� ������
    connection->Close();
}

void FillDataGridViewWithImagesTable(DataGridView^ dataGridView)
{
    OdbcConnection^ connection = ConnectToDatabase();

    // ������� ����� ������� ������
    OdbcDataAdapter^ dataAdapter = gcnew OdbcDataAdapter("SELECT id_image, id_pc FROM public.images_table", connection);
    DataTable^ dataTable = gcnew DataTable();

    // ��������� DataTable ������� �� ���� ������
    dataAdapter->Fill(dataTable);

    // ����������� DataTable � DataGridView
    dataGridView->DataSource = dataTable;

    connection->Close();
}

void SearchUsersWithConditions(DataGridView^ datagrid, String^ ipv4, String^ ipv6, String^ mac, String^ name, String^ os_version)
{
    // ����������� � ���� ������
    OdbcConnection^ connection = ConnectToDatabase();

    // ������ ������������ SQL-�������
    String^ sql = "SELECT * FROM public.users WHERE ";
    bool firstCondition = true;

    // ���������� ������� ��� ������� ��������� TextBox
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

    // ���� �� ���� ��������� �� ������ �������, ������� WHERE
    if (firstCondition) {
        sql = sql->Replace(" WHERE ", "");
    }

    // �������� ������� � �������� ������
    OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
    OdbcDataAdapter^ da = gcnew OdbcDataAdapter(cmd);
    DataTable^ dt = gcnew DataTable();

    // ���������� DataTable ������� �� ���� ������
    da->Fill(dt);

    // �������� DataTable � DataGridView
    datagrid->DataSource = dt;

    // �������� ����������� � ���� ������
    connection->Close();
}

void SearchLogStartEndByIPv4(DataGridView^ datagrid, String^ ipv4)
{
    // ����������� � ���� ������
    OdbcConnection^ connection = ConnectToDatabase();

    // ���������� SQL-������� ��� ������ �������
    String^ sql = "SELECT lse.* FROM public.log_start_end AS lse "
        "INNER JOIN public.users AS u ON lse.id_pc = u.id_pc "
        "WHERE u.ipv4_pc = ?";
    OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);

    // ���������� ��������� � �������
    cmd->Parameters->AddWithValue("?", ipv4);

    // �������� �������� ������ � DataTable
    OdbcDataAdapter^ da = gcnew OdbcDataAdapter(cmd);
    DataTable^ dt = gcnew DataTable();

    // ���������� DataTable ������� �� ���� ������
    da->Fill(dt);

    // �������� DataTable � DataGridView
    datagrid->DataSource = dt;

    // �������� ����������� � ���� ������
    connection->Close();
}

void InsertProgramToDatabase(String^ name, String^ version)
{
    // ����������� � ���� ������
    OdbcConnection^ connection = ConnectToDatabase();

    // ���������� SQL-������� ��� ������� ������
    String^ sql = "INSERT INTO public.allowedprograms (name_prog, version_prog) VALUES (?, ?)";
    OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);

    // ���������� ���������� � �������
    cmd->Parameters->AddWithValue("?", name);
    cmd->Parameters->AddWithValue("?", version);

    // ���������� �������
    cmd->ExecuteNonQuery();

    // �������� ����������� � ���� ������
    connection->Close();
}

void InsertProhibitedProgramToDatabase(String^ name)
{
    // ����������� � ���� ������
    OdbcConnection^ connection = ConnectToDatabase();

    // ���������� SQL-������� ��� ������� ������
    String^ sql = "INSERT INTO public.prohibitedprograms (name_prog) VALUES (?)";
    OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);

    // ���������� ��������� � �������
    cmd->Parameters->AddWithValue("?", name);

    // ���������� �������
    cmd->ExecuteNonQuery();

    // �������� ����������� � ���� ������
    connection->Close();
}

void DeleteProgramFromDatabase(String^ name)
{
    // ����������� � ���� ������
    OdbcConnection^ connection = ConnectToDatabase();

    // ���������� SQL-������� ��� �������� ������
    String^ sql = "DELETE FROM public.allowedprograms WHERE name_prog = ?";
    OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);

    // ���������� ��������� � �������
    cmd->Parameters->AddWithValue("?", name);

    // ���������� �������
    cmd->ExecuteNonQuery();

    // �������� ����������� � ���� ������
    connection->Close();
}

void DeleteProhibitedProgramFromDatabase(String^ name)
{
    // ����������� � ���� ������
    OdbcConnection^ connection = ConnectToDatabase();

    // ���������� SQL-������� ��� �������� ������
    String^ sql = "DELETE FROM public.prohibitedprograms WHERE name_prog = ?";
    OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);

    // ���������� ��������� � �������
    cmd->Parameters->AddWithValue("?", name);

    // ���������� �������
    cmd->ExecuteNonQuery();

    // �������� ����������� � ���� ������
    connection->Close();
}

void ColorizeUserProgRows(DataGridView^ datagrid, String^ textbox1, String^ textbox2, String^ textbox3, String^ textbox4, String^ textbox5)
{
    // ����������� � ���� ������
    OdbcConnection^ connection = ConnectToDatabase();

    // ��������� ������ �� ������� user_prog
   
    // ��������� ������ �� ������ prohibitedprograms � allowedprograms
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

    // ������������ ������� � ������� users
    String^ sqlQuery = "SELECT id_pc FROM public.users WHERE ";
    sqlQuery += String::IsNullOrWhiteSpace(textbox1) ? "" : "ipv4_pc = '" + textbox1 + "' AND ";
    sqlQuery += String::IsNullOrWhiteSpace(textbox2) ? "" : "ipv6_pc = '" + textbox2 + "' AND ";
    sqlQuery += String::IsNullOrWhiteSpace(textbox3) ? "" : "mac_pc = '" + textbox3 + "' AND ";
    sqlQuery += String::IsNullOrWhiteSpace(textbox4) ? "" : "name_pc = '" + textbox4 + "' AND ";
    sqlQuery += String::IsNullOrWhiteSpace(textbox5) ? "" : "os_version = '" + textbox5 + "' AND ";
    // �������� ���������� " AND " ���� ����
    if (sqlQuery->EndsWith(" AND "))
    {
        sqlQuery = sqlQuery->Remove(sqlQuery->LastIndexOf(" AND "));
    }
    // ���� ������ ������������� �� WHERE, ������ ��� ���� �����, � �� �������� ��� id_pc
    if (sqlQuery->EndsWith("WHERE "))
    {
        sqlQuery = "SELECT id_pc FROM public.users";
    }

    // ���������� ������� � ��������� id_pc
    OdbcCommand^ command = gcnew OdbcCommand(sqlQuery, connection);
    OdbcDataAdapter^ adapter = gcnew OdbcDataAdapter(command);
    DataTable^ dataTable = gcnew DataTable();
    adapter->Fill(dataTable);

    // ������������ ������ id_pc ��� ����������
    List<String^>^ idList = gcnew List<String^>();
    for each (DataRow ^ row in dataTable->Rows)
    {
        idList->Add(row["id_pc"]->ToString());
    }
    String^ ids = String::Join(",", idList); // �������������� ������ � ������ ��� SQL �������

    // ������������ ������� � ������� user_prog � ������ ���������� id_pc
    String^ sqlUserProg = "SELECT * FROM public.user_prog WHERE id_pc IN (" + ids + ")";

    // ���������� ������� � ���������� DataTable ��� user_prog
    OdbcCommand^ cmdUserProg = gcnew OdbcCommand(sqlUserProg, connection);
    OdbcDataAdapter^ daUserProg = gcnew OdbcDataAdapter(cmdUserProg);
    DataTable^ dtUserProg = gcnew DataTable();
    daUserProg->Fill(dtUserProg);

    // �������� DataTable � DataGridView
    datagrid->DataSource = dtUserProg;

    // ����������� �����
    for each (DataGridViewRow ^ row in datagrid->Rows)
    {
        // ��������� �������� �� null
        String^ progName = row->Cells["name_prog"]->Value != nullptr ? row->Cells["name_prog"]->Value->ToString() : "";
        String^ progVersion = row->Cells["version_prog"]->Value != nullptr ? row->Cells["version_prog"]->Value->ToString() : "";

        // �������� �� ����������� ���������
        for each (DataRow ^ prohibitedRow in dtProhibited->Rows)
        {
            if (progName == prohibitedRow["name_prog"]->ToString())
            {
                row->DefaultCellStyle->BackColor = Color::Red;
                break;
            }
        }

        // �������� �� ����������� ���������
        bool nameMatch = false;
        for each (DataRow ^ allowedRow in dtAllowed->Rows)
        {
            if (progName == safe_cast<String^>(allowedRow["name_prog"]))
            {
                nameMatch = true;
                // ���������� � ���� � �������� �� null ����� ������� ToString()
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

    // �������� ����������� � ���� ������
    connection->Close();
}

void AddTrackingRecordByIPv4(String^ ipv4)
{
    OdbcConnection^ connection = ConnectToDatabase();

    // ���������, �� ������� �� ��� ����������
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

    // ���������, �� ������� �� ��� ����������
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

    // ������� ����� ������� ������
    OdbcDataAdapter^ dataAdapter = gcnew OdbcDataAdapter("SELECT * FROM public.tracking", connection);
    DataTable^ dataTable = gcnew DataTable();

    // ��������� DataTable ������� �� ���� ������
    dataAdapter->Fill(dataTable);

    // ����������� DataTable � DataGridView
    dataGridView->DataSource = dataTable;
}

void DisplayImageFromId(TextBox^ textBox1, PictureBox^ pictureBox1)
{
    OdbcConnection^ connection = ConnectToDatabase();
    int idImage;

    // ���������, �� ������� �� ��� ����������
    if (connection->State != ConnectionState::Closed)
    {
        connection->Close();
    }

    // ������� ������������� ����� �� TextBox � �����
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
            MessageBox::Show("����������� � ����� id_image �� �������.");
        }

        connection->Close();
    }
}

void AddTrackingRecordByIPv4(TextBox^ textBox1)
{
    OdbcConnection^ connection = ConnectToDatabase();
    String^ ipv4 = textBox1->Text;
    int id_pc;

    // ���������, �� ������� �� ��� ����������
    if (connection->State != ConnectionState::Closed)
    {
        connection->Close();
    }
    connection->Open();
    // ������� id_pc �� ipv4
    OdbcCommand^ commandFindId = gcnew OdbcCommand("SELECT id_pc FROM public.users WHERE ipv4_pc = ?", connection);
    commandFindId->Parameters->AddWithValue("ipv4", ipv4);
    Object^ result = commandFindId->ExecuteScalar();

    if (result != nullptr)
    {
        id_pc = Convert::ToInt32(result);
        // ��������� ������ � ������� tracking
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

    // ���������, �� ������� �� ��� ����������
    if (connection->State != ConnectionState::Closed)
    {
        connection->Close();
    }
    connection->Open();
    // ������� id_pc �� ipv4
    OdbcCommand^ commandFindId = gcnew OdbcCommand("SELECT id_pc FROM public.users WHERE ipv4_pc = ?", connection);
    commandFindId->Parameters->AddWithValue("ipv4", ipv4);
    Object^ result = commandFindId->ExecuteScalar();

    if (result != nullptr)
    {
        id_pc = Convert::ToInt32(result);
        // ������� ������ �� ������� tracking
        OdbcCommand^ commandDelete = gcnew OdbcCommand("DELETE FROM public.ban_pc WHERE id_pc = ?", connection);
        commandDelete->Parameters->AddWithValue("id_pc", id_pc);
        commandDelete->ExecuteNonQuery();
    }
    connection->Close();
}