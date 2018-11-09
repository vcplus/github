#pragma once
#include <stdlib.h>
#include "math.h"
using namespace System::IO::Ports;
namespace COM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:

	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;

	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::Timer^  timer1;

	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::PictureBox^  pictureBox1;


	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  shebeiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  tongxinToolStripMenuItem;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown9;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown10;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown11;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown12;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown13;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown14;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown15;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown16;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown17;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown18;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown19;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown20;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown21;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown22;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown23;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown24;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown25;


	private: System::ComponentModel::IContainer^  components;



	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->shebeiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tongxinToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown11 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown12 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown13 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown14 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown15 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown16 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown17 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown18 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown19 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown20 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown21 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown22 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown23 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown24 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown25 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown17))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown25))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->comboBox5);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->comboBox4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(10, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(163, 194);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(63, 159);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"打开串口";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(36, 162);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(24, 16);
			this->label6->TabIndex = 9;
			this->label6->Text = L"●";
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(53, 119);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(104, 20);
			this->comboBox5->TabIndex = 5;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(53, 15);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(104, 20);
			this->comboBox1->TabIndex = 1;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(53, 41);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(104, 20);
			this->comboBox2->TabIndex = 2;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(53, 67);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(104, 20);
			this->comboBox3->TabIndex = 3;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(53, 93);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(104, 20);
			this->comboBox4->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 117);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 12);
			this->label5->TabIndex = 4;
			this->label5->Text = L"停止位";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 12);
			this->label4->TabIndex = 3;
			this->label4->Text = L"数据位";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 12);
			this->label3->TabIndex = 2;
			this->label3->Text = L"校验位";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"波特率";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"串口";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Location = System::Drawing::Point(12, 241);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(163, 180);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(43, 111);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 7;
			this->button8->Text = L"关闭串口";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(43, 74);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"手动发送";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(43, 39);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"清空发送区";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(51, 429);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"退出";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Lime;
			this->label7->Location = System::Drawing::Point(491, 31);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 12);
			this->label7->TabIndex = 4;
			this->label7->Text = L"数据发送区";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12));
			this->button5->Location = System::Drawing::Point(290, 366);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(59, 39);
			this->button5->TabIndex = 5;
			this->button5->Text = L"暂停";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 12));
			this->button6->Location = System::Drawing::Point(200, 366);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(63, 39);
			this->button6->TabIndex = 6;
			this->button6->Text = L"开始";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::SendData_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->BackColor = System::Drawing::Color::Red;
			this->statusStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2
			});
			this->statusStrip1->Location = System::Drawing::Point(595, 430);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Padding = System::Windows::Forms::Padding(1, 0, 10, 0);
			this->statusStrip1->Size = System::Drawing::Size(275, 22);
			this->statusStrip1->TabIndex = 8;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(131, 17);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(131, 17);
			this->toolStripStatusLabel2->Text = L"toolStripStatusLabel2";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(200, 31);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(271, 144);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(17, 82);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 12);
			this->label9->TabIndex = 12;
			this->label9->Text = L"温度（℃）";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(17, 107);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 12);
			this->label10->TabIndex = 13;
			this->label10->Text = L"湿度（%）";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(17, 25);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(71, 12);
			this->label11->TabIndex = 14;
			this->label11->Text = L"酒精（ppm）";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(17, 54);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 12);
			this->label12->TabIndex = 15;
			this->label12->Text = L"PM2.5(ppm)";
			this->label12->Click += gcnew System::EventHandler(this, &Form1::label12_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(99, 19);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(45, 21);
			this->numericUpDown1->TabIndex = 16;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(173, 19);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(44, 21);
			this->numericUpDown2->TabIndex = 17;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(98, 52);
			this->numericUpDown3->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(44, 21);
			this->numericUpDown3->TabIndex = 18;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(173, 52);
			this->numericUpDown4->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(44, 21);
			this->numericUpDown4->TabIndex = 19;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(98, 80);
			this->numericUpDown5->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(45, 21);
			this->numericUpDown5->TabIndex = 20;
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(173, 79);
			this->numericUpDown6->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(45, 21);
			this->numericUpDown6->TabIndex = 21;
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(97, 108);
			this->numericUpDown7->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(45, 21);
			this->numericUpDown7->TabIndex = 22;
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(174, 108);
			this->numericUpDown8->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(44, 21);
			this->numericUpDown8->TabIndex = 23;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(151, 28);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(17, 12);
			this->label13->TabIndex = 24;
			this->label13->Text = L"～";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(152, 61);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(17, 12);
			this->label14->TabIndex = 25;
			this->label14->Text = L"～";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(151, 87);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(17, 12);
			this->label15->TabIndex = 26;
			this->label15->Text = L"～";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(152, 114);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(17, 12);
			this->label16->TabIndex = 27;
			this->label16->Text = L"～";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->shebeiToolStripMenuItem,
					this->tongxinToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(913, 25);
			this->menuStrip1->TabIndex = 28;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// shebeiToolStripMenuItem
			// 
			this->shebeiToolStripMenuItem->Name = L"shebeiToolStripMenuItem";
			this->shebeiToolStripMenuItem->Size = System::Drawing::Size(68, 21);
			this->shebeiToolStripMenuItem->Text = L"仿真设备";
			// 
			// tongxinToolStripMenuItem
			// 
			this->tongxinToolStripMenuItem->Name = L"tongxinToolStripMenuItem";
			this->tongxinToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->tongxinToolStripMenuItem->Text = L"帮助";
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 2000;
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Location = System::Drawing::Point(608, 371);
			this->numericUpDown9->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown9->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000, 0, 0, 0 });
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(44, 21);
			this->numericUpDown9->TabIndex = 29;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 12));
			this->label17->Location = System::Drawing::Point(430, 373);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(160, 16);
			this->label17->TabIndex = 30;
			this->label17->Text = L"发送时间间隔（ms）:";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(493, 51);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(408, 124);
			this->listBox1->TabIndex = 31;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->numericUpDown1);
			this->groupBox3->Controls->Add(this->numericUpDown2);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->numericUpDown3);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->numericUpDown4);
			this->groupBox3->Controls->Add(this->numericUpDown8);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->numericUpDown7);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->numericUpDown6);
			this->groupBox3->Controls->Add(this->numericUpDown5);
			this->groupBox3->Location = System::Drawing::Point(181, 198);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(220, 140);
			this->groupBox3->TabIndex = 32;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"第一车厢";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->numericUpDown10);
			this->groupBox4->Controls->Add(this->numericUpDown11);
			this->groupBox4->Controls->Add(this->label18);
			this->groupBox4->Controls->Add(this->numericUpDown12);
			this->groupBox4->Controls->Add(this->label19);
			this->groupBox4->Controls->Add(this->label20);
			this->groupBox4->Controls->Add(this->numericUpDown13);
			this->groupBox4->Controls->Add(this->numericUpDown14);
			this->groupBox4->Controls->Add(this->label21);
			this->groupBox4->Controls->Add(this->numericUpDown15);
			this->groupBox4->Controls->Add(this->label22);
			this->groupBox4->Controls->Add(this->label23);
			this->groupBox4->Controls->Add(this->label24);
			this->groupBox4->Controls->Add(this->numericUpDown16);
			this->groupBox4->Controls->Add(this->numericUpDown17);
			this->groupBox4->Location = System::Drawing::Point(432, 198);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(220, 140);
			this->groupBox4->TabIndex = 33;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"第二车厢";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 25);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 12);
			this->label8->TabIndex = 30;
			this->label8->Text = L"酒精（ppm）";
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->Location = System::Drawing::Point(92, 16);
			this->numericUpDown10->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown10->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(45, 21);
			this->numericUpDown10->TabIndex = 32;
			// 
			// numericUpDown11
			// 
			this->numericUpDown11->Location = System::Drawing::Point(166, 16);
			this->numericUpDown11->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown11->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown11->Name = L"numericUpDown11";
			this->numericUpDown11->Size = System::Drawing::Size(44, 21);
			this->numericUpDown11->TabIndex = 33;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(144, 25);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(17, 12);
			this->label18->TabIndex = 40;
			this->label18->Text = L"～";
			// 
			// numericUpDown12
			// 
			this->numericUpDown12->Location = System::Drawing::Point(91, 49);
			this->numericUpDown12->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown12->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown12->Name = L"numericUpDown12";
			this->numericUpDown12->Size = System::Drawing::Size(44, 21);
			this->numericUpDown12->TabIndex = 34;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(10, 110);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(59, 12);
			this->label19->TabIndex = 29;
			this->label19->Text = L"湿度（%）";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(145, 111);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(17, 12);
			this->label20->TabIndex = 43;
			this->label20->Text = L"～";
			// 
			// numericUpDown13
			// 
			this->numericUpDown13->Location = System::Drawing::Point(166, 49);
			this->numericUpDown13->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown13->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown13->Name = L"numericUpDown13";
			this->numericUpDown13->Size = System::Drawing::Size(44, 21);
			this->numericUpDown13->TabIndex = 35;
			// 
			// numericUpDown14
			// 
			this->numericUpDown14->Location = System::Drawing::Point(167, 105);
			this->numericUpDown14->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown14->Name = L"numericUpDown14";
			this->numericUpDown14->Size = System::Drawing::Size(44, 21);
			this->numericUpDown14->TabIndex = 39;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(144, 84);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(17, 12);
			this->label21->TabIndex = 42;
			this->label21->Text = L"～";
			// 
			// numericUpDown15
			// 
			this->numericUpDown15->Location = System::Drawing::Point(90, 105);
			this->numericUpDown15->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown15->Name = L"numericUpDown15";
			this->numericUpDown15->Size = System::Drawing::Size(45, 21);
			this->numericUpDown15->TabIndex = 38;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(145, 58);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(17, 12);
			this->label22->TabIndex = 41;
			this->label22->Text = L"～";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(10, 51);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(65, 12);
			this->label23->TabIndex = 31;
			this->label23->Text = L"PM2.5(ppm)";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(10, 79);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(65, 12);
			this->label24->TabIndex = 28;
			this->label24->Text = L"温度（℃）";
			// 
			// numericUpDown16
			// 
			this->numericUpDown16->Location = System::Drawing::Point(166, 76);
			this->numericUpDown16->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown16->Name = L"numericUpDown16";
			this->numericUpDown16->Size = System::Drawing::Size(45, 21);
			this->numericUpDown16->TabIndex = 37;
			// 
			// numericUpDown17
			// 
			this->numericUpDown17->Location = System::Drawing::Point(91, 77);
			this->numericUpDown17->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown17->Name = L"numericUpDown17";
			this->numericUpDown17->Size = System::Drawing::Size(45, 21);
			this->numericUpDown17->TabIndex = 36;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label25);
			this->groupBox5->Controls->Add(this->numericUpDown18);
			this->groupBox5->Controls->Add(this->numericUpDown19);
			this->groupBox5->Controls->Add(this->label26);
			this->groupBox5->Controls->Add(this->numericUpDown20);
			this->groupBox5->Controls->Add(this->label27);
			this->groupBox5->Controls->Add(this->label28);
			this->groupBox5->Controls->Add(this->numericUpDown21);
			this->groupBox5->Controls->Add(this->numericUpDown22);
			this->groupBox5->Controls->Add(this->label29);
			this->groupBox5->Controls->Add(this->numericUpDown23);
			this->groupBox5->Controls->Add(this->label30);
			this->groupBox5->Controls->Add(this->label31);
			this->groupBox5->Controls->Add(this->label32);
			this->groupBox5->Controls->Add(this->numericUpDown24);
			this->groupBox5->Controls->Add(this->numericUpDown25);
			this->groupBox5->Location = System::Drawing::Point(681, 198);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(220, 140);
			this->groupBox5->TabIndex = 33;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"第三车厢";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(10, 25);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(71, 12);
			this->label25->TabIndex = 30;
			this->label25->Text = L"酒精（ppm）";
			// 
			// numericUpDown18
			// 
			this->numericUpDown18->Location = System::Drawing::Point(92, 16);
			this->numericUpDown18->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown18->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown18->Name = L"numericUpDown18";
			this->numericUpDown18->Size = System::Drawing::Size(45, 21);
			this->numericUpDown18->TabIndex = 32;
			// 
			// numericUpDown19
			// 
			this->numericUpDown19->Location = System::Drawing::Point(166, 16);
			this->numericUpDown19->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown19->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown19->Name = L"numericUpDown19";
			this->numericUpDown19->Size = System::Drawing::Size(44, 21);
			this->numericUpDown19->TabIndex = 33;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(144, 25);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(17, 12);
			this->label26->TabIndex = 40;
			this->label26->Text = L"～";
			// 
			// numericUpDown20
			// 
			this->numericUpDown20->Location = System::Drawing::Point(91, 49);
			this->numericUpDown20->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown20->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown20->Name = L"numericUpDown20";
			this->numericUpDown20->Size = System::Drawing::Size(44, 21);
			this->numericUpDown20->TabIndex = 34;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(10, 107);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(59, 12);
			this->label27->TabIndex = 29;
			this->label27->Text = L"湿度（%）";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(145, 111);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(17, 12);
			this->label28->TabIndex = 43;
			this->label28->Text = L"～";
			// 
			// numericUpDown21
			// 
			this->numericUpDown21->Location = System::Drawing::Point(166, 49);
			this->numericUpDown21->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown21->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown21->Name = L"numericUpDown21";
			this->numericUpDown21->Size = System::Drawing::Size(44, 21);
			this->numericUpDown21->TabIndex = 35;
			// 
			// numericUpDown22
			// 
			this->numericUpDown22->Location = System::Drawing::Point(167, 105);
			this->numericUpDown22->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown22->Name = L"numericUpDown22";
			this->numericUpDown22->Size = System::Drawing::Size(44, 21);
			this->numericUpDown22->TabIndex = 39;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(144, 84);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(17, 12);
			this->label29->TabIndex = 42;
			this->label29->Text = L"～";
			// 
			// numericUpDown23
			// 
			this->numericUpDown23->Location = System::Drawing::Point(90, 105);
			this->numericUpDown23->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown23->Name = L"numericUpDown23";
			this->numericUpDown23->Size = System::Drawing::Size(45, 21);
			this->numericUpDown23->TabIndex = 38;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(145, 58);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(17, 12);
			this->label30->TabIndex = 41;
			this->label30->Text = L"～";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(10, 51);
			this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(65, 12);
			this->label31->TabIndex = 31;
			this->label31->Text = L"PM2.5(ppm)";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(10, 79);
			this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(65, 12);
			this->label32->TabIndex = 28;
			this->label32->Text = L"温度（℃）";
			// 
			// numericUpDown24
			// 
			this->numericUpDown24->Location = System::Drawing::Point(166, 76);
			this->numericUpDown24->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown24->Name = L"numericUpDown24";
			this->numericUpDown24->Size = System::Drawing::Size(45, 21);
			this->numericUpDown24->TabIndex = 37;
			// 
			// numericUpDown25
			// 
			this->numericUpDown25->Location = System::Drawing::Point(91, 77);
			this->numericUpDown25->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown25->Name = L"numericUpDown25";
			this->numericUpDown25->Size = System::Drawing::Size(45, 21);
			this->numericUpDown25->TabIndex = 36;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(913, 462);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->numericUpDown9);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox3);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"COM调试助手";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown17))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown25))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:static SerialPort ^com = gcnew SerialPort();
	//	 public:static bool serialopen;
	public:System::Random ^ranTemp, ^ranHumi, ^ranAlcol, ^ranPM;
	public:  array<String^> ^portName = gcnew array<String^>(10);

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 portName = com->GetPortNames();
			 if (portName->Length == 0)
				 MessageBox::Show("当前没有可用串口！请连接设备或设置虚拟串口！");
			 else
			 {
				 for (int i = 0; i < portName->Length; i++)
				 {
					 if (!portName[i]->Equals(""))
					 {
						 comboBox1->Items->Add(portName[i]);
					 }
				 }
				 comboBox1->Text = portName[0];
			 }

			// comboBox1->Text = "com1";
			 comboBox2->Text = "9600";
			 comboBox3->Text = "无";
			 comboBox4->Text = "8";
			 comboBox5->Text = "1";
			
			 numericUpDown1->Text = "0";
			 numericUpDown2->Text = "120";
			 numericUpDown3->Text = "10";
			 numericUpDown4->Text = "300";
			 numericUpDown5->Text = "25";
			 numericUpDown6->Text = "29";
			 numericUpDown7->Text = "40";
			 numericUpDown8->Text = "80";
			 numericUpDown9->Text = "2000";

			 numericUpDown10->Text = "0";
			 numericUpDown11->Text = "120";
			 numericUpDown12->Text = "10";
			 numericUpDown13->Text = "300";
			 numericUpDown17->Text = "25";
			 numericUpDown16->Text = "29";			
			 numericUpDown15->Text = "40";
			 numericUpDown14->Text = "80";

			 numericUpDown18->Text = "0";
			 numericUpDown19->Text = "120";
			 numericUpDown20->Text = "10";
			 numericUpDown21->Text = "300";
			 numericUpDown25->Text = "25";
			 numericUpDown24->Text = "29";
			 numericUpDown23->Text = "40";
			 numericUpDown22->Text = "80";


			//comboBox1->Items->Add("com1");comboBox1->Items->Add("com2");comboBox1->Items->Add("com3");comboBox1->Items->Add("com4");
			//comboBox1->Items->Add("com5");comboBox1->Items->Add("com6");comboBox1->Items->Add("com7");comboBox1->Items->Add("com8");

			comboBox2->Items->Add("1200"); comboBox2->Items->Add("2400"); comboBox2->Items->Add("4800"); comboBox2->Items->Add("9600");
			comboBox2->Items->Add("14400"); comboBox2->Items->Add("19200"); comboBox2->Items->Add("38400"); comboBox2->Items->Add("115200");

			comboBox3->Items->Add("无"); comboBox3->Items->Add("奇校验"); comboBox3->Items->Add("偶校验");
			comboBox4->Items->Add("8"); comboBox4->Items->Add("7"); comboBox4->Items->Add("6"); comboBox4->Items->Add("5");
			comboBox5->Items->Add("1"); comboBox5->Items->Add("1.5"); comboBox5->Items->Add("2");
		
			button8->Enabled = false;
			
			ranTemp = gcnew System::Random(); // 创建随机数类实例
			ranHumi = gcnew System::Random(); // 创建随机数类实例
			ranAlcol = gcnew System::Random(); // 创建随机数类实例
			ranPM = gcnew System::Random(); // 创建随机数类实例

			timer2->Stop();

}
		 public:int Flag=0;
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Flag = 1;
			 com->PortName = this->comboBox1->Text->Trim();
			 com->BaudRate = Int32::Parse(this->comboBox2->Text->Trim());
			 com->Open();

			// ranHumi->Next();

			// this->pictureBox1->BackColor=System::Drawing::Color::Red;
			 this->label6->ForeColor = System::Drawing::Color::Lime;
			 button1->Enabled = false;
			 button8->Enabled = true;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (Flag == 1)
			 {
				 String^ SendText = nullptr;

				 int nAalcol = ranAlcol->Next(Int32::Parse(this->numericUpDown1->Text->Trim()), Int32::Parse(this->numericUpDown2->Text->Trim()));
				 int nPM = ranPM->Next(Int32::Parse(this->numericUpDown3->Text->Trim()), Int32::Parse(this->numericUpDown4->Text->Trim()));
				 float nTemp = Int32::Parse(this->numericUpDown5->Text->Trim()) + (Int32::Parse(this->numericUpDown6->Text->Trim()) - Int32::Parse(this->numericUpDown5->Text->Trim())) * (ranTemp->NextDouble());
				 int nHumi = ranHumi->Next(Int32::Parse(this->numericUpDown7->Text->Trim()), Int32::Parse(this->numericUpDown8->Text->Trim()));
				 SendText = nAalcol.ToString() + ";" + nPM.ToString() + ";" + nTemp.ToString(L"f1") + ";" + nHumi.ToString();
				 if (com->IsOpen)
				 {
					 com->Write(SendText);
					 this->listBox1->Items->Add(SendText);
				 }
			 }
			 else
				 MessageBox::Show(L"串口未打开");
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->listBox1->Items->Clear();
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 DateTime dateTime = DateTime::Now;             //获取系统当前时间
			 toolStripStatusLabel1->Text = dateTime.ToLongDateString();       // 显示日期
			 toolStripStatusLabel2->Text = dateTime.ToLongTimeString();     // 显示时间


}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 com->Close();
			 this->label6->ForeColor=System::Drawing::Color::Red;
			 button8->Enabled = false;
			 button1->Enabled = true;
}


private: System::Void SendData_Click(System::Object^  sender, System::EventArgs^  e) {
			 timer2->Start();
			 this->timer2->Interval = Int32::Parse(this->numericUpDown9->Text->Trim());
			 //if (Flag == 1)
			 //{
				//  String^ SendText = nullptr;
				///*  String^ SendText = nullptr;
				//  String^ SendText = nullptr;
				//  String^ SendText = nullptr;
				//  String^ SendText = nullptr;*/

				// // char a[5]; char b[5]; char c[5]; char d[5];
				//  
				//  int nAalcol = ranAlcol->Next(Int32::Parse(this->numericUpDown1->Text->Trim()), Int32::Parse(this->numericUpDown2->Text->Trim()));
				//  int nPM = ranPM->Next(Int32::Parse(this->numericUpDown3->Text->Trim()), Int32::Parse(this->numericUpDown4->Text->Trim()));
				//  float nTemp = Int32::Parse(this->numericUpDown5->Text->Trim()) +( Int32::Parse(this->numericUpDown6->Text->Trim()) - Int32::Parse(this->numericUpDown5->Text->Trim())) * (ranTemp->NextDouble());
				//  int nHumi = ranHumi->Next(Int32::Parse(this->numericUpDown7->Text->Trim()), Int32::Parse(this->numericUpDown8->Text->Trim()));
				//
				//  

				// /* itoa(nAalcol, a, 16);
				//  itoa(nHumi, b, 16);
				//  itoa(nPM, c, 16);
				//  itoa(nTemp,d, 16);*/
				//  SendText = nAalcol.ToString() + ";" + nPM.ToString() + ";" + nTemp.ToString(L"f1") + ";" + nHumi.ToString();
				////  SendText = "abc  ";
				//  if (com->IsOpen)
				//  {
				// 	 com->Write(SendText);
				//  }

				///*  array<String^> ^split = gcnew array<String^>(4);
				//  split = SendText->Split(59);
				//  MessageBox::Show(split[0] + ";" + split[1] + ";" + split[2] + ";" + split[3]);*/
			 //}
			 //else
				// MessageBox::Show(L"串口未打开");
			 ///*ranAlcol->Next(0, 150);
			 //ranHumi->Next(35, 85);
			 //ranPM->Next(0, 100);
			 //ranTemp->NextDouble();*/
}
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 static int FAal=3,FPM=17,FTemp=6,FHumi=13;

			 if (Flag == 1)
			 {
				 String^ SendText = nullptr;
				

				 int nAalcol1= fabs((Int32::Parse(this->numericUpDown2->Text->Trim()) - Int32::Parse(this->numericUpDown1->Text->Trim()))*sin((FAal++)*3.1415 / 20)) + Int32::Parse(this->numericUpDown1->Text->Trim());
				 int nPM1 = fabs((Int32::Parse(this->numericUpDown4->Text->Trim()) - Int32::Parse(this->numericUpDown3->Text->Trim()))*sin((FPM++)*3.1415 / 20)) + Int32::Parse(this->numericUpDown3->Text->Trim());
				 float nTemp1 = fabs((Int32::Parse(this->numericUpDown6->Text->Trim()) - Int32::Parse(this->numericUpDown5->Text->Trim()))*sin((FTemp++)*3.1415 / 20)) + Int32::Parse(this->numericUpDown5->Text->Trim());
				 int nHumi1 = fabs((Int32::Parse(this->numericUpDown8->Text->Trim()) - Int32::Parse(this->numericUpDown7->Text->Trim()))*sin((FHumi++)*3.1415 / 20)) + Int32::Parse(this->numericUpDown7->Text->Trim());

				 int nAalcol2 = fabs((Int32::Parse(this->numericUpDown11->Text->Trim()) - Int32::Parse(this->numericUpDown10->Text->Trim()))*sin((FAal++)*3.1415 / 20)) + Int32::Parse(this->numericUpDown10->Text->Trim());
				 int nPM2 = fabs((Int32::Parse(this->numericUpDown13->Text->Trim()) - Int32::Parse(this->numericUpDown12->Text->Trim()))*sin((FPM++)*3.1415 / 20)) + Int32::Parse(this->numericUpDown12->Text->Trim());
				 float nTemp2 = fabs((Int32::Parse(this->numericUpDown16->Text->Trim()) - Int32::Parse(this->numericUpDown17->Text->Trim()))*sin((FTemp++)*3.1415 / 20)) + Int32::Parse(this->numericUpDown17->Text->Trim());
				 int nHumi2 = fabs((Int32::Parse(this->numericUpDown14->Text->Trim()) - Int32::Parse(this->numericUpDown15->Text->Trim()))*sin((FHumi++)*3.1415 / 20)) + Int32::Parse(this->numericUpDown15->Text->Trim());

				 int nAalcol3 = fabs((Int32::Parse(this->numericUpDown19->Text->Trim()) - Int32::Parse(this->numericUpDown18->Text->Trim()))*sin((FAal++)*3.1415 / 20)) + Int32::Parse(this->numericUpDown18->Text->Trim());
				 int nPM3 = fabs((Int32::Parse(this->numericUpDown21->Text->Trim()) - Int32::Parse(this->numericUpDown20->Text->Trim()))*sin((FPM++)*3.1415 / 20)) + Int32::Parse(this->numericUpDown20->Text->Trim());
				 float nTemp3 = fabs((Int32::Parse(this->numericUpDown24->Text->Trim()) - Int32::Parse(this->numericUpDown25->Text->Trim()))*sin((FTemp++)*3.1415 / 20)) + Int32::Parse(this->numericUpDown25->Text->Trim());
				 int nHumi3 = fabs((Int32::Parse(this->numericUpDown22->Text->Trim()) - Int32::Parse(this->numericUpDown23->Text->Trim()))*sin((FHumi++)*3.1415 / 20)) + Int32::Parse(this->numericUpDown23->Text->Trim());

				 /*int nAalcol = ranAlcol->Next(Int32::Parse(this->numericUpDown1->Text->Trim()), Int32::Parse(this->numericUpDown2->Text->Trim()));
				 int nPM = ranPM->Next(Int32::Parse(this->numericUpDown3->Text->Trim()), Int32::Parse(this->numericUpDown4->Text->Trim()));
				 float nTemp = Int32::Parse(this->numericUpDown5->Text->Trim()) + (Int32::Parse(this->numericUpDown6->Text->Trim()) - Int32::Parse(this->numericUpDown5->Text->Trim())) * (ranTemp->NextDouble());
				 int nHumi = ranHumi->Next(Int32::Parse(this->numericUpDown7->Text->Trim()), Int32::Parse(this->numericUpDown8->Text->Trim()));*/
				 SendText = nAalcol1.ToString() + ";" + nPM1.ToString() + ";" + nTemp1.ToString(L"f1") + ";" + nHumi1.ToString() + ";" + nAalcol2.ToString() + ";" + nPM2.ToString() + ";" + nTemp2.ToString(L"f1") + ";" + nHumi2.ToString() + ";" + nAalcol3.ToString() + ";" + nPM3.ToString() + ";" + nTemp3.ToString(L"f1") + ";" + nHumi3.ToString();
				 if (com->IsOpen)
				 {
					 com->Write(SendText);
					 this->listBox1->Items->Add(SendText);
				 }
				 if (FAal == 20)
					 FAal = 0;
				 if (FPM == 20)
					 FPM = 0;
				 if (FTemp == 20)
					 FTemp = 0;
				 if (FHumi == 20)
					 FHumi = 0;
			 }
			 else
				 MessageBox::Show(L"串口未打开");
		
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 timer2->Stop();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

