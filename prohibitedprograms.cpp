#include "Agent.h"
#include "DatabaseFunctions.h"
#include "allowedprograms.h"
#include "log.h"
#include "prohibitedprograms.h"
#include "tracking.h"

System::Void AgentClient::prohibitedprograms::prohibitedprograms_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
    Application::Exit();
}

System::Void AgentClient::prohibitedprograms::ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); Agent^ f = gcnew Agent; f->Show();
}

System::Void AgentClient::prohibitedprograms::ñÏÈÑÎÊÐÀÇÐÅØÅÍÍÛÕÏÐÎÃÐÀÌÌToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); allowedprograms^ f = gcnew allowedprograms; f->Show();
}

System::Void AgentClient::prohibitedprograms::ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏÐÎÃÐÀÌÌToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); prohibitedprograms^ f = gcnew prohibitedprograms; f->Show();
}

System::Void AgentClient::prohibitedprograms::ëÎÃÈToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); log^ f = gcnew log; f->Show();
}

System::Void AgentClient::prohibitedprograms::îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); tracking^ f = gcnew tracking; f->Show();
}

System::Void AgentClient::prohibitedprograms::prohibitedprograms_Load(System::Object^ sender, System::EventArgs^ e)
{
    FillDataGridWithProhibitedPrograms(dataGridView1);
}

System::Void AgentClient::prohibitedprograms::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ programName = textBox1->Text;
    InsertProhibitedProgramToDatabase(programName);
    FillDataGridWithProhibitedPrograms(dataGridView1);
}

System::Void AgentClient::prohibitedprograms::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ programName = textBox1->Text;
    DeleteProhibitedProgramFromDatabase(programName);
    FillDataGridWithProhibitedPrograms(dataGridView1);
}
