#pragma once

namespace AgentClient {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ prohibitedprograms
	/// </summary>
	public ref class prohibitedprograms : public System::Windows::Forms::Form
	{
	public:
		prohibitedprograms(void)
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
		~prohibitedprograms()
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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label1;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem->Click += gcnew System::EventHandler(this, &prohibitedprograms::ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem_Click);
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
			this->ñÏÈÑÎÊĞÀÇĞÅØÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem->Click += gcnew System::EventHandler(this, &prohibitedprograms::ñÏÈÑÎÊĞÀÇĞÅØÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem_Click);
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
			this->ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem->Click += gcnew System::EventHandler(this, &prohibitedprograms::ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem_Click);
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
			this->ëÎÃÈToolStripMenuItem->Click += gcnew System::EventHandler(this, &prohibitedprograms::ëÎÃÈToolStripMenuItem_Click);
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
			this->îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem->Click += gcnew System::EventHandler(this, &prohibitedprograms::îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem_Click);
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
			this->dataGridView1->Location = System::Drawing::Point(10, 28);
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
			this->dataGridView1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(875, 427);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 61);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Óäàëèòü";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &prohibitedprograms::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(1022, 427);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 61);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Äîáàâèòü";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &prohibitedprograms::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(111, 425);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(331, 29);
			this->textBox1->TabIndex = 18;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 427);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 22);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Íàçâàíèå";
			// 
			// prohibitedprograms
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1175, 503);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"prohibitedprograms";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"prohibitedprograms";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &prohibitedprograms::prohibitedprograms_FormClosing);
			this->Load += gcnew System::EventHandler(this, &prohibitedprograms::prohibitedprograms_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void prohibitedprograms_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
    private: System::Void ñÏÈÑÎÊÏÎËÜÇÎÂÀÒÅËÅÉToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void ñÏÈÑÎÊĞÀÇĞÅØÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void ñÏÈÑÎÊÇÀÏÅÙÅÍÍÛÕÏĞÎÃĞÀÌÌToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void ëÎÃÈToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void îÒÑËÅÆÅÍÀÍÈÅÄÅÉÑÒÂÈÉToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void prohibitedprograms_Load(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
};
}
