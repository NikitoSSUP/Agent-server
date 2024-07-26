using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Net;
using namespace System::Net::NetworkInformation;
using namespace System::Data::Odbc;
using namespace Microsoft::Win32;
using namespace System::Text;
using namespace System::Diagnostics;
using namespace System::IO;

#pragma once

OdbcConnection^ ConnectToDatabase();

void FillDataGridFromDatabase(System::Windows::Forms::DataGridView^ dataGridView);

void FillDataGridWithAllowedPrograms(DataGridView^ datagrid);

void FillDataGridWithProhibitedPrograms(DataGridView^ datagrid);

void FillDataGridWithLogStartEnd(DataGridView^ datagrid);

void FillDataGridViewWithImagesTable(DataGridView^ dataGridView);

void SearchUsersWithConditions(DataGridView^ datagrid, String^ ipv4, String^ ipv6, String^ mac, String^ name, String^ os_version);

void SearchLogStartEndByIPv4(DataGridView^ datagrid, String^ ipv4);

void InsertProgramToDatabase(String^ name, String^ version);

void InsertProhibitedProgramToDatabase(String^ name);

void DeleteProgramFromDatabase(String^ name);

void DeleteProhibitedProgramFromDatabase(String^ name);

void ColorizeUserProgRows(DataGridView^ datagrid, String^ textbox1, String^ textbox2, String^ textbox3, String^ textbox4, String^ textbox5);

void AddTrackingRecordByIPv4(String^ ipv4);

void RemoveTrackingRecordByIPv4(String^ ipv4);

void ViewTrackingTable(DataGridView^ dataGridView);

void DisplayImageFromId(TextBox^ textBox1, PictureBox^ pictureBox1);

void AddTrackingRecordByIPv4(TextBox^ textBox1);

void RemoveTrackingRecordByIPv4(TextBox^ textBox1);