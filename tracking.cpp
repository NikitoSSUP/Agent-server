#include "Agent.h"
#include "DatabaseFunctions.h"
#include "allowedprograms.h"
#include "log.h"
#include "prohibitedprograms.h"
#include "tracking.h"

System::Void AgentClient::tracking::tracking_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
    Application::Exit();
}

System::Void AgentClient::tracking::ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); Agent^ f = gcnew Agent; f->Show();
}

System::Void AgentClient::tracking::ñÏÈÑÎÊÐÀÇÐÅØÅÍÍÛÕÏÐÎÃÐÀÌÌToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); allowedprograms^ f = gcnew allowedprograms; f->Show();
}

System::Void AgentClient::tracking::ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏÐÎÃÐÀÌÌToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); prohibitedprograms^ f = gcnew prohibitedprograms; f->Show();
}

System::Void AgentClient::tracking::ëÎÃÈToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); log^ f = gcnew log; f->Show();
}

System::Void AgentClient::tracking::îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); tracking^ f = gcnew tracking; f->Show();
}

System::Void AgentClient::tracking::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    AddTrackingRecordByIPv4(textBox1->Text);
    ViewTrackingTable(dataGridView2);
}

System::Void AgentClient::tracking::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    RemoveTrackingRecordByIPv4(textBox1->Text);
    ViewTrackingTable(dataGridView2);
}

System::Void AgentClient::tracking::tracking_Load(System::Object^ sender, System::EventArgs^ e)
{
    FillDataGridFromDatabase(dataGridView1);
    ViewTrackingTable(dataGridView2);
    FillDataGridViewWithImagesTable(dataGridView3);
}

System::Void AgentClient::tracking::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
    FillDataGridViewWithImagesTable(dataGridView3);
}

System::Void AgentClient::tracking::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    DisplayImageFromId(textBox2, pictureBox1);
}

System::Void AgentClient::tracking::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    AddTrackingRecordByIPv4(textBox1);
}

System::Void AgentClient::tracking::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
    RemoveTrackingRecordByIPv4(textBox1);
}
