#include "Agent.h"
#include "DatabaseFunctions.h"
#include "allowedprograms.h"
#include "log.h"
#include "prohibitedprograms.h"
#include "tracking.h"

System::Void AgentClient::Agent::Agent_Load(System::Object^ sender, System::EventArgs^ e)
{
	FillDataGridFromDatabase(dataGridView1);
}

System::Void AgentClient::Agent::Agent_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	Application::Exit();
}

System::Void AgentClient::Agent::ñÏÈÑÎÊÐÀÇÐÅØÅÍÍÛÕÏÐÎÃÐÀÌÌToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Hide(); allowedprograms^ f = gcnew allowedprograms; f->Show();
}

System::Void AgentClient::Agent::ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏÐÎÃÐÀÌÌToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Hide(); prohibitedprograms^ f = gcnew prohibitedprograms; f->Show();
}

System::Void AgentClient::Agent::ëÎÃÈToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Hide(); log^ f = gcnew log; f->Show();
}

System::Void AgentClient::Agent::îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Hide(); tracking^ f = gcnew tracking; f->Show();
}

System::Void AgentClient::Agent::ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Hide(); Agent^ f = gcnew Agent; f->Show();
}

System::Void AgentClient::Agent::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	FillDataGridFromDatabase(dataGridView1);
}

System::Void AgentClient::Agent::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	SearchUsersWithConditions(dataGridView1, textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text);
}

System::Void AgentClient::Agent::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	ColorizeUserProgRows(dataGridView1, textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text);
	dataGridView1->Refresh();
}
