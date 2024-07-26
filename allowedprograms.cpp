#include "Agent.h"
#include "DatabaseFunctions.h"
#include "allowedprograms.h"
#include "log.h"
#include "prohibitedprograms.h"
#include "tracking.h"

System::Void AgentClient::allowedprograms::allowedprograms_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
    Application::Exit();
}

System::Void AgentClient::allowedprograms::ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); Agent^ f = gcnew Agent; f->Show();
}

System::Void AgentClient::allowedprograms::ñÏÈÑÎÊÐÀÇÐÅØÅÍÍÛÕÏÐÎÃÐÀÌÌToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); allowedprograms^ f = gcnew allowedprograms; f->Show();
}

System::Void AgentClient::allowedprograms::ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏÐÎÃÐÀÌÌToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); prohibitedprograms^ f = gcnew prohibitedprograms; f->Show();
}

System::Void AgentClient::allowedprograms::ëÎÃÈToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); log^ f = gcnew log; f->Show();
}

System::Void AgentClient::allowedprograms::îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); tracking^ f = gcnew tracking; f->Show();
}

System::Void AgentClient::allowedprograms::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
     String^ programName = textBox1->Text;
     String^ programVersion = textBox2->Text;
     InsertProgramToDatabase(programName, programVersion);
     FillDataGridWithAllowedPrograms(dataGridView1);
}

System::Void AgentClient::allowedprograms::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
     String^ programName = textBox1->Text;
     DeleteProgramFromDatabase(programName);
     FillDataGridWithAllowedPrograms(dataGridView1);
}

System::Void AgentClient::allowedprograms::allowedprograms_Load(System::Object^ sender, System::EventArgs^ e)
{
    FillDataGridWithAllowedPrograms(dataGridView1);
}
