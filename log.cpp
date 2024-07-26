#include "Agent.h"
#include "DatabaseFunctions.h"
#include "allowedprograms.h"
#include "log.h"
#include "prohibitedprograms.h"
#include "tracking.h"

System::Void AgentClient::log::log_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
    Application::Exit();
}

System::Void AgentClient::log::ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); Agent^ f = gcnew Agent; f->Show();
}

System::Void AgentClient::log::ñÏÈÑÎÊÐÀÇÐÅØÅÍÍÛÕÏÐÎÃÐÀÌÌToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); allowedprograms^ f = gcnew allowedprograms; f->Show();
}

System::Void AgentClient::log::ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏÐÎÃÐÀÌÌToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); prohibitedprograms^ f = gcnew prohibitedprograms; f->Show();
}

System::Void AgentClient::log::ëÎÃÈToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); log^ f = gcnew log; f->Show();
}

System::Void AgentClient::log::îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); tracking^ f = gcnew tracking; f->Show();
}

System::Void AgentClient::log::log_Load(System::Object^ sender, System::EventArgs^ e)
{
    FillDataGridWithLogStartEnd(dataGridView1);
}

System::Void AgentClient::log::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    FillDataGridWithLogStartEnd(dataGridView1);
}

System::Void AgentClient::log::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ ipv4 = textBox1->Text;
    SearchLogStartEndByIPv4(dataGridView1, ipv4);
}
