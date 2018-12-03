#pragma once
namespace AGMS {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	/// <summary>
	/// HistorySearch 摘要
	/// </summary>
	public ref class HistorySearch : public System::Windows::Forms::Form
	{
	public:
		HistorySearch(void)
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
		~HistorySearch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Data::Odbc::OdbcCommand^  odbcSelectCommand1;
	protected:
	private: System::Data::Odbc::OdbcCommand^  odbcInsertCommand1;
	private: System::Data::Odbc::OdbcCommand^  odbcUpdateCommand1;
	private: System::Data::Odbc::OdbcCommand^  odbcDeleteCommand1;
	private: System::Data::Odbc::OdbcDataAdapter^  odbcDataAdapter1;
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
	private: System::Data::DataSet^  dataSet1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label2;


	private: System::Windows::Forms::ListView^  listView1;

	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label3;


	private: System::Windows::Forms::GroupBox^  groupBox4;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::GroupBox^  groupBox5;


	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::GroupBox^  groupBox6;


	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label13;

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
			this->odbcSelectCommand1 = (gcnew System::Data::Odbc::OdbcCommand());
			this->odbcInsertCommand1 = (gcnew System::Data::Odbc::OdbcCommand());
			this->odbcUpdateCommand1 = (gcnew System::Data::Odbc::OdbcCommand());
			this->odbcDeleteCommand1 = (gcnew System::Data::Odbc::OdbcCommand());
			this->odbcDataAdapter1 = (gcnew System::Data::Odbc::OdbcDataAdapter());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			this->SuspendLayout();
			// 
			// odbcDataAdapter1
			// 
			this->odbcDataAdapter1->DeleteCommand = this->odbcDeleteCommand1;
			this->odbcDataAdapter1->InsertCommand = this->odbcInsertCommand1;
			this->odbcDataAdapter1->SelectCommand = this->odbcSelectCommand1;
			this->odbcDataAdapter1->UpdateCommand = this->odbcUpdateCommand1;
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Yellow;
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->dateTimePicker2);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Green;
			this->groupBox1->Location = System::Drawing::Point(52, 100);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(341, 197);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"选择查询时间范围";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &HistorySearch::groupBox1_Enter);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"结束时间";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"开始时间";
			this->label1->Click += gcnew System::EventHandler(this, &HistorySearch::label1_Click);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"yyyy/MM/dd HH:mm:ss";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(6, 130);
			this->dateTimePicker2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(280, 34);
			this->dateTimePicker2->TabIndex = 1;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy/MM/dd HH:mm:ss";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(6, 55);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(273, 34);
			this->dateTimePicker1->TabIndex = 0;
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(749, 85);
			this->listView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(869, 513);
			this->listView1->TabIndex = 7;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(711, 34);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"历史数据表";
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1号车数据表", L"2号车数据表", L"3号车数据表" });
			this->comboBox2->Location = System::Drawing::Point(951, 34);
			this->comboBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(177, 28);
			this->comboBox2->TabIndex = 8;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &HistorySearch::comboBox2_SelectedIndexChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkBox1->Location = System::Drawing::Point(6, 31);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(115, 24);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"日期时间";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->groupBox2->Controls->Add(this->checkBox5);
			this->groupBox2->Controls->Add(this->checkBox4);
			this->groupBox2->Controls->Add(this->checkBox3);
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(52, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(545, 72);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"请选择查询特征值";
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkBox5->Location = System::Drawing::Point(395, 31);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(115, 24);
			this->checkBox5->TabIndex = 13;
			this->checkBox5->Text = L"有害气体";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkBox4->Location = System::Drawing::Point(295, 31);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(94, 24);
			this->checkBox4->TabIndex = 12;
			this->checkBox4->Text = L"震荡度";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkBox3->Location = System::Drawing::Point(216, 31);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(73, 24);
			this->checkBox3->TabIndex = 11;
			this->checkBox3->Text = L"湿度";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkBox2->Location = System::Drawing::Point(117, 31);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(73, 24);
			this->checkBox2->TabIndex = 11;
			this->checkBox2->Text = L"温度";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->numericUpDown2);
			this->groupBox3->Controls->Add(this->numericUpDown1);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->Location = System::Drawing::Point(422, 100);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(218, 98);
			this->groupBox3->TabIndex = 11;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"请输入查询温度范围";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(98, 53);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 30);
			this->numericUpDown2->TabIndex = 5;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(98, 24);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 30);
			this->numericUpDown1->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(48, 55);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 20);
			this->label5->TabIndex = 3;
			this->label5->Text = L"to";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"from";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->numericUpDown4);
			this->groupBox4->Controls->Add(this->numericUpDown3);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox4->Location = System::Drawing::Point(422, 204);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(231, 100);
			this->groupBox4->TabIndex = 12;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"请输入湿度查询范围";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(98, 60);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(120, 30);
			this->numericUpDown4->TabIndex = 6;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(98, 24);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 30);
			this->numericUpDown3->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 45);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 20);
			this->label7->TabIndex = 1;
			this->label7->Text = L"to";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 26);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 20);
			this->label6->TabIndex = 0;
			this->label6->Text = L"from";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->numericUpDown6);
			this->groupBox5->Controls->Add(this->numericUpDown5);
			this->groupBox5->Controls->Add(this->label9);
			this->groupBox5->Controls->Add(this->label8);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox5->Location = System::Drawing::Point(58, 330);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(234, 100);
			this->groupBox5->TabIndex = 13;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"请输入震荡度查询范围";
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(77, 52);
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(120, 30);
			this->numericUpDown6->TabIndex = 16;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(77, 19);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(120, 30);
			this->numericUpDown5->TabIndex = 15;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 51);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(29, 20);
			this->label9->TabIndex = 14;
			this->label9->Text = L"to";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 21);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 20);
			this->label8->TabIndex = 14;
			this->label8->Text = L"from";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->numericUpDown8);
			this->groupBox6->Controls->Add(this->numericUpDown7);
			this->groupBox6->Controls->Add(this->label11);
			this->groupBox6->Controls->Add(this->label10);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox6->Location = System::Drawing::Point(422, 330);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(250, 100);
			this->groupBox6->TabIndex = 14;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"请输入有害气体查询范围";
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(104, 48);
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(120, 30);
			this->numericUpDown8->TabIndex = 6;
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(104, 16);
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(120, 30);
			this->numericUpDown7->TabIndex = 5;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 48);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(29, 20);
			this->label11->TabIndex = 1;
			this->label11->Text = L"to";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 28);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 20);
			this->label10->TabIndex = 0;
			this->label10->Text = L"from";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(807, 633);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 57);
			this->button1->TabIndex = 15;
			this->button1->Text = L"记录统计：";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &HistorySearch::button1_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->Location = System::Drawing::Point(971, 644);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(30, 20);
			this->label12->TabIndex = 16;
			this->label12->Text = L"共";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1007, 639);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 25);
			this->textBox1->TabIndex = 17;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->Location = System::Drawing::Point(1113, 644);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(30, 20);
			this->label13->TabIndex = 18;
			this->label13->Text = L"条";
			// 
			// HistorySearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1732, 702);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"HistorySearch";
			this->Text = L"历史查询";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	}

	private: BindingSource^ binding1;

	private: System::Void DispView(DataTable^ table)

	{

				 this->listView1->Columns->Clear();

				 this->listView1->Items->Clear();

				 //this->listView1->AutoResizeColumns(ColumnHeaderAutoResizeStyle::ColumnContent);

				 if (table == nullptr) return;

				 ListViewItem^ item;

				 for each (DataRow^ row in table->Rows)

				 {

					 if (row->RowState != DataRowState::Deleted)// 不能是已删除的行

					 {

						 item = gcnew ListViewItem(row[0]->ToString());

						 for (int i = 1; i<table->Columns->Count; i++)

							 item->SubItems->Add(row[i]->ToString());

					 }

					 listView1->Items->Add(item);

				 }

				 // 创建ListView列表头

				 for each (DataColumn^ col in table->Columns)

					 listView1->Columns->Add(col->Caption, 80);

	}

			 /*private: System::Void ScoreTab_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

			 if (listView1->Items->Count<1)return;

			 Graphics^ g = e->Graphics;

			 Drawing::Font^ font = gcnew Drawing::Font(L"宋体", 12, FontStyle::Regular);

			 SolidBrush^ brush1 = gcnew SolidBrush(Color::Blue);//蓝色文本

			 StringFormat^ format = gcnew StringFormat();

			 array<float>^ tabStops = gcnew array<float>{90.0f, 120.0f, 60.0f, 60.0f, 60.0f};

			 format->SetTabStops(0.0f, tabStops);         // 设置制表位
			 int nIndex = this->comboBox1->SelectedIndex;
			 String^ strTableName = this->comboBox1->Items[nIndex]->ToString();			 // 获取选择的数据表名
			 if (strTableName == "异常数据表_酒精")
			 g->DrawString(L"序号\t酒精浓度\t酒精日期时间\t酒精对应车厢", font, brush1, Point(40, 20), format);
			 else if (strTableName == "异常数据表_PM")
			 g->DrawString(L"序号\tPM2.5浓度\tPM2.5日期时间\tPM2.5对应车厢", font, brush1, Point(40, 20), format);
			 else if (strTableName == "异常数据表_温度")
			 g->DrawString(L"序号\t温度浓度\t温度日期时间\t温度对应车厢", font, brush1, Point(40, 20), format);
			 else if (strTableName == "异常数据表_湿度")
			 g->DrawString(L"序号\t湿度浓度\t湿度日期时间\t湿度对应车厢", font, brush1, Point(40, 20), format);
			 else
			 g->DrawString(L"序号\t酒精浓度\tPM2.5浓度\t温度\t湿度\t日期时间\t对应车厢", font, brush1, Point(40, 20), format);
			 Pen^ pen1 = gcnew Pen(Color::Gray, 2);

			 g->DrawLine(pen1, 20, 40, 540, 40);          	// 标题分隔线

			 Pen^ pen2 = gcnew Pen(Color::Gray, 1);

			 pen2->DashStyle = DashStyle::Dot;

			 String ^str;

			 int i = 0;

			 for each (ListViewItem^ item in listView1->Items)

			 {

			 str = String::Format("{0}\t", item->SubItems[0]->Text);

			 str += String::Format(item->SubItems[1]->Text);

			 str += String::Format("\t{0}{1}", item->SubItems[2]->Text, "\t");

			 str += String::Format(item->SubItems[3]->Text);

			 str += String::Format("\t{0}\t", item->SubItems[4]->Text);

			 str += String::Format(item->SubItems[5]->Text);

			 g->DrawString(str, font, brush1, Point(40, 50 + i * 30), format);

			 g->DrawLine(pen2, 20, 70 + i * 30, 540, 70 + i * 30);//列表网格线

			 i++;

			 }

			 }*/

	private: String^ strConn;
			 //public:int num;
			 OleDbDataAdapter^oleDbDataAdapter1 = gcnew OleDbDataAdapter();
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 strConn = String::Format("Provider=Microsoft.Jet.OLEDB.4.0; Data Source=AGMS.mdb");

				 OleDbConnection^ con1 = gcnew OleDbConnection(strConn);

				 con1->Open();    // 打开连接
				 int nIndex = this->comboBox2->SelectedIndex;


				 if (nIndex < 0) return;

				 String^ strTableName = this->comboBox2->Items[nIndex]->ToString();			 // 获取选择的数据表名

				 // 使用DataAdapter和DataSet
				 String^ strCmd;
				 if (this->checkBox1->Checked)
				 {
					 strCmd = String::Format("SELECT * FROM {0} WHERE 日期时间>={1} AND 日期时间<={2}", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());
				 }
				 if (this->checkBox2->Checked)
				 {
					 strCmd = String::Format("SELECT * FROM {0} WHERE 温度>={1} AND 温度<={2}", strTableName, this->numericUpDown1->Value, this->numericUpDown2->Value);
				 }
				 if (this->checkBox3->Checked)
				 {
					 strCmd = String::Format("SELECT * FROM {0} WHERE 湿度>={1} AND 湿度<={2}", strTableName, this->numericUpDown3->Value, this->numericUpDown4->Value);
				 }
				 if (this->checkBox2->Checked)
				 {
					 strCmd = String::Format("SELECT * FROM {0} WHERE 震荡度>={1} AND 震荡度<={2}", strTableName, this->numericUpDown5->Value, this->numericUpDown6->Value);
				 }
				 if (this->checkBox2->Checked)
				 {
					 strCmd = String::Format("SELECT * FROM {0} WHERE 有害气体>={1} AND 有害气体<={2}", strTableName, this->numericUpDown7->Value, this->numericUpDown8->Value);
				 }
				 //OleDbDataAdapter^ da1 = gcnew OleDbDataAdapter(cmdText, strConn);

				 // DataSet^ theSet1 = gcnew DataSet();

				 // da1->Fill(theSet1, "TestInfo");         // 重新指定表名称
				 //this->Text = "异常数据查询";

				 // String ^strCmd = "SELECT *FROM yichang_data";
				 this->listView1->Columns->Clear();

				 this->listView1->Items->Clear();
				 this->textBox1->Text = " ";



				 Data::OleDb::OleDbCommand ^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, con1);

				 this->oleDbDataAdapter1->SelectCommand = cmd;

				 System::Data::DataSet^  dataSet = gcnew DataSet();

				 oleDbDataAdapter1->Fill(dataSet, "TestInfo");
				 // 获取数据表
				 oleDbDataAdapter1->Fill(dataSet, strTableName);
				 DataTable^ table1 = dataSet->Tables[strTableName];
				 table1->PrimaryKey = gcnew array<DataColumn^>{ table1->Columns[0] };
				 binding1 = gcnew BindingSource(dataSet, strTableName);
				 DispView(table1);
				 this->listView1->AutoResizeColumns(ColumnHeaderAutoResizeStyle::ColumnContent);
				 //	 this->dataGridView1->DataSource = dataSet1;

				 //	 this->dataGridView1->DataMember = "TestInfo";
				 //this->dataGridView1->DataSource = theSet1;

				 //this->dataGridView1->DataMember = "Test"; // 指定要打开的表

				 /* 直接使用表

				 DataTable^ table = gcnew DataTable;

				 da1->Fill( table );

				 this->dataGridView1->DataSource =table;*/
	}

			 /*private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 int nIndex = this->comboBox1->SelectedIndex;
			 if (nIndex < 0) return;
			 String^ strTableName = this->comboBox2->Items[nIndex]->ToString();			 // 获取选择的数据表名
			 if (strTableName == "异常数据表_酒精")
			 {
			 chart1->Series["Series1"]->Points->Clear();
			 chart1->Series["Series1"]->ToolTip = "浓度(ppm):#VAL";
			 this->chart1->Series["Series1"]->LegendText = "酒精";
			 array<String^> ^Arr1 = gcnew array<String^>(1000);
			 array<String^> ^Arr2 = gcnew array<String^>(1000);
			 String^ str7 = "SELECT * FROM 异常数据表_酒精";
			 // str7 += comboBox1->Text;
			 str7 += " WHERE";
			 str7 += " 酒精日期时间>=";
			 str7 += dateTimePicker1->Value.ToOADate();
			 str7 += " AND 酒精日期时间<=";
			 str7 += dateTimePicker2->Value.ToOADate();
			 this->oleDbDataAdapter1->SelectCommand->CommandText = str7;
			 DataTable^ dat9 = gcnew DataTable();
			 this->oleDbDataAdapter1->Fill(dat9);
			 for (int i = 0; i <= dat9->Rows->Count - 1; i++){
			 Arr2[i] = dat9->Rows[i]->ItemArray[2]->ToString();
			 }
			 for (int i = 0; i <= dat9->Rows->Count - 1; i++) {
			 Arr1[i] = dat9->Rows[i]->ItemArray[1]->ToString();

			 }
			 int leng = Arr1->Length;
			 listBox1->Items->Clear();
			 for (int i = 0; i < leng; i++)
			 {
			 if (Arr1[i] != nullptr&&Arr2[i] != nullptr){
			 listBox1->Items->Add(Arr2[i]);
			 listBox1->Items->Add(Arr1[i]);
			 chart1->Series["Series1"]->Points->AddXY(Arr2[i], Arr1[i]);
			 }  //画图
			 }

			 }
			 else if (strTableName == "异常数据表_PM")
			 {
			 chart1->Series["Series1"]->Points->Clear();
			 chart1->Series["Series1"]->ToolTip = "浓度(ppm):#VAL";
			 this->chart1->Series["Series1"]->LegendText = "PM2.5";
			 array<String^> ^Arr1 = gcnew array<String^>(1000);
			 array<String^> ^Arr2 = gcnew array<String^>(1000);
			 String^ str7 = "SELECT * FROM 异常数据表_PM";
			 str7 += " WHERE";
			 str7 += " PM日期时间>=";
			 str7 += dateTimePicker1->Value.ToOADate();
			 str7 += " AND PM日期时间<=";
			 str7 += dateTimePicker2->Value.ToOADate();
			 this->oleDbDataAdapter1->SelectCommand->CommandText = str7;
			 DataTable^ dat9 = gcnew DataTable();
			 this->oleDbDataAdapter1->Fill(dat9);
			 for (int i = 0; i <= dat9->Rows->Count - 1; i++){
			 Arr2[i] = dat9->Rows[i]->ItemArray[2]->ToString();
			 }
			 for (int i = 0; i <= dat9->Rows->Count - 1; i++) {
			 Arr1[i] = dat9->Rows[i]->ItemArray[1]->ToString();
			 listBox1->Items->Add(Arr1[i]);
			 }
			 int leng = Arr1->Length;
			 listBox1->Items->Clear();
			 for (int i = 0; i < leng; i++)
			 {
			 if (Arr1[i] != nullptr&&Arr2[i] != nullptr){
			 listBox1->Items->Add(Arr2[i]);
			 listBox1->Items->Add(Arr1[i]);
			 chart1->Series["Series1"]->Points->AddXY(Arr2[i], Arr1[i]);
			 }  //画图
			 }
			 }
			 else if (strTableName == "异常数据表_温度")
			 {
			 chart1->Series["Series1"]->Points->Clear();
			 this->chart1->Series["Series1"]->LegendText = "温度";
			 array<String^> ^Arr1 = gcnew array<String^>(1000);
			 array<String^> ^Arr2 = gcnew array<String^>(1000);
			 String^ str7 = "SELECT * FROM 异常数据表_温度";
			 str7 += " WHERE";
			 str7 += " 温度日期时间>=";
			 str7 += dateTimePicker1->Value.ToOADate();
			 str7 += " AND 温度日期时间<=";
			 str7 += dateTimePicker2->Value.ToOADate();
			 this->oleDbDataAdapter1->SelectCommand->CommandText = str7;
			 DataTable^ dat9 = gcnew DataTable();
			 this->oleDbDataAdapter1->Fill(dat9);
			 for (int i = 0; i <= dat9->Rows->Count - 1; i++){
			 Arr2[i] = dat9->Rows[i]->ItemArray[2]->ToString();
			 }
			 for (int i = 0; i <= dat9->Rows->Count - 1; i++) {
			 Arr1[i] = dat9->Rows[i]->ItemArray[1]->ToString();
			 listBox1->Items->Add(Arr1[i]);
			 }
			 int leng = Arr1->Length;
			 listBox1->Items->Clear();
			 for (int i = 0; i < leng; i++)
			 {
			 if (Arr1[i] != nullptr&&Arr2[i] != nullptr){

			 listBox1->Items->Add(Arr2[i]);
			 listBox1->Items->Add(Arr1[i]);
			 chart1->Series["Series1"]->Points->AddXY(Arr2[i], Arr1[i]);
			 }  //画图
			 }
			 }
			 else if (strTableName == "异常数据表_湿度")
			 {
			 chart1->Series["Series1"]->Points->Clear();
			 chart1->Series["Series1"]->ToolTip = "湿度(℃):#VAL";
			 this->chart1->Series["Series1"]->LegendText = "湿度";
			 array<String^> ^Arr1 = gcnew array<String^>(1000);
			 array<String^> ^Arr2 = gcnew array<String^>(1000);
			 String^ str7 = "SELECT * FROM 异常数据表_湿度";
			 str7 += " WHERE";
			 str7 += " 湿度日期时间>=";
			 str7 += dateTimePicker1->Value.ToOADate();
			 str7 += " AND 湿度日期时间<=";
			 str7 += dateTimePicker2->Value.ToOADate();
			 this->oleDbDataAdapter1->SelectCommand->CommandText = str7;
			 DataTable^ dat9 = gcnew DataTable();
			 this->oleDbDataAdapter1->Fill(dat9);
			 for (int i = 0; i <= dat9->Rows->Count - 1; i++){
			 Arr2[i] = dat9->Rows[i]->ItemArray[2]->ToString();
			 }
			 for (int i = 0; i <= dat9->Rows->Count - 1; i++) {
			 Arr1[i] = dat9->Rows[i]->ItemArray[1]->ToString();
			 listBox1->Items->Add(Arr1[i]);
			 }
			 int leng = Arr1->Length;
			 listBox1->Items->Clear();
			 for (int i = 0; i < leng; i++)
			 {
			 if (Arr1[i] != nullptr&&Arr2[i] != nullptr){

			 listBox1->Items->Add(Arr2[i]);
			 listBox1->Items->Add(Arr1[i]);
			 chart1->Series["Series1"]->Points->AddXY(Arr2[i], Arr1[i]);
			 }  //画图
			 }
			 }

			 }*/

			 /*private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 int nIndex = this->comboBox2->SelectedIndex;
			 if (nIndex < 0) return;
			 String^ strTableName = this->comboBox2->Items[nIndex]->ToString();			 // 获取选择的数据表名
			 if (strTableName == "异常数据表_酒精")
			 {
			 chart1->Series["Series1"]->Points->Clear();
			 chart1->Series["Series1"]->ToolTip = "浓度(ppm):#VAL";
			 this->chart1->Series["Series1"]->LegendText = "酒精";
			 array<String^> ^Arr1 = gcnew array<String^>(1000);
			 array<String^> ^Arr2 = gcnew array<String^>(1000);
			 String^ str7 = "SELECT * FROM 异常数据表_酒精";
			 // str7 += comboBox1->Text;
			 str7 += " WHERE";
			 str7 += " 酒精日期时间>=";
			 str7 += dateTimePicker1->Value.ToOADate();
			 str7 += " AND 酒精日期时间<=";
			 str7 += dateTimePicker2->Value.ToOADate();
			 this->oleDbDataAdapter1->SelectCommand->CommandText = str7;
			 DataTable^ dat9 = gcnew DataTable();
			 this->oleDbDataAdapter1->Fill(dat9);
			 for (int i = 0; i <= dat9->Rows->Count - 1; i++){
			 Arr2[i] = dat9->Rows[i]->ItemArray[2]->ToString();
			 }
			 for (int i = 0; i <= dat9->Rows->Count - 1; i++) {
			 Arr1[i] = dat9->Rows[i]->ItemArray[1]->ToString();

			 }
			 int leng = Arr1->Length;
			 listBox1->Items->Clear();
			 for (int i = 0; i < leng; i++)
			 {
			 if (Arr1[i] != nullptr&&Arr2[i] != nullptr){
			 listBox1->Items->Add(Arr2[i]);
			 listBox1->Items->Add(Arr1[i]);
			 chart1->Series["Series1"]->Points->AddXY(Arr2[i], Arr1[i]);
			 }  //画图
			 }

			 }
			 else if (strTableName == "异常数据表_PM")
			 {
			 chart1->Series["Series1"]->Points->Clear();
			 chart1->Series["Series1"]->ToolTip = "浓度(ppm):#VAL";
			 this->chart1->Series["Series1"]->LegendText = "PM2.5";
			 array<String^> ^Arr1 = gcnew array<String^>(1000);
			 array<String^> ^Arr2 = gcnew array<String^>(1000);
			 String^ str7 = "SELECT * FROM 异常数据表_PM";
			 str7 += " WHERE";
			 str7 += " PM日期时间>=";
			 str7 += dateTimePicker1->Value.ToOADate();
			 str7 += " AND PM日期时间<=";
			 str7 += dateTimePicker2->Value.ToOADate();
			 this->oleDbDataAdapter1->SelectCommand->CommandText = str7;
			 DataTable^ dat9 = gcnew DataTable();
			 this->oleDbDataAdapter1->Fill(dat9);
			 for (int i = 0; i <= dat9->Rows->Count - 1; i++){
			 Arr2[i] = dat9->Rows[i]->ItemArray[2]->ToString();
			 }
			 for (int i = 0; i <= dat9->Rows->Count - 1; i++) {
			 Arr1[i] = dat9->Rows[i]->ItemArray[1]->ToString();
			 listBox1->Items->Add(Arr1[i]);
			 }
			 int leng = Arr1->Length;
			 listBox1->Items->Clear();
			 for (int i = 0; i < leng; i++)
			 {
			 if (Arr1[i] != nullptr&&Arr2[i] != nullptr){
			 listBox1->Items->Add(Arr2[i]);
			 listBox1->Items->Add(Arr1[i]);
			 chart1->Series["Series1"]->Points->AddXY(Arr2[i], Arr1[i]);
			 }  //画图
			 }
			 }
			 else if (strTableName == "异常数据表_温度")
			 {
			 chart1->Series["Series1"]->Points->Clear();
			 this->chart1->Series["Series1"]->LegendText = "温度";
			 array<String^> ^Arr1 = gcnew array<String^>(1000);
			 array<String^> ^Arr2 = gcnew array<String^>(1000);
			 String^ str7 = "SELECT * FROM 异常数据表_温度";
			 str7 += " WHERE";
			 str7 += " 温度日期时间>=";
			 str7 += dateTimePicker1->Value.ToOADate();
			 str7 += " AND 温度日期时间<=";
			 str7 += dateTimePicker2->Value.ToOADate();
			 this->oleDbDataAdapter1->SelectCommand->CommandText = str7;
			 DataTable^ dat9 = gcnew DataTable();
			 this->oleDbDataAdapter1->Fill(dat9);
			 for (int i = 0; i <= dat9->Rows->Count - 1; i++){
			 Arr2[i] = dat9->Rows[i]->ItemArray[2]->ToString();
			 }
			 for (int i = 0; i <= dat9->Rows->Count - 1; i++) {
			 Arr1[i] = dat9->Rows[i]->ItemArray[1]->ToString();
			 listBox1->Items->Add(Arr1[i]);
			 }
			 int leng = Arr1->Length;
			 listBox1->Items->Clear();
			 for (int i = 0; i < leng; i++)
			 {
			 if (Arr1[i] != nullptr&&Arr2[i] != nullptr){

			 listBox1->Items->Add(Arr2[i]);
			 listBox1->Items->Add(Arr1[i]);
			 chart1->Series["Series1"]->Points->AddXY(Arr2[i], Arr1[i]);
			 }  //画图
			 }
			 }
			 else if (strTableName == "异常数据表_湿度")
			 {
			 chart1->Series["Series1"]->Points->Clear();
			 chart1->Series["Series1"]->ToolTip = "湿度(℃):#VAL";
			 this->chart1->Series["Series1"]->LegendText = "湿度";
			 array<String^> ^Arr1 = gcnew array<String^>(1000);
			 array<String^> ^Arr2 = gcnew array<String^>(1000);
			 String^ str7 = "SELECT * FROM 异常数据表_湿度";
			 str7 += " WHERE";
			 str7 += " 湿度日期时间>=";
			 str7 += dateTimePicker1->Value.ToOADate();
			 str7 += " AND 湿度日期时间<=";
			 str7 += dateTimePicker2->Value.ToOADate();
			 this->oleDbDataAdapter1->SelectCommand->CommandText = str7;
			 DataTable^ dat9 = gcnew DataTable();
			 this->oleDbDataAdapter1->Fill(dat9);
			 for (int i = 0; i <= dat9->Rows->Count - 1; i++){
			 Arr2[i] = dat9->Rows[i]->ItemArray[2]->ToString();
			 }
			 for (int i = 0; i <= dat9->Rows->Count - 1; i++) {
			 Arr1[i] = dat9->Rows[i]->ItemArray[1]->ToString();
			 listBox1->Items->Add(Arr1[i]);
			 }
			 int leng = Arr1->Length;
			 listBox1->Items->Clear();
			 for (int i = 0; i < leng; i++)
			 {
			 if (Arr1[i] != nullptr&&Arr2[i] != nullptr){

			 listBox1->Items->Add(Arr2[i]);
			 listBox1->Items->Add(Arr1[i]);
			 chart1->Series["Series1"]->Points->AddXY(Arr2[i], Arr1[i]);
			 }  //画图
			 }
			 }
			 }*/


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->textBox1->Text = this->listView1->Items->Count.ToString();

	}
	};
}
