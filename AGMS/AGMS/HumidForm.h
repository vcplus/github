#pragma once

namespace AGMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// HumidForm ժҪ
	/// </summary>
	public ref class HumidForm : public System::Windows::Forms::Form
	{
	public:
		HumidForm(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~HumidForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	public:static  System::Windows::Forms::TextBox^  textBox1;
	public:static System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	protected:

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(98, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ʪ�ȶԿ�������Ӱ��";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(22, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(376, 80);
			this->label2->TabIndex = 2;
			this->label2->Text = L"ʪ���ǿ�����价���н�Ϊ��Ҫ�ı���������һЩ��\r\n��Ŀ�ݣ�����ʳƷ���ũ�������ݣ�ʪ�ȹ�����\r\n�׵��¿�ݱ��ʣ��洢����̣�������ù������һЩ\r\n�ʻ��Ʒ��ʪ"
				L"�ȹ�С���׵��²�Ʒ�����ڱ�̣�Ӱ��\r\n���Ʒ�ʡ�";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(284, 210);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 31);
			this->button1->TabIndex = 10;
			this->button1->Text = L"�˳�";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &HumidForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(131, 209);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 21);
			this->textBox1->TabIndex = 9;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(131, 176);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 20);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1�ų���", L"2�ų���", L"3�ų���" });
			this->comboBox1->SelectedIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(45, 210);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 14);
			this->label4->TabIndex = 6;
			this->label4->Text = L"��ǰʪ��";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(45, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 14);
			this->label3->TabIndex = 7;
			this->label3->Text = L"����ѡ��";
			// 
			// HumidForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(410, 261);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"HumidForm";
			this->Text = L"ʪ����ʾ";
			this->Load += gcnew System::EventHandler(this, &HumidForm::HumidForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void HumidForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
