#pragma once


namespace HomeBank {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 �̊T�v
	///
	/// �x��: ���̃N���X�̖��O��ύX����ꍇ�A���̃N���X���ˑ����邷�ׂĂ� .resx �t�@�C���Ɋ֘A�t����ꂽ
	///          �}�l�[�W ���\�[�X �R���p�C�� �c�[���ɑ΂��� 'Resource File Name' �v���p�e�B��
	///          �ύX����K�v������܂��B���̕ύX���s��Ȃ��ƁA
	///          �f�U�C�i�ƁA���̃t�H�[���Ɋ֘A�t����ꂽ���[�J���C�Y�ς݃��\�[�X�Ƃ��A
	///          ���������݂ɗ��p�ł��Ȃ��Ȃ�܂��B
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^ �R�[�h��ǉ����܂�
			//
		}

	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::DateTimePicker^  dateCalendar;
	protected: 

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textName;
	private: System::Windows::Forms::ListBox^  listMoney;


	private: System::Windows::Forms::ComboBox^  comboKind;
	private: System::Windows::Forms::TextBox^  textMoney;


	private: System::Windows::Forms::Button^  buttonAdd;
	private: System::Windows::Forms::Button^  buttonDelete;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textSum;
	private: System::Windows::Forms::ToolStripMenuItem^  �t�@�C��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �J��OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �㏑���ۑ�SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���O�����ĕۑ�AToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����CToolStripMenuItem;











	private:
		/// <summary>
		/// �K�v�ȃf�U�C�i�ϐ��ł��B
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �f�U�C�i �T�|�[�g�ɕK�v�ȃ��\�b�h�ł��B���̃��\�b�h�̓��e��
		/// �R�[�h �G�f�B�^�ŕύX���Ȃ��ł��������B
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->dateCalendar = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textName = (gcnew System::Windows::Forms::TextBox());
			this->listMoney = (gcnew System::Windows::Forms::ListBox());
			this->comboKind = (gcnew System::Windows::Forms::ComboBox());
			this->textMoney = (gcnew System::Windows::Forms::TextBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textSum = (gcnew System::Windows::Forms::TextBox());
			this->�t�@�C��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�J��OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�㏑���ۑ�SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���O�����ĕۑ�AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->�t�@�C��ToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(778, 26);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// dateCalendar
			// 
			this->dateCalendar->Location = System::Drawing::Point(12, 37);
			this->dateCalendar->Name = L"dateCalendar";
			this->dateCalendar->Size = System::Drawing::Size(200, 19);
			this->dateCalendar->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 12);
			this->label1->TabIndex = 2;
			this->label1->Text = L"�i���F";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 12);
			this->label2->TabIndex = 4;
			this->label2->Text = L"���ށF";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 12);
			this->label3->TabIndex = 6;
			this->label3->Text = L"���z�F";
			// 
			// textName
			// 
			this->textName->Location = System::Drawing::Point(67, 63);
			this->textName->Name = L"textName";
			this->textName->Size = System::Drawing::Size(145, 19);
			this->textName->TabIndex = 3;
			// 
			// listMoney
			// 
			this->listMoney->FormattingEnabled = true;
			this->listMoney->ItemHeight = 12;
			this->listMoney->Location = System::Drawing::Point(242, 66);
			this->listMoney->Name = L"listMoney";
			this->listMoney->Size = System::Drawing::Size(426, 196);
			this->listMoney->TabIndex = 12;
			// 
			// comboKind
			// 
			this->comboKind->FormattingEnabled = true;
			this->comboKind->Location = System::Drawing::Point(67, 85);
			this->comboKind->Name = L"comboKind";
			this->comboKind->Size = System::Drawing::Size(145, 20);
			this->comboKind->TabIndex = 5;
			// 
			// textMoney
			// 
			this->textMoney->Location = System::Drawing::Point(67, 112);
			this->textMoney->Name = L"textMoney";
			this->textMoney->Size = System::Drawing::Size(145, 19);
			this->textMoney->TabIndex = 7;
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(67, 149);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(75, 23);
			this->buttonAdd->TabIndex = 0;
			this->buttonAdd->Text = L"button1";
			this->buttonAdd->UseVisualStyleBackColor = true;
			// 
			// buttonDelete
			// 
			this->buttonDelete->Location = System::Drawing::Point(148, 149);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(75, 23);
			this->buttonDelete->TabIndex = 9;
			this->buttonDelete->Text = L"button2";
			this->buttonDelete->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(240, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 12);
			this->label4->TabIndex = 10;
			this->label4->Text = L"���v�F";
			// 
			// textSum
			// 
			this->textSum->Location = System::Drawing::Point(296, 37);
			this->textSum->Name = L"textSum";
			this->textSum->Size = System::Drawing::Size(100, 19);
			this->textSum->TabIndex = 11;
			this->textSum->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// �t�@�C��ToolStripMenuItem
			// 
			this->�t�@�C��ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->�J��OToolStripMenuItem, 
				this->�㏑���ۑ�SToolStripMenuItem, this->���O�����ĕۑ�AToolStripMenuItem, this->����CToolStripMenuItem});
			this->�t�@�C��ToolStripMenuItem->Name = L"�t�@�C��ToolStripMenuItem";
			this->�t�@�C��ToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->�t�@�C��ToolStripMenuItem->Text = L"�t�@�C��(&F)";
			this->�t�@�C��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�t�@�C��ToolStripMenuItem_Click);
			// 
			// �J��OToolStripMenuItem
			// 
			this->�J��OToolStripMenuItem->Name = L"�J��OToolStripMenuItem";
			this->�J��OToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->�J��OToolStripMenuItem->Text = L"�J��(&O)";
			// 
			// �㏑���ۑ�SToolStripMenuItem
			// 
			this->�㏑���ۑ�SToolStripMenuItem->Name = L"�㏑���ۑ�SToolStripMenuItem";
			this->�㏑���ۑ�SToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->�㏑���ۑ�SToolStripMenuItem->Text = L"�㏑���ۑ�(&S)";
			// 
			// ���O�����ĕۑ�AToolStripMenuItem
			// 
			this->���O�����ĕۑ�AToolStripMenuItem->Name = L"���O�����ĕۑ�AToolStripMenuItem";
			this->���O�����ĕۑ�AToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->���O�����ĕۑ�AToolStripMenuItem->Text = L"���O�����ĕۑ�(&A)";
			// 
			// ����CToolStripMenuItem
			// 
			this->����CToolStripMenuItem->Name = L"����CToolStripMenuItem";
			this->����CToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->����CToolStripMenuItem->Text = L"����(&C)";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(778, 331);
			this->Controls->Add(this->textSum);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->textMoney);
			this->Controls->Add(this->comboKind);
			this->Controls->Add(this->listMoney);
			this->Controls->Add(this->textName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateCalendar);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"HomeBank";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void �t�@�C��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

