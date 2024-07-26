#pragma once

namespace AgentClient {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ Agent
	/// </summary>
	public ref class Agent : public System::Windows::Forms::Form
	{
	public:
		Agent(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~Agent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñÏÈÑÎÊĞÀÇĞÅØÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ëÎÃÈToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñÏÈÑÎÊĞÀÇĞÅØÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ëÎÃÈToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem,
					this->ñÏÈÑÎÊĞÀÇĞÅØÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem, this->ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem, this->ëÎÃÈToolStripMenuItem,
					this->îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1175, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem
			// 
			this->ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem->ImageTransparentColor = System::Drawing::SystemColors::ActiveCaption;
			this->ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem->Name = L"ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem";
			this->ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem->Size = System::Drawing::Size(229, 21);
			this->ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem->Text = L"ÑÏÈÑÎÊ ÏÎËÜÇÎÂÀÒÅËÅÉ";
			this->ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem->Click += gcnew System::EventHandler(this, &Agent::ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem_Click);
			// 
			// ñÏÈÑÎÊĞÀÇĞÅØÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem
			// 
			this->ñÏÈÑÎÊĞÀÇĞÅØÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ñÏÈÑÎÊĞÀÇĞÅØÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ñÏÈÑÎÊĞÀÇĞÅØÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem->ImageTransparentColor = System::Drawing::SystemColors::ActiveCaption;
			this->ñÏÈÑÎÊĞÀÇĞÅØÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem->Name = L"ñÏÈÑÎÊĞÀÇĞÅØÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem";
			this->ñÏÈÑÎÊĞÀÇĞÅØÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem->Size = System::Drawing::Size(310, 21);
			this->ñÏÈÑÎÊĞÀÇĞÅØÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem->Text = L"ÑÏÈÑÎÊ ĞÀÇĞÅØÅÍÍÛÕ ÏĞÎÃĞÀÌÌ";
			this->ñÏÈÑÎÊĞÀÇĞÅØÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem->Click += gcnew System::EventHandler(this, &Agent::ñÏÈÑÎÊĞÀÇĞÅØÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem_Click);
			// 
			// ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem
			// 
			this->ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem->ImageTransparentColor = System::Drawing::SystemColors::ActiveCaption;
			this->ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem->Name = L"ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem";
			this->ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem->Size = System::Drawing::Size(306, 21);
			this->ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem->Text = L"ÑÏÈÑÎÊ ÇÀÏÅÙÅÍÍÛÕ ÏĞÎÃĞÀÌÌ";
			this->ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem->Click += gcnew System::EventHandler(this, &Agent::ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem_Click);
			// 
			// ëÎÃÈToolStripMenuItem
			// 
			this->ëÎÃÈToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ëÎÃÈToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ëÎÃÈToolStripMenuItem->ImageTransparentColor = System::Drawing::SystemColors::ActiveCaption;
			this->ëÎÃÈToolStripMenuItem->Name = L"ëÎÃÈToolStripMenuItem";
			this->ëÎÃÈToolStripMenuItem->Size = System::Drawing::Size(65, 21);
			this->ëÎÃÈToolStripMenuItem->Text = L"ËÎÃÈ";
			this->ëÎÃÈToolStripMenuItem->Click += gcnew System::EventHandler(this, &Agent::ëÎÃÈToolStripMenuItem_Click);
			// 
			// îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem
			// 
			this->îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem->ImageTransparentColor = System::Drawing::SystemColors::ActiveCaption;
			this->îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem->Name = L"îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem";
			this->îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem->Size = System::Drawing::Size(247, 21);
			this->îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem->Text = L"ÎÒÑËÅÆÅÍÀÍÈÅ ÄÅÉÑÒÂÈÉ";
			this->îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem->Click += gcnew System::EventHandler(this, &Agent::îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->Location = System::Drawing::Point(12, 28);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->Size = System::Drawing::Size(1153, 378);
			this->dataGridView1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(102, 417);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 22);
			this->label1->TabIndex = 2;
			this->label1->Text = L"IPv4";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(102, 452);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 22);
			this->label2->TabIndex = 3;
			this->label2->Text = L"IPv6";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(577, 419);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 22);
			this->label3->TabIndex = 4;
			this->label3->Text = L"mac address";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(563, 454);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(126, 22);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Íàçâàíèå ÏÊ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(339, 487);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 22);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Âåğñèÿ ÎÑ";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(156, 416);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(331, 29);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(156, 450);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(331, 29);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(695, 415);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(331, 29);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(695, 450);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(331, 29);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(451, 485);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(331, 29);
			this->textBox5->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(1024, 517);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 61);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Íàéòè";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Agent::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(877, 517);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 61);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Âñå ïîëüçîâàòåëè";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Agent::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(730, 517);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(141, 61);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Ïğîãğàììû ïîëüçîâàòåëÿ";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Agent::button3_Click);
			// 
			// Agent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1175, 590);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Agent";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Agent";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Agent::Agent_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Agent::Agent_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Agent_Load(System::Object^ sender, System::EventArgs^ e);
    private: System::Void Agent_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
    private: System::Void ñÏÈÑÎÊĞÀÇĞÅØÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void ëÎÃÈToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
};
}
