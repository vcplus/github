#pragma once
#include <stdlib.h>
#include "math.h"
using namespace System::IO::Ports;
float function1(float max, float min, int divde, int now){
	float temp1 = min;
	if (temp1<max)
		temp1 += now * (max - min) / divde;
	return temp1;


}
float function2(float max, float min, int divde, int now){
	float temp1 = min;
	if (now <= divde / 2)
	if (temp1<max)
		temp1 += 2 * now * (max - min) / divde;
	else
	{
		float temp1 = max;
		temp1 -= 2 * now * (max - min) / divde;
	}
	return temp1;

}
float function3(float max, float min, int divde, int now){
	float temp1 = max - min;
	float a = -4 * max / divde / divde;
	temp1 = temp1 + a*(now - divde) * now;
	return temp1;

}
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






	private: System::Windows::Forms::Label^  label19;






	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;


	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label32;








	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label25;






private: System::Windows::Forms::NumericUpDown^  numericUpDown12;
private: System::Windows::Forms::NumericUpDown^  numericUpDown13;
private: System::Windows::Forms::NumericUpDown^  numericUpDown14;
private: System::Windows::Forms::NumericUpDown^  numericUpDown15;
private: System::Windows::Forms::NumericUpDown^  numericUpDown16;
private: System::Windows::Forms::NumericUpDown^  numericUpDown17;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::NumericUpDown^  numericUpDown10;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::NumericUpDown^  numericUpDown11;
private: System::Windows::Forms::NumericUpDown^  numericUpDown18;
private: System::Windows::Forms::NumericUpDown^  numericUpDown19;
private: System::Windows::Forms::NumericUpDown^  numericUpDown20;
private: System::Windows::Forms::NumericUpDown^  numericUpDown21;
private: System::Windows::Forms::NumericUpDown^  numericUpDown22;
private: System::Windows::Forms::NumericUpDown^  numericUpDown23;


















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
			this->numericUpDown18 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown19 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown20 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown21 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown22 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown23 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown12 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown13 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown14 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown15 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown16 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown17 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown11 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->BeginInit();
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
			this->groupBox1->Location = System::Drawing::Point(13, 39);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(217, 242);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(84, 199);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 29);
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
			this->label6->Location = System::Drawing::Point(48, 202);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"●";
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(71, 149);
			this->comboBox5->Margin = System::Windows::Forms::Padding(4);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(137, 23);
			this->comboBox5->TabIndex = 5;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(71, 19);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(137, 23);
			this->comboBox1->TabIndex = 1;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(71, 51);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(137, 23);
			this->comboBox2->TabIndex = 2;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(71, 84);
			this->comboBox3->Margin = System::Windows::Forms::Padding(4);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(137, 23);
			this->comboBox3->TabIndex = 3;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(71, 116);
			this->comboBox4->Margin = System::Windows::Forms::Padding(4);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(137, 23);
			this->comboBox4->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(8, 146);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 15);
			this->label5->TabIndex = 4;
			this->label5->Text = L"停止位";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 116);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 15);
			this->label4->TabIndex = 3;
			this->label4->Text = L"数据位";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 84);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"校验位";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 51);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"波特率";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 21);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 15);
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
			this->groupBox2->Location = System::Drawing::Point(16, 301);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(217, 225);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(57, 139);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 29);
			this->button8->TabIndex = 7;
			this->button8->Text = L"关闭串口";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(57, 92);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 29);
			this->button4->TabIndex = 6;
			this->button4->Text = L"手动发送";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(57, 49);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 29);
			this->button3->TabIndex = 5;
			this->button3->Text = L"清空发送区";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(68, 536);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 29);
			this->button2->TabIndex = 0;
			this->button2->Text = L"退出";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Lime;
			this->label7->Location = System::Drawing::Point(655, 39);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(82, 15);
			this->label7->TabIndex = 4;
			this->label7->Text = L"数据发送区";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12));
			this->button5->Location = System::Drawing::Point(490, 514);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(79, 49);
			this->button5->TabIndex = 5;
			this->button5->Text = L"暂停";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 12));
			this->button6->Location = System::Drawing::Point(370, 514);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(84, 49);
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
			this->statusStrip1->Location = System::Drawing::Point(793, 538);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Padding = System::Windows::Forms::Padding(1, 0, 13, 0);
			this->statusStrip1->Size = System::Drawing::Size(350, 25);
			this->statusStrip1->TabIndex = 8;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(167, 20);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(167, 20);
			this->toolStripStatusLabel2->Text = L"toolStripStatusLabel2";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(28, 35);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 15);
			this->label9->TabIndex = 12;
			this->label9->Text = L"温度（℃）";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(28, 68);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(75, 15);
			this->label10->TabIndex = 13;
			this->label10->Text = L"湿度（%）";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(28, 142);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(91, 15);
			this->label11->TabIndex = 14;
			this->label11->Text = L"酒精（ppm）";
			this->label11->Click += gcnew System::EventHandler(this, &Form1::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(28, 107);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(87, 15);
			this->label12->TabIndex = 15;
			this->label12->Text = L"PM2.5(ppm)";
			this->label12->Click += gcnew System::EventHandler(this, &Form1::label12_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->DecimalPlaces = 2;
			this->numericUpDown1->Location = System::Drawing::Point(132, 24);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(60, 25);
			this->numericUpDown1->TabIndex = 16;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(231, 24);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(59, 25);
			this->numericUpDown2->TabIndex = 17;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(131, 65);
			this->numericUpDown3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(59, 25);
			this->numericUpDown3->TabIndex = 18;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(231, 65);
			this->numericUpDown4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(59, 25);
			this->numericUpDown4->TabIndex = 19;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(131, 100);
			this->numericUpDown5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(60, 25);
			this->numericUpDown5->TabIndex = 20;
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(231, 99);
			this->numericUpDown6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(60, 25);
			this->numericUpDown6->TabIndex = 21;
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(129, 135);
			this->numericUpDown7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(60, 25);
			this->numericUpDown7->TabIndex = 22;
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(232, 135);
			this->numericUpDown8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(59, 25);
			this->numericUpDown8->TabIndex = 23;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(201, 35);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(22, 15);
			this->label13->TabIndex = 24;
			this->label13->Text = L"～";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(203, 76);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(22, 15);
			this->label14->TabIndex = 25;
			this->label14->Text = L"～";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(201, 109);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(22, 15);
			this->label15->TabIndex = 26;
			this->label15->Text = L"～";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(203, 142);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(22, 15);
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
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1217, 28);
			this->menuStrip1->TabIndex = 28;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// shebeiToolStripMenuItem
			// 
			this->shebeiToolStripMenuItem->Name = L"shebeiToolStripMenuItem";
			this->shebeiToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->shebeiToolStripMenuItem->Text = L"仿真设备";
			// 
			// tongxinToolStripMenuItem
			// 
			this->tongxinToolStripMenuItem->Name = L"tongxinToolStripMenuItem";
			this->tongxinToolStripMenuItem->Size = System::Drawing::Size(51, 24);
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
			this->numericUpDown9->Location = System::Drawing::Point(975, 466);
			this->numericUpDown9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown9->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000, 0, 0, 0 });
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(59, 25);
			this->numericUpDown9->TabIndex = 29;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 12));
			this->label17->Location = System::Drawing::Point(739, 470);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(199, 20);
			this->label17->TabIndex = 30;
			this->label17->Text = L"发送时间间隔（ms）:";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(416, 60);
			this->listBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(543, 154);
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
			this->groupBox3->Location = System::Drawing::Point(241, 248);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(293, 175);
			this->groupBox3->TabIndex = 32;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"第一车厢";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->numericUpDown18);
			this->groupBox4->Controls->Add(this->numericUpDown19);
			this->groupBox4->Controls->Add(this->numericUpDown20);
			this->groupBox4->Controls->Add(this->numericUpDown21);
			this->groupBox4->Controls->Add(this->numericUpDown22);
			this->groupBox4->Controls->Add(this->numericUpDown23);
			this->groupBox4->Controls->Add(this->label27);
			this->groupBox4->Controls->Add(this->label32);
			this->groupBox4->Controls->Add(this->label26);
			this->groupBox4->Controls->Add(this->label25);
			this->groupBox4->Controls->Add(this->numericUpDown12);
			this->groupBox4->Controls->Add(this->label19);
			this->groupBox4->Controls->Add(this->numericUpDown13);
			this->groupBox4->Controls->Add(this->numericUpDown14);
			this->groupBox4->Controls->Add(this->numericUpDown15);
			this->groupBox4->Controls->Add(this->label23);
			this->groupBox4->Controls->Add(this->label24);
			this->groupBox4->Controls->Add(this->numericUpDown16);
			this->groupBox4->Controls->Add(this->numericUpDown17);
			this->groupBox4->Location = System::Drawing::Point(595, 234);
			this->groupBox4->Margin = System::Windows::Forms::Padding(4);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(4);
			this->groupBox4->Size = System::Drawing::Size(609, 197);
			this->groupBox4->TabIndex = 33;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"第二车厢";
			this->groupBox4->Enter += gcnew System::EventHandler(this, &Form1::groupBox4_Enter);
			// 
			// numericUpDown18
			// 
			this->numericUpDown18->DecimalPlaces = 3;
			this->numericUpDown18->Enabled = false;
			this->numericUpDown18->Location = System::Drawing::Point(348, 75);
			this->numericUpDown18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown18->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown18->Name = L"numericUpDown18";
			this->numericUpDown18->Size = System::Drawing::Size(91, 25);
			this->numericUpDown18->TabIndex = 61;
			// 
			// numericUpDown19
			// 
			this->numericUpDown19->DecimalPlaces = 3;
			this->numericUpDown19->Enabled = false;
			this->numericUpDown19->Location = System::Drawing::Point(473, 76);
			this->numericUpDown19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown19->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown19->Name = L"numericUpDown19";
			this->numericUpDown19->Size = System::Drawing::Size(92, 25);
			this->numericUpDown19->TabIndex = 62;
			// 
			// numericUpDown20
			// 
			this->numericUpDown20->DecimalPlaces = 3;
			this->numericUpDown20->Enabled = false;
			this->numericUpDown20->Location = System::Drawing::Point(473, 146);
			this->numericUpDown20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown20->Name = L"numericUpDown20";
			this->numericUpDown20->Size = System::Drawing::Size(92, 25);
			this->numericUpDown20->TabIndex = 66;
			// 
			// numericUpDown21
			// 
			this->numericUpDown21->DecimalPlaces = 3;
			this->numericUpDown21->Enabled = false;
			this->numericUpDown21->Location = System::Drawing::Point(348, 146);
			this->numericUpDown21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown21->Name = L"numericUpDown21";
			this->numericUpDown21->Size = System::Drawing::Size(91, 25);
			this->numericUpDown21->TabIndex = 65;
			// 
			// numericUpDown22
			// 
			this->numericUpDown22->DecimalPlaces = 3;
			this->numericUpDown22->Enabled = false;
			this->numericUpDown22->Location = System::Drawing::Point(473, 110);
			this->numericUpDown22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown22->Name = L"numericUpDown22";
			this->numericUpDown22->Size = System::Drawing::Size(92, 25);
			this->numericUpDown22->TabIndex = 64;
			// 
			// numericUpDown23
			// 
			this->numericUpDown23->DecimalPlaces = 3;
			this->numericUpDown23->Enabled = false;
			this->numericUpDown23->Location = System::Drawing::Point(348, 111);
			this->numericUpDown23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown23->Name = L"numericUpDown23";
			this->numericUpDown23->Size = System::Drawing::Size(91, 25);
			this->numericUpDown23->TabIndex = 63;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(483, 39);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(82, 15);
			this->label27->TabIndex = 60;
			this->label27->Text = L"累计调控值";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(357, 39);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(82, 15);
			this->label32->TabIndex = 59;
			this->label32->Text = L"当前调控值";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(231, 31);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(52, 15);
			this->label26->TabIndex = 45;
			this->label26->Text = L"预期值";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(128, 31);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(52, 15);
			this->label25->TabIndex = 44;
			this->label25->Text = L"实测值";
			// 
			// numericUpDown12
			// 
			this->numericUpDown12->DecimalPlaces = 3;
			this->numericUpDown12->Enabled = false;
			this->numericUpDown12->Location = System::Drawing::Point(116, 75);
			this->numericUpDown12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown12->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown12->Name = L"numericUpDown12";
			this->numericUpDown12->Size = System::Drawing::Size(95, 25);
			this->numericUpDown12->TabIndex = 34;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(28, 114);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(75, 15);
			this->label19->TabIndex = 29;
			this->label19->Text = L"湿度（%）";
			// 
			// numericUpDown13
			// 
			this->numericUpDown13->DecimalPlaces = 3;
			this->numericUpDown13->Enabled = false;
			this->numericUpDown13->Location = System::Drawing::Point(232, 76);
			this->numericUpDown13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown13->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown13->Name = L"numericUpDown13";
			this->numericUpDown13->Size = System::Drawing::Size(92, 25);
			this->numericUpDown13->TabIndex = 35;
			// 
			// numericUpDown14
			// 
			this->numericUpDown14->DecimalPlaces = 3;
			this->numericUpDown14->Enabled = false;
			this->numericUpDown14->Location = System::Drawing::Point(233, 146);
			this->numericUpDown14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown14->Name = L"numericUpDown14";
			this->numericUpDown14->Size = System::Drawing::Size(91, 25);
			this->numericUpDown14->TabIndex = 39;
			// 
			// numericUpDown15
			// 
			this->numericUpDown15->DecimalPlaces = 3;
			this->numericUpDown15->Enabled = false;
			this->numericUpDown15->Location = System::Drawing::Point(116, 146);
			this->numericUpDown15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown15->Name = L"numericUpDown15";
			this->numericUpDown15->Size = System::Drawing::Size(95, 25);
			this->numericUpDown15->TabIndex = 38;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(23, 151);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(87, 15);
			this->label23->TabIndex = 31;
			this->label23->Text = L"PM2.5(ppm)";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(28, 76);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(82, 15);
			this->label24->TabIndex = 28;
			this->label24->Text = L"温度（℃）";
			// 
			// numericUpDown16
			// 
			this->numericUpDown16->DecimalPlaces = 3;
			this->numericUpDown16->Enabled = false;
			this->numericUpDown16->Location = System::Drawing::Point(232, 110);
			this->numericUpDown16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown16->Name = L"numericUpDown16";
			this->numericUpDown16->Size = System::Drawing::Size(92, 25);
			this->numericUpDown16->TabIndex = 37;
			// 
			// numericUpDown17
			// 
			this->numericUpDown17->DecimalPlaces = 3;
			this->numericUpDown17->Enabled = false;
			this->numericUpDown17->Location = System::Drawing::Point(116, 111);
			this->numericUpDown17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown17->Name = L"numericUpDown17";
			this->numericUpDown17->Size = System::Drawing::Size(95, 25);
			this->numericUpDown17->TabIndex = 36;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12));
			this->label8->Location = System::Drawing::Point(254, 449);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 20);
			this->label8->TabIndex = 35;
			this->label8->Text = L"model";
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->Location = System::Drawing::Point(319, 440);
			this->numericUpDown10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown10->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->numericUpDown10->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(59, 25);
			this->numericUpDown10->TabIndex = 34;
			this->numericUpDown10->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown10->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown10_ValueChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 12));
			this->label18->Location = System::Drawing::Point(431, 445);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(69, 20);
			this->label18->TabIndex = 37;
			this->label18->Text = L"divide";
			// 
			// numericUpDown11
			// 
			this->numericUpDown11->Location = System::Drawing::Point(510, 445);
			this->numericUpDown11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown11->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000, 0, 0, 0 });
			this->numericUpDown11->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown11->Name = L"numericUpDown11";
			this->numericUpDown11->Size = System::Drawing::Size(59, 25);
			this->numericUpDown11->TabIndex = 36;
			this->numericUpDown11->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(1217, 578);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->numericUpDown11);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->numericUpDown10);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->numericUpDown9);
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
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"COM调试助手";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->EndInit();
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

			 numericUpDown12->Text = "10";
			 numericUpDown13->Text = "300";
			 numericUpDown17->Text = "25";
			 numericUpDown16->Text = "29";			
			 numericUpDown15->Text = "40";
			 numericUpDown14->Text = "80";


			 numericUpDown20->Text = "10";
			 numericUpDown21->Text = "300";
		//	 numericUpDown25->Text = "25";
		//	 numericUpDown24->Text = "29";
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
	private:	 int count = 1;
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 static int FAal=3,FPM=17,FTemp=6,FHumi=13;
			 float (*function)(float, float, int, int);
			 if (Flag == 1)
			 {
				 String^ SendText = nullptr;
				 
				 int divde = Int32::Parse(this->numericUpDown11->Text->Trim());
				 if (count < divde)
					 count++;
				 else
					 count = 1;

				 switch (Int32::Parse(this->numericUpDown10->Text->Trim()))
				 {
				 case 1:function = function1; break;
				 case2: function = function2; break;
				 case 3:function = function3; break;
				 }


				 float nTemp = function((float::Parse(this->numericUpDown2->Text->Trim())), (float::Parse(this->numericUpDown1->Text->Trim())), divde, count);
				 float nHumi = function((float::Parse(this->numericUpDown4->Text->Trim())), (float::Parse(this->numericUpDown3->Text->Trim())), divde, count);
				 float PM = function((Int32::Parse(this->numericUpDown6->Text->Trim())), (Int32::Parse(this->numericUpDown5->Text->Trim())), divde, count);
				 float SHACK = function((Int32::Parse(this->numericUpDown8->Text->Trim())), (Int32::Parse(this->numericUpDown7->Text->Trim())), divde, count);

				 this->numericUpDown12->Text = nTemp.ToString();
				 this->numericUpDown17->Text = nHumi.ToString();
				 this->numericUpDown15->Text = PM.ToString();
					 /*
				 int nTemp= fabs((Int32::Parse(this->numericUpDown2->Text->Trim()) - Int32::Parse(this->numericUpDown1->Text->Trim()))*sin((FAal++)*3.1415 / 20)) + Int32::Parse(this->numericUpDown1->Text->Trim());
				 int nHumi = fabs((Int32::Parse(this->numericUpDown4->Text->Trim()) - Int32::Parse(this->numericUpDown3->Text->Trim()))*sin((FPM++)*3.1415 / 20)) + Int32::Parse(this->numericUpDown3->Text->Trim());
				 float PM = fabs((Int32::Parse(this->numericUpDown6->Text->Trim()) - Int32::Parse(this->numericUpDown5->Text->Trim()))*sin((FTemp++)*3.1415 / 20)) + Int32::Parse(this->numericUpDown5->Text->Trim());
				 int SHACK = fabs((Int32::Parse(this->numericUpDown8->Text->Trim()) - Int32::Parse(this->numericUpDown7->Text->Trim()))*sin((FHumi++)*3.1415 / 20)) + Int32::Parse(this->numericUpDown7->Text->Trim());
*/
				 SendText = nTemp.ToString() + ";" + nHumi.ToString() + ";" + PM.ToString() + ";" + SHACK.ToString() + ";";
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
			 {
				 timer2->Stop();
				 MessageBox::Show(L"串口未打开");
				 
			 }
				 
		
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 timer2->Stop();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown10_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}



private: System::Void groupBox4_Enter(System::Object^  sender, System::EventArgs^  e) {
}
};
}
