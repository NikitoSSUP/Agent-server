#pragma once

namespace AgentClient {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ tracking
	/// </summary>
	public ref class tracking : public System::Windows::Forms::Form
	{
	public:
		tracking(void)
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
		~tracking()
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
	private: System::Windows::Forms::ToolStripMenuItem^ ëÎÃÈToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñÏÈÑÎÊĞÀÇĞÅØÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ëÎÃÈToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
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
			this->menuStrip1->Size = System::Drawing::Size(1459, 25);
			this->menuStrip1->TabIndex = 1;
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
			this->ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem->Click += gcnew System::EventHandler(this, &tracking::ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem_Click);
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
			this->ñÏÈÑÎÊĞÀÇĞÅØÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem->Click += gcnew System::EventHandler(this, &tracking::ñÏÈÑÎÊĞÀÇĞÅØÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem_Click);
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
			this->ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem->Click += gcnew System::EventHandler(this, &tracking::ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem_Click);
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
			this->ëÎÃÈToolStripMenuItem->Click += gcnew System::EventHandler(this, &tracking::ëÎÃÈToolStripMenuItem_Click);
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
			this->îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem->Click += gcnew System::EventHandler(this, &tracking::îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem_Click);
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
			this->dataGridView1->Size = System::Drawing::Size(584, 200);
			this->dataGridView1->TabIndex = 2;
			// 
			// dataGridView2
			// 
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView2->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView2->Location = System::Drawing::Point(12, 234);
			this->dataGridView2->Name = L"dataGridView2";
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView2->Size = System::Drawing::Size(277, 132);
			this->dataGridView2->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(182, 479);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 61);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Ïğåêğàòèòü îòñëåæèâàòü";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &tracking::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(325, 479);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 61);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Îòñëåæèâàòü";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &tracking::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(191, 427);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(331, 29);
			this->textBox1->TabIndex = 20;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(17, 429);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 22);
			this->label1->TabIndex = 19;
			this->label1->Text = L"IPv4";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(602, 28);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(845, 512);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(465, 479);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(131, 61);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Ïîñìîòğåòü";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &tracking::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(191, 392);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(331, 29);
			this->textBox2->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(17, 394);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 22);
			this->label2->TabIndex = 23;
			this->label2->Text = L"ID SCREENSHOT";
			// 
			// dataGridView3
			// 
			dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView3->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridView3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle10->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle10;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle11->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView3->DefaultCellStyle = dataGridViewCellStyle11;
			this->dataGridView3->Location = System::Drawing::Point(295, 234);
			this->dataGridView3->Name = L"dataGridView3";
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle12->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle12->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle12->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle12->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle12->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->RowHeadersDefaultCellStyle = dataGridViewCellStyle12;
			this->dataGridView3->Size = System::Drawing::Size(301, 132);
			this->dataGridView3->TabIndex = 25;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 20000;
			this->timer1->Tick += gcnew System::EventHandler(this, &tracking::timer1_Tick);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(12, 479);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(72, 61);
			this->button4->TabIndex = 26;
			this->button4->Text = L"BAN";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &tracking::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::ForestGreen;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(90, 479);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(86, 61);
			this->button5->TabIndex = 27;
			this->button5->Text = L"UNBAN";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &tracking::button5_Click);
			// 
			// tracking
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1459, 557);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"tracking";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"tracking";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &tracking::tracking_FormClosing);
			this->Load += gcnew System::EventHandler(this, &tracking::tracking_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tracking_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
    private: System::Void ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void ñÏÈÑÎÊĞÀÇĞÅØÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void ëÎÃÈToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void tracking_Load(System::Object^ sender, System::EventArgs^ e);
    private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
};
}
