#pragma once
#include <stdlib.h>
#include "math.h"
#include"PID.h"
using namespace System::IO::Ports;
namespace COM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 ժҪ
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
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
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::NumericUpDown^  numericUpDown28;
private: System::Windows::Forms::NumericUpDown^  numericUpDown27;
private: System::Windows::Forms::NumericUpDown^  numericUpDown26;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::GroupBox^  groupBox7;



private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::GroupBox^  groupBox8;



private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::NumericUpDown^  numericUpDown38;
private: System::Windows::Forms::NumericUpDown^  numericUpDown39;
private: System::Windows::Forms::NumericUpDown^  numericUpDown40;
private: System::Windows::Forms::NumericUpDown^  numericUpDown41;
private: System::Windows::Forms::NumericUpDown^  numericUpDown35;
private: System::Windows::Forms::NumericUpDown^  numericUpDown42;
private: System::Windows::Forms::NumericUpDown^  numericUpDown43;
private: System::Windows::Forms::NumericUpDown^  numericUpDown44;
private: System::Windows::Forms::NumericUpDown^  numericUpDown45;
private: System::Windows::Forms::NumericUpDown^  numericUpDown36;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::NumericUpDown^  numericUpDown46;
private: System::Windows::Forms::NumericUpDown^  numericUpDown47;
private: System::Windows::Forms::NumericUpDown^  numericUpDown48;
private: System::Windows::Forms::NumericUpDown^  numericUpDown49;
private: System::Windows::Forms::NumericUpDown^  numericUpDown37;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::NumericUpDown^  numericUpDown31;
private: System::Windows::Forms::NumericUpDown^  numericUpDown30;
private: System::Windows::Forms::NumericUpDown^  numericUpDown29;
private: System::Windows::Forms::NumericUpDown^  numericUpDown34;
private: System::Windows::Forms::NumericUpDown^  numericUpDown33;
private: System::Windows::Forms::NumericUpDown^  numericUpDown32;
private: System::Windows::Forms::ListBox^  listBox2;
private: System::Windows::Forms::TextBox^  textBox1;


	private: System::ComponentModel::IContainer^  components;



	private:
		/// <summary>
		/// ����������������
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
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
			this->numericUpDown38 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown39 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown40 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown41 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown35 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown42 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown43 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown44 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown45 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown36 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
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
			this->numericUpDown46 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown47 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown48 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown49 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown37 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
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
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown28 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown27 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown26 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown31 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown30 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown29 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown34 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown33 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown32 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown35))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown17))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown25))->BeginInit();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown26))->BeginInit();
			this->groupBox7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown29))->BeginInit();
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown32))->BeginInit();
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
			this->button1->Text = L"�򿪴���";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(48, 202);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"��";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
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
			this->label5->Text = L"ֹͣλ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 116);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 15);
			this->label4->TabIndex = 3;
			this->label4->Text = L"����λ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 84);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"У��λ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 51);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"������";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 21);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"����";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Location = System::Drawing::Point(14, 295);
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
			this->button8->Text = L"�رմ���";
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
			this->button4->Text = L"�ֶ�����";
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
			this->button3->Text = L"��շ�����";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(71, 580);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 29);
			this->button2->TabIndex = 0;
			this->button2->Text = L"�˳�";
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
			this->label7->Text = L"���ݷ�����";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"����", 12));
			this->button5->Location = System::Drawing::Point(380, 572);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(79, 49);
			this->button5->TabIndex = 5;
			this->button5->Text = L"��ͣ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"����", 12));
			this->button6->Location = System::Drawing::Point(260, 572);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(84, 49);
			this->button6->TabIndex = 6;
			this->button6->Text = L"��ʼ";
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
			this->statusStrip1->Location = System::Drawing::Point(821, 638);
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
			this->label9->Location = System::Drawing::Point(23, 102);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 15);
			this->label9->TabIndex = 12;
			this->label9->Text = L"�¶ȣ��棩";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(23, 134);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(75, 15);
			this->label10->TabIndex = 13;
			this->label10->Text = L"ʪ�ȣ�%��";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(23, 31);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(91, 15);
			this->label11->TabIndex = 14;
			this->label11->Text = L"�ƾ���ppm��";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(23, 68);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(87, 15);
			this->label12->TabIndex = 15;
			this->label12->Text = L"PM2.5(ppm)";
			this->label12->Click += gcnew System::EventHandler(this, &Form1::label12_Click);
			// 
			// numericUpDown1
			// 
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
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
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
			this->label13->Text = L"��";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(203, 76);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(22, 15);
			this->label14->TabIndex = 25;
			this->label14->Text = L"��";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(201, 109);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(22, 15);
			this->label15->TabIndex = 26;
			this->label15->Text = L"��";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(203, 142);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(22, 15);
			this->label16->TabIndex = 27;
			this->label16->Text = L"��";
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
			this->menuStrip1->Size = System::Drawing::Size(1593, 28);
			this->menuStrip1->TabIndex = 28;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// shebeiToolStripMenuItem
			// 
			this->shebeiToolStripMenuItem->Name = L"shebeiToolStripMenuItem";
			this->shebeiToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->shebeiToolStripMenuItem->Text = L"�����豸";
			// 
			// tongxinToolStripMenuItem
			// 
			this->tongxinToolStripMenuItem->Name = L"tongxinToolStripMenuItem";
			this->tongxinToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->tongxinToolStripMenuItem->Text = L"����";
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 2000;
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Location = System::Drawing::Point(804, 578);
			this->numericUpDown9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown9->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000, 0, 0, 0 });
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(59, 25);
			this->numericUpDown9->TabIndex = 29;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"����", 12));
			this->label17->Location = System::Drawing::Point(566, 580);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(199, 20);
			this->label17->TabIndex = 30;
			this->label17->Text = L"����ʱ������ms��:";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(241, 64);
			this->listBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(959, 79);
			this->listBox1->TabIndex = 31;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->numericUpDown38);
			this->groupBox3->Controls->Add(this->numericUpDown39);
			this->groupBox3->Controls->Add(this->numericUpDown40);
			this->groupBox3->Controls->Add(this->numericUpDown41);
			this->groupBox3->Controls->Add(this->numericUpDown35);
			this->groupBox3->Controls->Add(this->label43);
			this->groupBox3->Controls->Add(this->label42);
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
			this->groupBox3->Location = System::Drawing::Point(241, 155);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(416, 236);
			this->groupBox3->TabIndex = 32;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"��һ����";
			// 
			// numericUpDown38
			// 
			this->numericUpDown38->DecimalPlaces = 3;
			this->numericUpDown38->Location = System::Drawing::Point(309, 24);
			this->numericUpDown38->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown38->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown38->Name = L"numericUpDown38";
			this->numericUpDown38->Size = System::Drawing::Size(93, 25);
			this->numericUpDown38->TabIndex = 31;
			// 
			// numericUpDown39
			// 
			this->numericUpDown39->DecimalPlaces = 3;
			this->numericUpDown39->Location = System::Drawing::Point(309, 65);
			this->numericUpDown39->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown39->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown39->Name = L"numericUpDown39";
			this->numericUpDown39->Size = System::Drawing::Size(93, 25);
			this->numericUpDown39->TabIndex = 32;
			// 
			// numericUpDown40
			// 
			this->numericUpDown40->DecimalPlaces = 3;
			this->numericUpDown40->Location = System::Drawing::Point(310, 102);
			this->numericUpDown40->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown40->Name = L"numericUpDown40";
			this->numericUpDown40->Size = System::Drawing::Size(92, 25);
			this->numericUpDown40->TabIndex = 34;
			// 
			// numericUpDown41
			// 
			this->numericUpDown41->DecimalPlaces = 3;
			this->numericUpDown41->Location = System::Drawing::Point(310, 134);
			this->numericUpDown41->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown41->Name = L"numericUpDown41";
			this->numericUpDown41->Size = System::Drawing::Size(93, 25);
			this->numericUpDown41->TabIndex = 33;
			// 
			// numericUpDown35
			// 
			this->numericUpDown35->Location = System::Drawing::Point(233, 183);
			this->numericUpDown35->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown35->Name = L"numericUpDown35";
			this->numericUpDown35->Size = System::Drawing::Size(59, 25);
			this->numericUpDown35->TabIndex = 30;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label43->ForeColor = System::Drawing::Color::Red;
			this->label43->Location = System::Drawing::Point(43, 183);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(29, 20);
			this->label43->TabIndex = 29;
			this->label43->Text = L"��";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(116, 187);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(87, 15);
			this->label42->TabIndex = 28;
			this->label42->Text = L"dfsdfsdfds";
			this->label42->Click += gcnew System::EventHandler(this, &Form1::label42_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->numericUpDown42);
			this->groupBox4->Controls->Add(this->numericUpDown43);
			this->groupBox4->Controls->Add(this->numericUpDown44);
			this->groupBox4->Controls->Add(this->numericUpDown45);
			this->groupBox4->Controls->Add(this->numericUpDown36);
			this->groupBox4->Controls->Add(this->label44);
			this->groupBox4->Controls->Add(this->label45);
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
			this->groupBox4->Location = System::Drawing::Point(709, 155);
			this->groupBox4->Margin = System::Windows::Forms::Padding(4);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(4);
			this->groupBox4->Size = System::Drawing::Size(413, 236);
			this->groupBox4->TabIndex = 33;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"�ڶ�����";
			// 
			// numericUpDown42
			// 
			this->numericUpDown42->DecimalPlaces = 3;
			this->numericUpDown42->Location = System::Drawing::Point(303, 24);
			this->numericUpDown42->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown42->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown42->Name = L"numericUpDown42";
			this->numericUpDown42->Size = System::Drawing::Size(91, 25);
			this->numericUpDown42->TabIndex = 47;
			// 
			// numericUpDown43
			// 
			this->numericUpDown43->DecimalPlaces = 3;
			this->numericUpDown43->Location = System::Drawing::Point(303, 62);
			this->numericUpDown43->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown43->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown43->Name = L"numericUpDown43";
			this->numericUpDown43->Size = System::Drawing::Size(91, 25);
			this->numericUpDown43->TabIndex = 48;
			// 
			// numericUpDown44
			// 
			this->numericUpDown44->DecimalPlaces = 3;
			this->numericUpDown44->Location = System::Drawing::Point(303, 95);
			this->numericUpDown44->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown44->Name = L"numericUpDown44";
			this->numericUpDown44->Size = System::Drawing::Size(91, 25);
			this->numericUpDown44->TabIndex = 50;
			// 
			// numericUpDown45
			// 
			this->numericUpDown45->DecimalPlaces = 3;
			this->numericUpDown45->Location = System::Drawing::Point(302, 131);
			this->numericUpDown45->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown45->Name = L"numericUpDown45";
			this->numericUpDown45->Size = System::Drawing::Size(92, 25);
			this->numericUpDown45->TabIndex = 49;
			// 
			// numericUpDown36
			// 
			this->numericUpDown36->Location = System::Drawing::Point(237, 187);
			this->numericUpDown36->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown36->Name = L"numericUpDown36";
			this->numericUpDown36->Size = System::Drawing::Size(59, 25);
			this->numericUpDown36->TabIndex = 46;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label44->ForeColor = System::Drawing::Color::Red;
			this->label44->Location = System::Drawing::Point(47, 187);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(29, 20);
			this->label44->TabIndex = 45;
			this->label44->Text = L"��";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(120, 191);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(87, 15);
			this->label45->TabIndex = 44;
			this->label45->Text = L"dfsdfsdfds";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(16, 31);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(91, 15);
			this->label8->TabIndex = 30;
			this->label8->Text = L"�ƾ���ppm��";
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->Location = System::Drawing::Point(123, 20);
			this->numericUpDown10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown10->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(60, 25);
			this->numericUpDown10->TabIndex = 32;
			// 
			// numericUpDown11
			// 
			this->numericUpDown11->Location = System::Drawing::Point(221, 20);
			this->numericUpDown11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown11->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown11->Name = L"numericUpDown11";
			this->numericUpDown11->Size = System::Drawing::Size(59, 25);
			this->numericUpDown11->TabIndex = 33;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(192, 31);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(22, 15);
			this->label18->TabIndex = 40;
			this->label18->Text = L"��";
			// 
			// numericUpDown12
			// 
			this->numericUpDown12->Location = System::Drawing::Point(121, 61);
			this->numericUpDown12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown12->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown12->Name = L"numericUpDown12";
			this->numericUpDown12->Size = System::Drawing::Size(59, 25);
			this->numericUpDown12->TabIndex = 34;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(13, 138);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(75, 15);
			this->label19->TabIndex = 29;
			this->label19->Text = L"ʪ�ȣ�%��";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(193, 139);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(22, 15);
			this->label20->TabIndex = 43;
			this->label20->Text = L"��";
			// 
			// numericUpDown13
			// 
			this->numericUpDown13->Location = System::Drawing::Point(221, 61);
			this->numericUpDown13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown13->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown13->Name = L"numericUpDown13";
			this->numericUpDown13->Size = System::Drawing::Size(59, 25);
			this->numericUpDown13->TabIndex = 35;
			// 
			// numericUpDown14
			// 
			this->numericUpDown14->Location = System::Drawing::Point(223, 131);
			this->numericUpDown14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown14->Name = L"numericUpDown14";
			this->numericUpDown14->Size = System::Drawing::Size(59, 25);
			this->numericUpDown14->TabIndex = 39;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(192, 105);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(22, 15);
			this->label21->TabIndex = 42;
			this->label21->Text = L"��";
			// 
			// numericUpDown15
			// 
			this->numericUpDown15->Location = System::Drawing::Point(120, 131);
			this->numericUpDown15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown15->Name = L"numericUpDown15";
			this->numericUpDown15->Size = System::Drawing::Size(60, 25);
			this->numericUpDown15->TabIndex = 38;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(193, 72);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(22, 15);
			this->label22->TabIndex = 41;
			this->label22->Text = L"��";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(13, 64);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(87, 15);
			this->label23->TabIndex = 31;
			this->label23->Text = L"PM2.5(ppm)";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(13, 99);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(82, 15);
			this->label24->TabIndex = 28;
			this->label24->Text = L"�¶ȣ��棩";
			// 
			// numericUpDown16
			// 
			this->numericUpDown16->Location = System::Drawing::Point(221, 95);
			this->numericUpDown16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown16->Name = L"numericUpDown16";
			this->numericUpDown16->Size = System::Drawing::Size(60, 25);
			this->numericUpDown16->TabIndex = 37;
			// 
			// numericUpDown17
			// 
			this->numericUpDown17->Location = System::Drawing::Point(121, 96);
			this->numericUpDown17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown17->Name = L"numericUpDown17";
			this->numericUpDown17->Size = System::Drawing::Size(60, 25);
			this->numericUpDown17->TabIndex = 36;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->numericUpDown46);
			this->groupBox5->Controls->Add(this->numericUpDown47);
			this->groupBox5->Controls->Add(this->numericUpDown48);
			this->groupBox5->Controls->Add(this->numericUpDown49);
			this->groupBox5->Controls->Add(this->numericUpDown37);
			this->groupBox5->Controls->Add(this->label46);
			this->groupBox5->Controls->Add(this->label47);
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
			this->groupBox5->Location = System::Drawing::Point(1175, 155);
			this->groupBox5->Margin = System::Windows::Forms::Padding(4);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(4);
			this->groupBox5->Size = System::Drawing::Size(418, 236);
			this->groupBox5->TabIndex = 33;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"��������";
			// 
			// numericUpDown46
			// 
			this->numericUpDown46->DecimalPlaces = 3;
			this->numericUpDown46->Location = System::Drawing::Point(303, 20);
			this->numericUpDown46->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown46->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown46->Name = L"numericUpDown46";
			this->numericUpDown46->Size = System::Drawing::Size(89, 25);
			this->numericUpDown46->TabIndex = 47;
			// 
			// numericUpDown47
			// 
			this->numericUpDown47->DecimalPlaces = 3;
			this->numericUpDown47->Location = System::Drawing::Point(303, 61);
			this->numericUpDown47->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown47->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown47->Name = L"numericUpDown47";
			this->numericUpDown47->Size = System::Drawing::Size(89, 25);
			this->numericUpDown47->TabIndex = 48;
			// 
			// numericUpDown48
			// 
			this->numericUpDown48->DecimalPlaces = 3;
			this->numericUpDown48->Location = System::Drawing::Point(304, 131);
			this->numericUpDown48->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown48->Name = L"numericUpDown48";
			this->numericUpDown48->Size = System::Drawing::Size(88, 25);
			this->numericUpDown48->TabIndex = 50;
			// 
			// numericUpDown49
			// 
			this->numericUpDown49->DecimalPlaces = 3;
			this->numericUpDown49->Location = System::Drawing::Point(303, 95);
			this->numericUpDown49->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown49->Name = L"numericUpDown49";
			this->numericUpDown49->Size = System::Drawing::Size(89, 25);
			this->numericUpDown49->TabIndex = 49;
			// 
			// numericUpDown37
			// 
			this->numericUpDown37->Location = System::Drawing::Point(234, 189);
			this->numericUpDown37->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown37->Name = L"numericUpDown37";
			this->numericUpDown37->Size = System::Drawing::Size(59, 25);
			this->numericUpDown37->TabIndex = 46;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label46->ForeColor = System::Drawing::Color::Red;
			this->label46->Location = System::Drawing::Point(44, 189);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(29, 20);
			this->label46->TabIndex = 45;
			this->label46->Text = L"��";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(117, 193);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(87, 15);
			this->label47->TabIndex = 44;
			this->label47->Text = L"dfsdfsdfds";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(13, 31);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(91, 15);
			this->label25->TabIndex = 30;
			this->label25->Text = L"�ƾ���ppm��";
			// 
			// numericUpDown18
			// 
			this->numericUpDown18->Location = System::Drawing::Point(123, 20);
			this->numericUpDown18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown18->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown18->Name = L"numericUpDown18";
			this->numericUpDown18->Size = System::Drawing::Size(60, 25);
			this->numericUpDown18->TabIndex = 32;
			// 
			// numericUpDown19
			// 
			this->numericUpDown19->Location = System::Drawing::Point(221, 20);
			this->numericUpDown19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown19->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown19->Name = L"numericUpDown19";
			this->numericUpDown19->Size = System::Drawing::Size(59, 25);
			this->numericUpDown19->TabIndex = 33;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(192, 31);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(22, 15);
			this->label26->TabIndex = 40;
			this->label26->Text = L"��";
			// 
			// numericUpDown20
			// 
			this->numericUpDown20->Location = System::Drawing::Point(121, 61);
			this->numericUpDown20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown20->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown20->Name = L"numericUpDown20";
			this->numericUpDown20->Size = System::Drawing::Size(59, 25);
			this->numericUpDown20->TabIndex = 34;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(13, 134);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(75, 15);
			this->label27->TabIndex = 29;
			this->label27->Text = L"ʪ�ȣ�%��";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(193, 139);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(22, 15);
			this->label28->TabIndex = 43;
			this->label28->Text = L"��";
			// 
			// numericUpDown21
			// 
			this->numericUpDown21->Location = System::Drawing::Point(221, 61);
			this->numericUpDown21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown21->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown21->Name = L"numericUpDown21";
			this->numericUpDown21->Size = System::Drawing::Size(59, 25);
			this->numericUpDown21->TabIndex = 35;
			// 
			// numericUpDown22
			// 
			this->numericUpDown22->Location = System::Drawing::Point(223, 131);
			this->numericUpDown22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown22->Name = L"numericUpDown22";
			this->numericUpDown22->Size = System::Drawing::Size(59, 25);
			this->numericUpDown22->TabIndex = 39;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(192, 105);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(22, 15);
			this->label29->TabIndex = 42;
			this->label29->Text = L"��";
			// 
			// numericUpDown23
			// 
			this->numericUpDown23->Location = System::Drawing::Point(120, 131);
			this->numericUpDown23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown23->Name = L"numericUpDown23";
			this->numericUpDown23->Size = System::Drawing::Size(60, 25);
			this->numericUpDown23->TabIndex = 38;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(193, 72);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(22, 15);
			this->label30->TabIndex = 41;
			this->label30->Text = L"��";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(13, 64);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(87, 15);
			this->label31->TabIndex = 31;
			this->label31->Text = L"PM2.5(ppm)";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(13, 99);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(82, 15);
			this->label32->TabIndex = 28;
			this->label32->Text = L"�¶ȣ��棩";
			// 
			// numericUpDown24
			// 
			this->numericUpDown24->Location = System::Drawing::Point(221, 95);
			this->numericUpDown24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown24->Name = L"numericUpDown24";
			this->numericUpDown24->Size = System::Drawing::Size(60, 25);
			this->numericUpDown24->TabIndex = 37;
			// 
			// numericUpDown25
			// 
			this->numericUpDown25->Location = System::Drawing::Point(121, 96);
			this->numericUpDown25->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown25->Name = L"numericUpDown25";
			this->numericUpDown25->Size = System::Drawing::Size(60, 25);
			this->numericUpDown25->TabIndex = 36;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->numericUpDown28);
			this->groupBox6->Controls->Add(this->numericUpDown27);
			this->groupBox6->Controls->Add(this->numericUpDown26);
			this->groupBox6->Controls->Add(this->label35);
			this->groupBox6->Controls->Add(this->label34);
			this->groupBox6->Controls->Add(this->label33);
			this->groupBox6->Location = System::Drawing::Point(241, 419);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(416, 101);
			this->groupBox6->TabIndex = 34;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"groupBox6";
			// 
			// numericUpDown28
			// 
			this->numericUpDown28->DecimalPlaces = 3;
			this->numericUpDown28->Location = System::Drawing::Point(285, 62);
			this->numericUpDown28->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown28->Name = L"numericUpDown28";
			this->numericUpDown28->Size = System::Drawing::Size(91, 25);
			this->numericUpDown28->TabIndex = 30;
			// 
			// numericUpDown27
			// 
			this->numericUpDown27->DecimalPlaces = 3;
			this->numericUpDown27->Location = System::Drawing::Point(165, 62);
			this->numericUpDown27->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown27->Name = L"numericUpDown27";
			this->numericUpDown27->Size = System::Drawing::Size(94, 25);
			this->numericUpDown27->TabIndex = 29;
			// 
			// numericUpDown26
			// 
			this->numericUpDown26->DecimalPlaces = 3;
			this->numericUpDown26->Location = System::Drawing::Point(39, 62);
			this->numericUpDown26->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown26->Name = L"numericUpDown26";
			this->numericUpDown26->Size = System::Drawing::Size(95, 25);
			this->numericUpDown26->TabIndex = 28;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(282, 34);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(82, 15);
			this->label35->TabIndex = 17;
			this->label35->Text = L"�¶ȣ��棩";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(172, 34);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(87, 15);
			this->label34->TabIndex = 16;
			this->label34->Text = L"PM2.5(ppm)";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(43, 34);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(91, 15);
			this->label33->TabIndex = 15;
			this->label33->Text = L"�ƾ���ppm��";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->numericUpDown31);
			this->groupBox7->Controls->Add(this->numericUpDown30);
			this->groupBox7->Controls->Add(this->numericUpDown29);
			this->groupBox7->Controls->Add(this->label36);
			this->groupBox7->Controls->Add(this->label37);
			this->groupBox7->Controls->Add(this->label38);
			this->groupBox7->Location = System::Drawing::Point(709, 419);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(413, 101);
			this->groupBox7->TabIndex = 35;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"groupBox7";
			// 
			// numericUpDown31
			// 
			this->numericUpDown31->DecimalPlaces = 3;
			this->numericUpDown31->Location = System::Drawing::Point(272, 62);
			this->numericUpDown31->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown31->Name = L"numericUpDown31";
			this->numericUpDown31->Size = System::Drawing::Size(95, 25);
			this->numericUpDown31->TabIndex = 31;
			// 
			// numericUpDown30
			// 
			this->numericUpDown30->DecimalPlaces = 3;
			this->numericUpDown30->Location = System::Drawing::Point(153, 62);
			this->numericUpDown30->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown30->Name = L"numericUpDown30";
			this->numericUpDown30->Size = System::Drawing::Size(95, 25);
			this->numericUpDown30->TabIndex = 30;
			// 
			// numericUpDown29
			// 
			this->numericUpDown29->DecimalPlaces = 3;
			this->numericUpDown29->Location = System::Drawing::Point(39, 62);
			this->numericUpDown29->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown29->Name = L"numericUpDown29";
			this->numericUpDown29->Size = System::Drawing::Size(95, 25);
			this->numericUpDown29->TabIndex = 29;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(254, 34);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(82, 15);
			this->label36->TabIndex = 17;
			this->label36->Text = L"�¶ȣ��棩";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(150, 34);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(87, 15);
			this->label37->TabIndex = 16;
			this->label37->Text = L"PM2.5(ppm)";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(43, 34);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(91, 15);
			this->label38->TabIndex = 15;
			this->label38->Text = L"�ƾ���ppm��";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->numericUpDown34);
			this->groupBox8->Controls->Add(this->numericUpDown33);
			this->groupBox8->Controls->Add(this->numericUpDown32);
			this->groupBox8->Controls->Add(this->label39);
			this->groupBox8->Controls->Add(this->label40);
			this->groupBox8->Controls->Add(this->label41);
			this->groupBox8->Location = System::Drawing::Point(1175, 419);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(418, 101);
			this->groupBox8->TabIndex = 36;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"groupBox8";
			// 
			// numericUpDown34
			// 
			this->numericUpDown34->DecimalPlaces = 3;
			this->numericUpDown34->Location = System::Drawing::Point(257, 62);
			this->numericUpDown34->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown34->Name = L"numericUpDown34";
			this->numericUpDown34->Size = System::Drawing::Size(95, 25);
			this->numericUpDown34->TabIndex = 31;
			// 
			// numericUpDown33
			// 
			this->numericUpDown33->DecimalPlaces = 3;
			this->numericUpDown33->Location = System::Drawing::Point(153, 62);
			this->numericUpDown33->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown33->Name = L"numericUpDown33";
			this->numericUpDown33->Size = System::Drawing::Size(95, 25);
			this->numericUpDown33->TabIndex = 30;
			// 
			// numericUpDown32
			// 
			this->numericUpDown32->DecimalPlaces = 3;
			this->numericUpDown32->Location = System::Drawing::Point(39, 62);
			this->numericUpDown32->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown32->Name = L"numericUpDown32";
			this->numericUpDown32->Size = System::Drawing::Size(95, 25);
			this->numericUpDown32->TabIndex = 29;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(254, 34);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(82, 15);
			this->label39->TabIndex = 17;
			this->label39->Text = L"�¶ȣ��棩";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(150, 34);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(87, 15);
			this->label40->TabIndex = 16;
			this->label40->Text = L"PM2.5(ppm)";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(43, 34);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(91, 15);
			this->label41->TabIndex = 15;
			this->label41->Text = L"�ƾ���ppm��";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 15;
			this->listBox2->Location = System::Drawing::Point(1243, 52);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(350, 94);
			this->listBox2->TabIndex = 37;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(872, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(299, 25);
			this->textBox1->TabIndex = 38;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(1593, 669);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
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
			this->Text = L"COM��������";
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown35))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown36))->EndInit();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown25))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown26))->EndInit();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown29))->EndInit();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown32))->EndInit();
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
				 MessageBox::Show("��ǰû�п��ô��ڣ��������豸���������⴮�ڣ�");
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
			 comboBox3->Text = "��";
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

			comboBox3->Items->Add("��"); comboBox3->Items->Add("��У��"); comboBox3->Items->Add("żУ��");
			comboBox4->Items->Add("8"); comboBox4->Items->Add("7"); comboBox4->Items->Add("6"); comboBox4->Items->Add("5");
			comboBox5->Items->Add("1"); comboBox5->Items->Add("1.5"); comboBox5->Items->Add("2");
		
			button8->Enabled = false;
			
			ranTemp = gcnew System::Random(); // �����������ʵ��
			ranHumi = gcnew System::Random(); // �����������ʵ��
			ranAlcol = gcnew System::Random(); // �����������ʵ��
			ranPM = gcnew System::Random(); // �����������ʵ��

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
				 MessageBox::Show(L"����δ��");
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->listBox1->Items->Clear();
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 DateTime dateTime = DateTime::Now;             //��ȡϵͳ��ǰʱ��
			 toolStripStatusLabel1->Text = dateTime.ToLongDateString();       // ��ʾ����
			 toolStripStatusLabel2->Text = dateTime.ToLongTimeString();     // ��ʾʱ��


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
				// MessageBox::Show(L"����δ��");
			 ///*ranAlcol->Next(0, 150);
			 //ranHumi->Next(35, 85);
			 //ranPM->Next(0, 100);
			 //ranTemp->NextDouble();*/
}
		 array<float, 2>^ pre_data = gcnew array<float, 2>(3, 3);
		 array<float, 2>^ target = gcnew array<float, 2>(3, 3);
		 //pre_data[0] = gcnew  array<float>(3);

		 array<int>^ pid_flag = gcnew array<int>(3);
		 PID_incremental ^pid1 = gcnew PID_incremental(0.18, 0.99, 0.005);
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 static int FAal=3,FPM=17,FTemp=6,FHumi=13;
			 float pid_increment;
			 int temp;
			 
			 this->label44->ForeColor = System::Drawing::Color::Lime;
			 this->label46->ForeColor = System::Drawing::Color::Lime;
			 this->label43->ForeColor = System::Drawing::Color::Lime;

			 target[0, 0] = float::Parse(this->numericUpDown26->Text->Trim()); target[0, 1] = float::Parse(this->numericUpDown27->Text->Trim()); target[0, 2] = float::Parse(this->numericUpDown28->Text->Trim());
			 target[1, 0] = float::Parse(this->numericUpDown29->Text->Trim()); target[1, 1] = float::Parse(this->numericUpDown30->Text->Trim()); target[1, 2] = float::Parse(this->numericUpDown31->Text->Trim());
			 target[2, 0] = float::Parse(this->numericUpDown32->Text->Trim()); target[2, 1] = float::Parse(this->numericUpDown33->Text->Trim()); target[2, 2] = float::Parse(this->numericUpDown34->Text->Trim());
			 pid_flag[0] = 1; pid_flag[1] = 0; pid_flag[2] = 1;

			 if (Flag == 1)
			 {
				 String^ SendText = nullptr;
				 static float nAalcol1; static float nPM1; static float nTemp1; static float nHumi1;
				 nHumi1 = (rand() % 11) * 0.01*temp - (rand() % 11) * 0.01*temp + fabs((Int32::Parse(this->numericUpDown8->Text->Trim()) - Int32::Parse(this->numericUpDown7->Text->Trim()))*sin((FHumi++)*3.1415 / 20)) + Int32::Parse(this->numericUpDown7->Text->Trim());
				 temp = Int32::Parse(this->numericUpDown35->Text->Trim());
				 if (pid_flag[0]==0)
				 {
					 nAalcol1 = (rand() % 11) * 0.01*temp - (rand() % 11) * 0.01*temp+fabs((float::Parse(this->numericUpDown2->Text->Trim()) - float::Parse(this->numericUpDown1->Text->Trim()))*sin((FAal++)*3.1415 / 20)) + float::Parse(this->numericUpDown1->Text->Trim());
					 nPM1 = (rand() % 11) * 0.01*temp - (rand() % 11) * 0.01*temp + fabs((float::Parse(this->numericUpDown4->Text->Trim()) - float::Parse(this->numericUpDown3->Text->Trim()))*sin((FPM++)*3.1415 / 20)) + float::Parse(this->numericUpDown3->Text->Trim());
					 nTemp1 = (rand() % 11) * 0.01*temp - (rand() % 11) * 0.01*temp + fabs((float::Parse(this->numericUpDown6->Text->Trim()) - float::Parse(this->numericUpDown5->Text->Trim()))*sin((FTemp++)*3.1415 / 20)) + float::Parse(this->numericUpDown5->Text->Trim());
				}

				 if (pid_flag[0] == 1)
				 {
					 nAalcol1 += (rand() % 11) * 0.01*temp - (rand() % 11) * 0.01*temp; pid_increment = pid1->pid_control(target[0, 0], nAalcol1); nAalcol1 += control(pre_data[0, 0], pid_increment); pre_data[0, 0] = pid_increment;
					 nPM1 += (rand() % 11) * 0.01*temp - (rand() % 11) * 0.01*temp; pid_increment = pid1->pid_control(target[0, 1], nPM1); nPM1 += control(pre_data[0, 1], pid_increment); pre_data[0, 1] = pid_increment;
					 nTemp1 += (rand() % 11) * 0.01*temp - (rand() % 11) * 0.01*temp; pid_increment = pid1->pid_control(target[0, 2], nTemp1); nTemp1 += control(pre_data[0, 2], pid_increment); pre_data[0, 2] = pid_increment;
					// nHumi1 = fabs((Int32::Parse(this->numericUpDown8->Text->Trim()) - Int32::Parse(this->numericUpDown7->Text->Trim()))*sin((FHumi++)*3.1415 / 20)) + Int32::Parse(this->numericUpDown7->Text->Trim());

				 }
				 this->numericUpDown38->Text = nAalcol1.ToString();
				 this->numericUpDown39->Text = nPM1.ToString();
				 this->numericUpDown40->Text = nTemp1.ToString();
				 this->numericUpDown41->Text = nHumi1.ToString();




				 static float nAalcol2; static float nPM2; static float nTemp2; static float nHumi2;
				 temp = Int32::Parse(this->numericUpDown36->Text->Trim());
				 nHumi2 = (rand() % 11) * 0.01*temp - (rand() % 11) * 0.01*temp + fabs((float::Parse(this->numericUpDown14->Text->Trim()) - float::Parse(this->numericUpDown15->Text->Trim()))*sin((FHumi++)*3.1415 / 20)) + float::Parse(this->numericUpDown15->Text->Trim());
				 if (pid_flag[1] == 0 )
				 {
					 nAalcol2 = (rand() % 11) * 0.01*temp - (rand() % 11) * 0.01*temp + fabs((float::Parse(this->numericUpDown11->Text->Trim()) - float::Parse(this->numericUpDown10->Text->Trim()))*sin((FAal++)*3.1415 / 20)) + float::Parse(this->numericUpDown10->Text->Trim());
					 nPM2 = (rand() % 11) * 0.01*temp - (rand() % 11) * 0.01*temp + fabs((float::Parse(this->numericUpDown13->Text->Trim()) - float::Parse(this->numericUpDown12->Text->Trim()))*sin((FPM++)*3.1415 / 20)) + float::Parse(this->numericUpDown12->Text->Trim());
					 nTemp2 = (rand() % 11) * 0.01*temp - (rand() % 11) * 0.01*temp + fabs((float::Parse(this->numericUpDown16->Text->Trim()) - float::Parse(this->numericUpDown17->Text->Trim()))*sin((FTemp++)*3.1415 / 20)) + float::Parse(this->numericUpDown17->Text->Trim());
					// nHumi2 = fabs((Int32::Parse(this->numericUpDown14->Text->Trim()) - Int32::Parse(this->numericUpDown15->Text->Trim()))*sin((FHumi++)*3.1415 / 20)) + Int32::Parse(this->numericUpDown15->Text->Trim());

				 }

				 if (pid_flag[1] == 1)
				 {
					 nAalcol2 += (rand() % 11) * 0.01*temp - (rand() % 11) * 0.01*temp; pid_increment = pid1->pid_control(target[1, 0], nAalcol2); nAalcol2 += control(pre_data[1, 0], pid_increment); pre_data[1, 0] = pid_increment;
					 nPM2 += (rand() % 11) * 0.01*temp - (rand() % 11) * 0.01*temp; pid_increment = pid1->pid_control(target[1, 1], nPM2); nPM2 += control(pre_data[1, 1], pid_increment); pre_data[1, 1] = pid_increment;
					 nTemp2 += (rand() % 11) * 0.01*temp - (rand() % 11) * 0.01*temp; pid_increment = pid1->pid_control(target[1, 2], nTemp2); nTemp2 += control(pre_data[1, 2], pid_increment); pre_data[1, 2] = pid_increment;
					 // nHumi1 = fabs((Int32::Parse(this->numericUpDown8->Text->Trim()) - Int32::Parse(this->numericUpDown7->Text->Trim()))*sin((FHumi++)*3.1415 / 20)) + Int32::Parse(this->numericUpDown7->Text->Trim());
				 }

				 this->numericUpDown42->Text = nAalcol2.ToString();
				 this->numericUpDown43->Text = nPM2.ToString();
				 this->numericUpDown44->Text = nTemp2.ToString();
				 this->numericUpDown45->Text = nHumi2.ToString();





				 static float  nAalcol3; static float  nPM3; static float  nTemp3; static float  nHumi3;
				 temp = Int32::Parse(this->numericUpDown37->Text->Trim());
				 nHumi3 = (rand() % 11) * 0.01*temp - (rand() % 11) * 0.01*temp + fabs((float::Parse(this->numericUpDown22->Text->Trim()) - float::Parse(this->numericUpDown23->Text->Trim()))*sin((FHumi++)*3.1415 / 20)) + float::Parse(this->numericUpDown23->Text->Trim());
				 if (pid_flag[2] == 0)
				 {
					 nAalcol3 = (rand() % 11) * 0.01*temp - (rand() % 11) * 0.01*temp + fabs((float::Parse(this->numericUpDown19->Text->Trim()) - float::Parse(this->numericUpDown18->Text->Trim()))*sin((FAal++)*3.1415 / 20)) + float::Parse(this->numericUpDown18->Text->Trim());
					 nPM3 = (rand() % 11) * 0.01*temp - (rand() % 11) * 0.01*temp + fabs((float::Parse(this->numericUpDown21->Text->Trim()) - float::Parse(this->numericUpDown20->Text->Trim()))*sin((FPM++)*3.1415 / 20)) + float::Parse(this->numericUpDown20->Text->Trim());
					 nTemp3 = (rand() % 11) * 0.01*temp - (rand() % 11) * 0.01*temp + fabs((float::Parse(this->numericUpDown24->Text->Trim()) - float::Parse(this->numericUpDown25->Text->Trim()))*sin((FTemp++)*3.1415 / 20)) + float::Parse(this->numericUpDown25->Text->Trim());
					// nHumi3 = fabs((Int32::Parse(this->numericUpDown22->Text->Trim()) - Int32::Parse(this->numericUpDown23->Text->Trim()))*sin((FHumi++)*3.1415 / 20)) + Int32::Parse(this->numericUpDown23->Text->Trim());
				 }

				 if (pid_flag[2] == 1)
				 {
					 nAalcol3 += (rand() % 11) * 0.01*temp - (rand() % 11) * 0.01*temp; pid_increment = pid1->pid_control(target[2, 0], nAalcol3); nAalcol3 += control(pre_data[2, 0], pid_increment); pre_data[2, 0] = pid_increment;
					 nPM3 += (rand() % 11) * 0.01*temp - (rand() % 11) * 0.01*temp; pid_increment = pid1->pid_control(target[2, 1], nPM3); nPM3 += control(pre_data[2, 1], pid_increment); pre_data[2, 1] = pid_increment;
					 nTemp3 += (rand() % 11) * 0.01*temp - (rand() % 11) * 0.01*temp; pid_increment = pid1->pid_control(target[2, 2], nTemp3); nTemp3 += control(pre_data[2, 2], pid_increment); pre_data[2, 2] = pid_increment;
					 // nHumi1 = fabs((Int32::Parse(this->numericUpDown8->Text->Trim()) - Int32::Parse(this->numericUpDown7->Text->Trim()))*sin((FHumi++)*3.1415 / 20)) + Int32::Parse(this->numericUpDown7->Text->Trim());
				 }
				 
				 
				 
				 
				 
				 this->numericUpDown19->Text = nAalcol3.ToString();
				 this->numericUpDown21->Text = nPM3.ToString();
				 this->numericUpDown24->Text = nTemp3.ToString();
				 this->numericUpDown22->Text = nHumi3.ToString();







				 /*int nAalcol = ranAlcol->Next(Int32::Parse(this->numericUpDown1->Text->Trim()), Int32::Parse(this->numericUpDown2->Text->Trim()));
				 int nPM = ranPM->Next(Int32::Parse(this->numericUpDown3->Text->Trim()), Int32::Parse(this->numericUpDown4->Text->Trim()));
				 float nTemp = Int32::Parse(this->numericUpDown5->Text->Trim()) + (Int32::Parse(this->numericUpDown6->Text->Trim()) - Int32::Parse(this->numericUpDown5->Text->Trim())) * (ranTemp->NextDouble());
				 int nHumi = ranHumi->Next(Int32::Parse(this->numericUpDown7->Text->Trim()), Int32::Parse(this->numericUpDown8->Text->Trim()));*/
				 SendText = nAalcol1.ToString() + ";" + nPM1.ToString() + ";" + nTemp1.ToString(L"f1") + ";" + nHumi1.ToString() + ";" + nAalcol2.ToString() + ";" + nPM2.ToString() + ";" + nTemp2.ToString(L"f1") + ";" + nHumi2.ToString() + ";" + nAalcol3.ToString() + ";" + nPM3.ToString() + ";" + nTemp3.ToString(L"f1") + ";" + nHumi3.ToString();
				 String^ receive_data1 = "ds";
				 if (com->IsOpen)
				 {
					 com->Write(SendText);
					 this->listBox1->Items->Add(SendText);
					 
					 if (com->BytesToRead > 0)

					 {

						 char ch = (char)com->ReadByte();

						 receive_data1 += ch.ToString();
						
					 }
					// this->textBox1->Text = receive_data;
					//if (receive_data->Length > 0)
					  this->listBox2->Items->Add(receive_data1);
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
				MessageBox::Show(L"����δ��");
				timer2->Stop();
			 }
				 
			 this->timer2->Interval = Int32::Parse(this->numericUpDown9->Text->Trim());
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 timer2->Stop();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label42_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

