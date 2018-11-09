#pragma once

namespace AMCS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// SettingForm 摘要
	/// </summary>
	public ref class SettingForm : public System::Windows::Forms::Form
	{
	public:
		SettingForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~SettingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox3;
	protected:
	public: System::Windows::Forms::RadioButton^  radioButton4;
	private:
	public: System::Windows::Forms::RadioButton^  radioButton3;
	public: System::Windows::Forms::RadioButton^  radioButton2;
	public: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	public:
	public: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private:
	public: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label6;
	public:
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	public: System::Windows::Forms::ComboBox^  comboBox4;
	private:
	public: System::Windows::Forms::ComboBox^  comboBox3;
	public: System::Windows::Forms::ComboBox^  comboBox2;
	public: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label4;
	public:
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	public: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private:
	public: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::Label^  label7;
	public:
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	public: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private:
	public: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::Label^  label9;
	public:
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	public: System::Windows::Forms::NumericUpDown^  numericUpDown7;
	private:
	public: System::Windows::Forms::NumericUpDown^  numericUpDown8;
	private: System::Windows::Forms::Label^  label11;
	public:
	private: System::Windows::Forms::Label^  label12;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->groupBox3->Controls->Add(this->radioButton4);
			this->groupBox3->Controls->Add(this->radioButton3);
			this->groupBox3->Controls->Add(this->radioButton2);
			this->groupBox3->Controls->Add(this->radioButton1);
			this->groupBox3->Location = System::Drawing::Point(12, 189);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(425, 50);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"图形模式";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(355, 20);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(35, 16);
			this->radioButton4->TabIndex = 0;
			this->radioButton4->Text = L"点";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(251, 20);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(59, 16);
			this->radioButton3->TabIndex = 0;
			this->radioButton3->Text = L"柱状图";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(145, 20);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(59, 16);
			this->radioButton2->TabIndex = 0;
			this->radioButton2->Text = L"曲线图";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(19, 20);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(59, 16);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"折线图";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->groupBox2->Controls->Add(this->numericUpDown2);
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(179, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(103, 70);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"酒精Y轴值范围";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(53, 43);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(44, 21);
			this->numericUpDown2->TabIndex = 1;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 120, 0, 0, 0 });
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(53, 18);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(44, 21);
			this->numericUpDown1->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 46);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 12);
			this->label6->TabIndex = 0;
			this->label6->Text = L"最大值";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 21);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 12);
			this->label5->TabIndex = 0;
			this->label5->Text = L"最小值";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Location = System::Drawing::Point(247, 262);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"取消";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &SettingForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Location = System::Drawing::Point(141, 262);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"确定";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SettingForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->groupBox1->Controls->Add(this->comboBox4);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(133, 156);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"线条颜色";
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"红色", L"深红色", L"橙色", L"黄色", L"浅黄色", L"绿色", L"浅绿色",
					L"深绿色", L"蓝色", L"浅蓝色", L"深蓝色", L"紫色", L"淡紫色", L"黑色", L"白色"
			});
			this->comboBox4->Location = System::Drawing::Point(67, 112);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(47, 20);
			this->comboBox4->TabIndex = 1;
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"红色", L"深红色", L"橙色", L"黄色", L"浅黄色", L"绿色", L"浅绿色",
					L"深绿色", L"蓝色", L"浅蓝色", L"深蓝色", L"紫色", L"淡紫色", L"黑色", L"白色"
			});
			this->comboBox3->Location = System::Drawing::Point(67, 86);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(47, 20);
			this->comboBox3->TabIndex = 1;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"红色", L"深红色", L"橙色", L"黄色", L"浅黄色", L"绿色", L"浅绿色",
					L"深绿色", L"蓝色", L"浅蓝色", L"深蓝色", L"紫色", L"淡紫色", L"黑色", L"白色"
			});
			this->comboBox2->Location = System::Drawing::Point(67, 56);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(47, 20);
			this->comboBox2->TabIndex = 1;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"红色", L"深红色", L"橙色", L"黄色", L"浅黄色", L"绿色", L"浅绿色",
					L"深绿色", L"蓝色", L"浅蓝色", L"深蓝色", L"紫色", L"淡紫色", L"黑色", L"白色"
			});
			this->comboBox1->Location = System::Drawing::Point(67, 26);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(47, 20);
			this->comboBox1->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(24, 86);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 12);
			this->label4->TabIndex = 0;
			this->label4->Text = L"温度";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 12);
			this->label3->TabIndex = 0;
			this->label3->Text = L"湿度";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 12);
			this->label2->TabIndex = 0;
			this->label2->Text = L"PM2.5";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"酒精";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->groupBox4->Controls->Add(this->numericUpDown3);
			this->groupBox4->Controls->Add(this->numericUpDown4);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Location = System::Drawing::Point(179, 98);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(103, 70);
			this->groupBox4->TabIndex = 9;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"温度Y轴值范围";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(53, 43);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(44, 21);
			this->numericUpDown3->TabIndex = 1;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(53, 18);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(44, 21);
			this->numericUpDown4->TabIndex = 1;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 46);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 12);
			this->label7->TabIndex = 0;
			this->label7->Text = L"最大值";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 21);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(41, 12);
			this->label8->TabIndex = 0;
			this->label8->Text = L"最小值";
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->groupBox5->Controls->Add(this->numericUpDown5);
			this->groupBox5->Controls->Add(this->numericUpDown6);
			this->groupBox5->Controls->Add(this->label9);
			this->groupBox5->Controls->Add(this->label10);
			this->groupBox5->Location = System::Drawing::Point(334, 12);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(103, 70);
			this->groupBox5->TabIndex = 10;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"PM2.5Y轴值范围";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(53, 43);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 400, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(44, 21);
			this->numericUpDown5->TabIndex = 1;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(53, 18);
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(44, 21);
			this->numericUpDown6->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 46);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(41, 12);
			this->label9->TabIndex = 0;
			this->label9->Text = L"最大值";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 21);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 12);
			this->label10->TabIndex = 0;
			this->label10->Text = L"最小值";
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->groupBox6->Controls->Add(this->numericUpDown7);
			this->groupBox6->Controls->Add(this->numericUpDown8);
			this->groupBox6->Controls->Add(this->label11);
			this->groupBox6->Controls->Add(this->label12);
			this->groupBox6->Location = System::Drawing::Point(334, 98);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(103, 70);
			this->groupBox6->TabIndex = 11;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"湿度Y轴值范围";
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(53, 43);
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(44, 21);
			this->numericUpDown7->TabIndex = 1;
			this->numericUpDown7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 80, 0, 0, 0 });
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(53, 18);
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(44, 21);
			this->numericUpDown8->TabIndex = 1;
			this->numericUpDown8->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 46);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 12);
			this->label11->TabIndex = 0;
			this->label11->Text = L"最大值";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 21);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 12);
			this->label12->TabIndex = 0;
			this->label12->Text = L"最小值";
			// 
			// SettingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(464, 301);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"SettingForm";
			this->Text = L"设置图表显示";
			this->Load += gcnew System::EventHandler(this, &SettingForm::SettingForm_Load);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void SettingForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->comboBox1->SelectedIndex = 0;
				 this->comboBox2->SelectedIndex = 1;
				 this->comboBox3->SelectedIndex = 2;
				 this->comboBox4->SelectedIndex = 3;
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->DialogResult = Windows::Forms::DialogResult::OK;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
};
}
