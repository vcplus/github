#pragma once
#include "SerialForm.h"
#include "Windows.h"
#include "tchar.h"
#include"SetForm.h"
#include"LocationForm.h"
#include"TempForm.h"
#include"FForm.h"
#include"HumidForm.h"
#include"ShakeForm.h"
#include"ChartSetForm.h"
#include"HistorySearch.h"
#include"valuechange.h"
namespace AGMS {

	using namespace System;
	using namespace System::Data;
	using namespace System::IO::Ports;
	using namespace System::ComponentModel;
	using namespace System::Windows::Forms;
	using namespace System::Collections;
	using namespace System::Runtime::InteropServices;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  ϵͳToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �鿴ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  �½�NToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  ��OToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  ����SToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  ��ӡPToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;
	private: System::Windows::Forms::ToolStripButton^  ����UToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  ����CToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  ճ��PToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;

	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ToolStripProgressBar^  toolStripProgressBar1;
	private: System::Windows::Forms::GroupBox^  ʵʱ����;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ListBox^  listBox1;


	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ϵͳToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �ر�ϵͳToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  �򿪴���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �رմ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �¶�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʪ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �񵴶�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �к�����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ״̬��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ƽ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ϵͳ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::NotifyIcon^  notifyIcon1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;

	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ֵ����ToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^  ��ʽ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �Զ�����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �˳�ToolStripMenuItem;
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ͼToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ʾ��ͼToolStripMenuItem;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton4;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel3;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel4;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel5;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel6;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ͼToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ͼToolStripMenuItem;
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	public: static array<String^> ^split = gcnew array<String^>(18){ "1" };
private: System::Windows::Forms::ToolStripMenuItem^  ϵͳToolStripMenuItem1;
public:
private: System::Windows::Forms::ToolStripMenuItem^  ��ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  �ر�ToolStripMenuItem;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label10;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ϵͳToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ϵͳToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ر�ϵͳToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�򿪴���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�رմ���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ͼToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ʾ��ͼToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�¶�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʪ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�񵴶�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�к�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ֵ����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ƽ��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ʽ����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ͼToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ͼToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�鿴ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->״̬��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�Զ�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ϵͳToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ر�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ϵͳ����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->�½�NToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->��OToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->����SToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->��ӡPToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����UToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->����CToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->ճ��PToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel4 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel5 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel6 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->ʵʱ���� = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->�˳�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->ʵʱ����->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->ϵͳToolStripMenuItem,
					this->��������ToolStripMenuItem, this->��ͼToolStripMenuItem, this->��������ToolStripMenuItem, this->toolStripMenuItem1, this->�鿴ToolStripMenuItem,
					this->ϵͳToolStripMenuItem1, this->����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1302, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->MouseEnter += gcnew System::EventHandler(this, &Form1::menuStrip1_MouseEnter);
			this->menuStrip1->MouseLeave += gcnew System::EventHandler(this, &Form1::menuStrip1_MouseLeave);
			// 
			// ϵͳToolStripMenuItem
			// 
			this->ϵͳToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��ϵͳToolStripMenuItem,
					this->�ر�ϵͳToolStripMenuItem
			});
			this->ϵͳToolStripMenuItem->Name = L"ϵͳToolStripMenuItem";
			this->ϵͳToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->ϵͳToolStripMenuItem->Text = L"��ʼ";
			this->ϵͳToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::ϵͳToolStripMenuItem_DropDownItemClicked);
			this->ϵͳToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// ��ϵͳToolStripMenuItem
			// 
			this->��ϵͳToolStripMenuItem->Name = L"��ϵͳToolStripMenuItem";
			this->��ϵͳToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->��ϵͳToolStripMenuItem->Text = L"��ϵͳ";
			this->��ϵͳToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// �ر�ϵͳToolStripMenuItem
			// 
			this->�ر�ϵͳToolStripMenuItem->Name = L"�ر�ϵͳToolStripMenuItem";
			this->�ر�ϵͳToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->�ر�ϵͳToolStripMenuItem->Text = L"�ر�ϵͳ";
			this->�ر�ϵͳToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��������ToolStripMenuItem1,
					this->�򿪴���ToolStripMenuItem, this->�رմ���ToolStripMenuItem
			});
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(68, 21);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::��������ToolStripMenuItem_DropDownItemClicked);
			this->��������ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// ��������ToolStripMenuItem1
			// 
			this->��������ToolStripMenuItem1->Name = L"��������ToolStripMenuItem1";
			this->��������ToolStripMenuItem1->Size = System::Drawing::Size(124, 22);
			this->��������ToolStripMenuItem1->Text = L"��������";
			this->��������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::��������ToolStripMenuItem1_Click);
			this->��������ToolStripMenuItem1->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// �򿪴���ToolStripMenuItem
			// 
			this->�򿪴���ToolStripMenuItem->Name = L"�򿪴���ToolStripMenuItem";
			this->�򿪴���ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->�򿪴���ToolStripMenuItem->Text = L"�򿪴���";
			this->�򿪴���ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�򿪴���ToolStripMenuItem_Click);
			this->�򿪴���ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// �رմ���ToolStripMenuItem
			// 
			this->�رմ���ToolStripMenuItem->Name = L"�رմ���ToolStripMenuItem";
			this->�رմ���ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->�رմ���ToolStripMenuItem->Text = L"�رմ���";
			this->�رմ���ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�رմ���ToolStripMenuItem_Click);
			this->�رմ���ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// ��ͼToolStripMenuItem
			// 
			this->��ͼToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->��ʾ��ͼToolStripMenuItem });
			this->��ͼToolStripMenuItem->Name = L"��ͼToolStripMenuItem";
			this->��ͼToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->��ͼToolStripMenuItem->Text = L"��ͼ";
			this->��ͼToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// ��ʾ��ͼToolStripMenuItem
			// 
			this->��ʾ��ͼToolStripMenuItem->Name = L"��ʾ��ͼToolStripMenuItem";
			this->��ʾ��ͼToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->��ʾ��ͼToolStripMenuItem->Text = L"��ʾ��ͼ";
			this->��ʾ��ͼToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::��ʾ��ͼToolStripMenuItem_Click);
			this->��ʾ��ͼToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->�¶�ToolStripMenuItem,
					this->ʪ��ToolStripMenuItem, this->�񵴶�ToolStripMenuItem, this->�к�����ToolStripMenuItem, this->����ֵ����ToolStripMenuItem
			});
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(68, 21);
			this->��������ToolStripMenuItem->Text = L"������";
			this->��������ToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::��������ToolStripMenuItem_DropDownItemClicked);
			this->��������ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// �¶�ToolStripMenuItem
			// 
			this->�¶�ToolStripMenuItem->Name = L"�¶�ToolStripMenuItem";
			this->�¶�ToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->�¶�ToolStripMenuItem->Text = L"�¶�";
			this->�¶�ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// ʪ��ToolStripMenuItem
			// 
			this->ʪ��ToolStripMenuItem->Name = L"ʪ��ToolStripMenuItem";
			this->ʪ��ToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->ʪ��ToolStripMenuItem->Text = L"ʪ��";
			this->ʪ��ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// �񵴶�ToolStripMenuItem
			// 
			this->�񵴶�ToolStripMenuItem->Name = L"�񵴶�ToolStripMenuItem";
			this->�񵴶�ToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->�񵴶�ToolStripMenuItem->Text = L"�񵴶�";
			this->�񵴶�ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// �к�����ToolStripMenuItem
			// 
			this->�к�����ToolStripMenuItem->Name = L"�к�����ToolStripMenuItem";
			this->�к�����ToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->�к�����ToolStripMenuItem->Text = L"�к�����";
			this->�к�����ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// ����ֵ����ToolStripMenuItem
			// 
			this->����ֵ����ToolStripMenuItem->Name = L"����ֵ����ToolStripMenuItem";
			this->����ֵ����ToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->����ֵ����ToolStripMenuItem->Text = L"����ֵ����";
			this->����ֵ����ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��������ToolStripMenuItem,
					this->ƽ��������ToolStripMenuItem, this->��ʽ����ToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(68, 21);
			this->toolStripMenuItem1->Text = L"ͼ������";
			this->toolStripMenuItem1->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::��������ToolStripMenuItem_Click);
			this->��������ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// ƽ��������ToolStripMenuItem
			// 
			this->ƽ��������ToolStripMenuItem->Name = L"ƽ��������ToolStripMenuItem";
			this->ƽ��������ToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->ƽ��������ToolStripMenuItem->Text = L"ƽ��������";
			this->ƽ��������ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// ��ʽ����ToolStripMenuItem
			// 
			this->��ʽ����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ͼToolStripMenuItem,
					this->����ͼToolStripMenuItem
			});
			this->��ʽ����ToolStripMenuItem->Name = L"��ʽ����ToolStripMenuItem";
			this->��ʽ����ToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->��ʽ����ToolStripMenuItem->Text = L"��ʽ����";
			this->��ʽ����ToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::��ʽ����ToolStripMenuItem_DropDownItemClicked);
			this->��ʽ����ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// ����ͼToolStripMenuItem
			// 
			this->����ͼToolStripMenuItem->Name = L"����ͼToolStripMenuItem";
			this->����ͼToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->����ͼToolStripMenuItem->Text = L"����ͼ";
			// 
			// ����ͼToolStripMenuItem
			// 
			this->����ͼToolStripMenuItem->Name = L"����ͼToolStripMenuItem";
			this->����ͼToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->����ͼToolStripMenuItem->Text = L"����ͼ";
			// 
			// �鿴ToolStripMenuItem
			// 
			this->�鿴ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->������ToolStripMenuItem,
					this->״̬��ToolStripMenuItem, this->����ToolStripMenuItem, this->�Զ�����ToolStripMenuItem
			});
			this->�鿴ToolStripMenuItem->Name = L"�鿴ToolStripMenuItem";
			this->�鿴ToolStripMenuItem->Size = System::Drawing::Size(68, 21);
			this->�鿴ToolStripMenuItem->Text = L"ϵͳ��ʽ";
			this->�鿴ToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::�鿴ToolStripMenuItem_DropDownItemClicked);
			this->�鿴ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�鿴ToolStripMenuItem_Click);
			this->�鿴ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// ״̬��ToolStripMenuItem
			// 
			this->״̬��ToolStripMenuItem->Name = L"״̬��ToolStripMenuItem";
			this->״̬��ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->״̬��ToolStripMenuItem->Text = L"״̬��";
			this->״̬��ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// �Զ�����ToolStripMenuItem
			// 
			this->�Զ�����ToolStripMenuItem->Name = L"�Զ�����ToolStripMenuItem";
			this->�Զ�����ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->�Զ�����ToolStripMenuItem->Text = L"�Զ�����";
			this->�Զ�����ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// ϵͳToolStripMenuItem1
			// 
			this->ϵͳToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��ToolStripMenuItem,
					this->�ر�ToolStripMenuItem
			});
			this->ϵͳToolStripMenuItem1->Name = L"ϵͳToolStripMenuItem1";
			this->ϵͳToolStripMenuItem1->Size = System::Drawing::Size(44, 21);
			this->ϵͳToolStripMenuItem1->Text = L"�ļ�";
			this->ϵͳToolStripMenuItem1->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::On_DoSystemMenu);
			this->ϵͳToolStripMenuItem1->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// ��ToolStripMenuItem
			// 
			this->��ToolStripMenuItem->Name = L"��ToolStripMenuItem";
			this->��ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->��ToolStripMenuItem->Text = L"���ļ�";
			this->��ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// �ر�ToolStripMenuItem
			// 
			this->�ر�ToolStripMenuItem->Name = L"�ر�ToolStripMenuItem";
			this->�ر�ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->�ر�ToolStripMenuItem->Text = L"�ر�";
			this->�ر�ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ϵͳ����ToolStripMenuItem,
					this->����ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// ϵͳ����ToolStripMenuItem
			// 
			this->ϵͳ����ToolStripMenuItem->Name = L"ϵͳ����ToolStripMenuItem";
			this->ϵͳ����ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->ϵͳ����ToolStripMenuItem->Text = L"ϵͳ����";
			this->ϵͳ����ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(15, 15);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(13) {
				this->�½�NToolStripButton,
					this->��OToolStripButton, this->����SToolStripButton, this->��ӡPToolStripButton, this->toolStripSeparator, this->����UToolStripButton,
					this->����CToolStripButton, this->ճ��PToolStripButton, this->toolStripSeparator1, this->toolStripButton1, this->toolStripButton2,
					this->toolStripButton3, this->toolStripButton4
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 25);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1302, 25);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// �½�NToolStripButton
			// 
			this->�½�NToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->�½�NToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�½�NToolStripButton.Image")));
			this->�½�NToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->�½�NToolStripButton->Name = L"�½�NToolStripButton";
			this->�½�NToolStripButton->Size = System::Drawing::Size(23, 22);
			this->�½�NToolStripButton->Text = L"�½�(&N)";
			// 
			// ��OToolStripButton
			// 
			this->��OToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->��OToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��OToolStripButton.Image")));
			this->��OToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->��OToolStripButton->Name = L"��OToolStripButton";
			this->��OToolStripButton->Size = System::Drawing::Size(23, 22);
			this->��OToolStripButton->Text = L"��(&O)";
			// 
			// ����SToolStripButton
			// 
			this->����SToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->����SToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����SToolStripButton.Image")));
			this->����SToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����SToolStripButton->Name = L"����SToolStripButton";
			this->����SToolStripButton->Size = System::Drawing::Size(23, 22);
			this->����SToolStripButton->Text = L"����(&S)";
			// 
			// ��ӡPToolStripButton
			// 
			this->��ӡPToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->��ӡPToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��ӡPToolStripButton.Image")));
			this->��ӡPToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->��ӡPToolStripButton->Name = L"��ӡPToolStripButton";
			this->��ӡPToolStripButton->Size = System::Drawing::Size(23, 22);
			this->��ӡPToolStripButton->Text = L"��ӡ(&P)";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 25);
			// 
			// ����UToolStripButton
			// 
			this->����UToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->����UToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����UToolStripButton.Image")));
			this->����UToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����UToolStripButton->Name = L"����UToolStripButton";
			this->����UToolStripButton->Size = System::Drawing::Size(23, 22);
			this->����UToolStripButton->Text = L"����(&U)";
			this->����UToolStripButton->Click += gcnew System::EventHandler(this, &Form1::����UToolStripButton_Click);
			// 
			// ����CToolStripButton
			// 
			this->����CToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->����CToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����CToolStripButton.Image")));
			this->����CToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����CToolStripButton->Name = L"����CToolStripButton";
			this->����CToolStripButton->Size = System::Drawing::Size(23, 22);
			this->����CToolStripButton->Text = L"����(&C)";
			// 
			// ճ��PToolStripButton
			// 
			this->ճ��PToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ճ��PToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ճ��PToolStripButton.Image")));
			this->ճ��PToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ճ��PToolStripButton->Name = L"ճ��PToolStripButton";
			this->ճ��PToolStripButton->Size = System::Drawing::Size(23, 22);
			this->ճ��PToolStripButton->Text = L"ճ��(&P)";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->toolStripButton1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.BackgroundImage")));
			this->toolStripButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::LimeGreen;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->ToolTipText = L"��������";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Form1::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->ToolTipText = L"��������";
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(23, 22);
			this->toolStripButton3->Text = L"toolStripButton3";
			this->toolStripButton3->ToolTipText = L"����ֵ";
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(23, 22);
			this->toolStripButton4->Text = L"toolStripButton4";
			this->toolStripButton4->ToolTipText = L"��ݳ�����";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &Form1::toolStripButton4_Click);
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth4Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::White;
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2, this->toolStripProgressBar1, this->toolStripStatusLabel3, this->toolStripStatusLabel4, this->toolStripStatusLabel5,
					this->toolStripStatusLabel6
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 633);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1302, 48);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(131, 43);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(131, 43);
			this->toolStripStatusLabel2->Text = L"toolStripStatusLabel2";
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripProgressBar1->Maximum = 60;
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->RightToLeftLayout = true;
			this->toolStripProgressBar1->Size = System::Drawing::Size(100, 42);
			this->toolStripProgressBar1->Step = 1;
			this->toolStripProgressBar1->Click += gcnew System::EventHandler(this, &Form1::toolStripProgressBar1_Click);
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(422, 43);
			this->toolStripStatusLabel3->Spring = true;
			// 
			// toolStripStatusLabel4
			// 
			this->toolStripStatusLabel4->AutoSize = false;
			this->toolStripStatusLabel4->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
			this->toolStripStatusLabel4->BorderStyle = System::Windows::Forms::Border3DStyle::SunkenInner;
			this->toolStripStatusLabel4->Name = L"toolStripStatusLabel4";
			this->toolStripStatusLabel4->Size = System::Drawing::Size(167, 43);
			// 
			// toolStripStatusLabel5
			// 
			this->toolStripStatusLabel5->AutoSize = false;
			this->toolStripStatusLabel5->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
			this->toolStripStatusLabel5->BorderStyle = System::Windows::Forms::Border3DStyle::SunkenInner;
			this->toolStripStatusLabel5->Name = L"toolStripStatusLabel5";
			this->toolStripStatusLabel5->Size = System::Drawing::Size(167, 43);
			// 
			// toolStripStatusLabel6
			// 
			this->toolStripStatusLabel6->AutoSize = false;
			this->toolStripStatusLabel6->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
			this->toolStripStatusLabel6->BorderStyle = System::Windows::Forms::Border3DStyle::SunkenInner;
			this->toolStripStatusLabel6->Name = L"toolStripStatusLabel6";
			this->toolStripStatusLabel6->Size = System::Drawing::Size(167, 43);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// ʵʱ����
			// 
			this->ʵʱ����->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ʵʱ����->Controls->Add(this->button4);
			this->ʵʱ����->Controls->Add(this->label4);
			this->ʵʱ����->Controls->Add(this->button3);
			this->ʵʱ����->Controls->Add(this->label3);
			this->ʵʱ����->Controls->Add(this->button2);
			this->ʵʱ����->Controls->Add(this->label2);
			this->ʵʱ����->Controls->Add(this->button1);
			this->ʵʱ����->Controls->Add(this->label1);
			this->ʵʱ����->Controls->Add(this->chart4);
			this->ʵʱ����->Controls->Add(this->chart3);
			this->ʵʱ����->Controls->Add(this->chart2);
			this->ʵʱ����->Controls->Add(this->chart1);
			this->ʵʱ����->Font = (gcnew System::Drawing::Font(L"����", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->ʵʱ����->Location = System::Drawing::Point(12, 67);
			this->ʵʱ����->Name = L"ʵʱ����";
			this->ʵʱ����->Size = System::Drawing::Size(822, 560);
			this->ʵʱ����->TabIndex = 3;
			this->ʵʱ����->TabStop = false;
			this->ʵʱ����->Text = L"ʵʱ����";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(216, 529);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(64, 24);
			this->button4->TabIndex = 5;
			this->button4->Text = L"����";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(126, 534);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 19);
			this->label4->TabIndex = 4;
			this->label4->Text = L"�񵴶�";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(612, 529);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(64, 24);
			this->button3->TabIndex = 5;
			this->button3->Text = L"����";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(508, 534);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 19);
			this->label3->TabIndex = 4;
			this->label3->Text = L"�к�����";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(612, 267);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 24);
			this->button2->TabIndex = 5;
			this->button2->Text = L"����";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(522, 268);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 19);
			this->label2->TabIndex = 4;
			this->label2->Text = L"ʪ��";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(216, 266);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 24);
			this->button1->TabIndex = 5;
			this->button1->Text = L"����";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(126, 267);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 19);
			this->label1->TabIndex = 4;
			this->label1->Text = L"�¶�";
			// 
			// chart4
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart4->Legends->Add(legend1);
			this->chart4->Location = System::Drawing::Point(19, 310);
			this->chart4->Name = L"chart4";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart4->Series->Add(series1);
			this->chart4->Size = System::Drawing::Size(358, 200);
			this->chart4->TabIndex = 3;
			this->chart4->Text = L"chart4";
			// 
			// chart3
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea2);
			legend2->Enabled = false;
			legend2->Name = L"Legend1";
			this->chart3->Legends->Add(legend2);
			this->chart3->Location = System::Drawing::Point(414, 310);
			this->chart3->Name = L"chart3";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart3->Series->Add(series2);
			this->chart3->Size = System::Drawing::Size(358, 200);
			this->chart3->TabIndex = 2;
			this->chart3->Text = L"chart3";
			// 
			// chart2
			// 
			this->chart2->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::DashDot;
			chartArea3->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea3);
			this->chart2->Cursor = System::Windows::Forms::Cursors::Cross;
			legend3->Alignment = System::Drawing::StringAlignment::Far;
			legend3->Enabled = false;
			legend3->Name = L"Legend1";
			this->chart2->Legends->Add(legend3);
			this->chart2->Location = System::Drawing::Point(414, 49);
			this->chart2->Name = L"chart2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart2->Series->Add(series3);
			this->chart2->Size = System::Drawing::Size(358, 200);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			// 
			// chart1
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea4);
			legend4->Enabled = false;
			legend4->Name = L"Legend1";
			this->chart1->Legends->Add(legend4);
			this->chart1->Location = System::Drawing::Point(19, 49);
			this->chart1->Name = L"chart1";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(358, 200);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(908, 67);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(344, 220);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(908, 504);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(358, 116);
			this->listBox1->TabIndex = 5;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1��", L"2��", L"3��" });
			this->comboBox1->Location = System::Drawing::Point(1105, 327);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 20);
			this->comboBox1->Sorted = true;
			this->comboBox1->TabIndex = 6;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(1102, 300);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(110, 16);
			this->label6->TabIndex = 7;
			this->label6->Text = L"ѡ���ݳ���";
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(1106, 359);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(160, 58);
			this->button5->TabIndex = 8;
			this->button5->Text = L"��ѯ��ʷ����";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"΢���ź�", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox1->Location = System::Drawing::Point(899, 293);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(189, 186);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"��������";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(6, 23);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 14);
			this->label8->TabIndex = 13;
			this->label8->Text = L"�񵴻���";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(6, 76);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 14);
			this->label9->TabIndex = 14;
			this->label9->Text = L"��������";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(6, 128);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(63, 14);
			this->label10->TabIndex = 15;
			this->label10->Text = L"�¶Ȼ���";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(9, 154);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(158, 29);
			this->textBox3->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(9, 95);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(158, 29);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(9, 42);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(158, 29);
			this->textBox1->TabIndex = 0;
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->ContextMenuStrip = this->contextMenuStrip1;
			this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
			this->notifyIcon1->Text = L"������价�����ϵͳ";
			this->notifyIcon1->Visible = true;
			this->notifyIcon1->DoubleClick += gcnew System::EventHandler(this, &Form1::notifyIcon1_DoubleClick);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�˳�ToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(101, 26);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::contextMenuStrip1_Opening);
			// 
			// �˳�ToolStripMenuItem
			// 
			this->�˳�ToolStripMenuItem->Name = L"�˳�ToolStripMenuItem";
			this->�˳�ToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->�˳�ToolStripMenuItem->Text = L"�˳�";
			this->�˳�ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�˳�ToolStripMenuItem_Click);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(904, 482);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 19);
			this->label5->TabIndex = 10;
			this->label5->Text = L"���ݽ�����";
			// 
			// toolTip1
			// 
			this->toolTip1->IsBalloon = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1104, 432);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 12);
			this->label7->TabIndex = 11;
			this->label7->Text = L"����ʱ������ms��";
			this->label7->Click += gcnew System::EventHandler(this, &Form1::label7_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(1106, 455);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(111, 21);
			this->numericUpDown1->TabIndex = 12;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(1302, 681);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->ʵʱ����);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"������价�����ϵͳ";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &Form1::Form1_SizeChanged);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseMove);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ʵʱ����->ResumeLayout(false);
			this->ʵʱ����->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	void UpdateColor1(Button ^button)
		{
			Color color1;

			color1 = Color::FromArgb(255, 0, 0);
			// color2 = Color::FromArgb(0, 255, 0);
			button->BackColor = color1;
			//Sleep(1000);
			//button->BackColor = color2;
		}
	void UpdateColor2(Button ^button)
	{
		Color color2;

		color2 = Color::FromArgb(0, 255, 0);
		// color2 = Color::FromArgb(0, 255, 0);
		//button->BackColor = color1;
		//Sleep(1000);
		button->BackColor = color2;
	}
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		//this->timer2->Enabled = true;
		this->chart2->Enabled = false;
		this->chart1->Enabled = false;
		this->chart3->Enabled = false;
		this->chart4->Enabled = false;
		this->button1->Enabled = false;
		this->button2->Enabled = false;
		this->button3->Enabled = false;
		this->button4->Enabled = false;
		numericUpDown1->Text = "1000";
	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		DateTime dateTime = DateTime::Now;             //��ȡϵͳ��ǰʱ��
		toolStripStatusLabel1->Text = dateTime.ToLongDateString();       // ��ʾ����
		toolStripStatusLabel2->Text = dateTime.ToLongTimeString();     // ��ʾʱ��
		toolStripProgressBar1->Value = dateTime.Second;           //������
		if (Control::IsKeyLocked(Keys::CapsLock))

			this->toolStripStatusLabel4->Text = "��д";

		else

			this->toolStripStatusLabel4->Text = "";

		if (Control::IsKeyLocked(Keys::NumLock))

			this->toolStripStatusLabel5->Text = "����";

		else

			this->toolStripStatusLabel5->Text = "";

		if (Control::IsKeyLocked(Keys::Scroll))

			this->toolStripStatusLabel6->Text = "����";

		else

			this->toolStripStatusLabel6->Text = "";
		//this->timer1->Interval = Int32::Parse(this->numericUpDown1->Text);
		data_receivce();

	}


			 TempForm^tf = gcnew TempForm();
			 HumidForm^hf = gcnew HumidForm();
			 ShakeForm^sf = gcnew ShakeForm();
			 FForm^ff = gcnew FForm();
			 LocationForm^lf = gcnew LocationForm();
			 
	public: void data_receivce()//���մ�������
	{
		String^ receiveText = nullptr;
		char buffer[200] = {};
		if (dlg->com->IsOpen)
		{
			int bufroom = 0;
			bufroom = dlg->com->BytesToRead;
			if (bufroom != 0)
			{
				for (int i = 0; i < bufroom; i++)
				{
					buffer[i] = dlg->com->ReadChar();
				}
				String^buff = gcnew String(buffer);
				if (buff->Length > 32)
				{
					listBox1->Items->Add(buff);
					
					//split = gcnew array<String^>{L"0", L"0", L"0", L"0"};
					split = buff->Split(59);
					DateTime dateTime = DateTime::Now;             //��ȡϵͳ��ǰʱ��
					//********�������ݿⲢ�洢*******************//////
					strConn = String::Format("Provider=Microsoft.Jet.OLEDB.4.0; Data Source=AGMS.mdb");
					OleDbConnection^ con1 = gcnew OleDbConnection(strConn);
					//********ѡ�����ͼ���洢����********// 
					int nIndex = this->comboBox1->SelectedIndex;
					if (nIndex < 0) return;
					String^ strTableName = this->comboBox1->Items[nIndex]->ToString();
					String^ sql1;
					String^ sql2;
					String^ sql3;
					String^ sql4;

					//LocationForm::textBox1->Text = split[12];
					//LocationForm::textBox1->Text = split[13];

					valuechange::����1 = split[4];
					valuechange::γ��1 = split[5];
					valuechange::����2 = split[10];
					valuechange::γ��2 = split[11];
					valuechange::����3 = split[16];
					valuechange::γ��3 = split[17];

					con1->Open();    // ������
					sql1 = "INSERT INTO 1�ų����ݱ�([�¶�],[ʪ��],[�𵴶�],[�к�����],[����ʱ��],[��Ӧ����]) VALUES( " + split[0] + " , " + split[1] + " , " + split[2] + ", " + split[3] + ",Now() , '1��' )";
					OleDbCommand^ comm1 = gcnew OleDbCommand(sql1, con1);
					comm1->ExecuteNonQuery();
					sql2 = "INSERT INTO 2�ų����ݱ�([�¶�],[ʪ��],[�𵴶�],[�к�����],[����ʱ��],[��Ӧ����]) VALUES( " + split[6] + " , " + split[7] + " , " + split[8] + ", " + split[9] + ",Now() , '2��' )";
					OleDbCommand^ comm2 = gcnew OleDbCommand(sql2, con1);
					comm2->ExecuteNonQuery();
					//con1->Close();
					//con1->Open();    // ������
					sql3 = "INSERT INTO 3�ų����ݱ�([�¶�],[ʪ��],[�𵴶�],[�к�����],[����ʱ��],[��Ӧ����]) VALUES( " + split[12] + " , " + split[13] + " , " + split[14] + ", " + split[15] + ",Now() , '3��' )";
					OleDbCommand^ comm3 = gcnew OleDbCommand(sql3, con1);
					comm3->ExecuteNonQuery();
					con1->Close();
					if (strTableName == "1��")
					{
						if (split[0] != nullptr&&split[1] != nullptr&&split[2] != nullptr&&split[3] != nullptr)
						{

							chart1->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[0]);
							chart1->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
							if (Int32::Parse(split[0])<0 || Int32::Parse(split[0])>30)  //�¶ȳ��ޱ���
							{
							UpdateColor1(button1);//R
							button1->Text = "����";
							this->chart1->Series["Series1"]->Points[this->chart1->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
							if (split[0] != nullptr)
							{
							con1->Open();    // ������
							sql4 = "INSERT INTO �쳣���ݱ�_�¶�([�¶�],[�¶�����ʱ��],[�¶ȶ�Ӧ����]) VALUES( " + split[0] + " ,Now() , '" + strTableName + "' )";
							OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); 
							comm2->ExecuteNonQuery();
							con1->Close();
							}
							//Sleep(100);
							}
							else
							{
								UpdateColor2(button1);//G
								button1->Text = "����";
							}

							chart2->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[1]);
							chart2->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
							
							if (Int32::Parse(split[1])<0 || Int32::Parse(split[1])>50)  //ʪ�ȳ��ޱ���
							{
							UpdateColor1(button2);
							button2->Text = "����";
							this->chart2->Series["Series1"]->Points[this->chart2->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
							if (split[1] != nullptr)
							{
							con1->Open();    // ������
							sql4 = "INSERT INTO �쳣���ݱ�_ʪ��([ʪ��],[ʪ������ʱ��],[ʪ�ȶ�Ӧ����]) VALUES( " + split[1] + " ,Now() , '" + strTableName + "'  )";
							OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
							con1->Close();
							}
							//Sleep(100);
							}
							else
							{
							UpdateColor2(button2);
							button2->Text = "����";
							}

							chart3->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[3]);
							chart3->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
							
							if (float::Parse(split[3])<0 || float::Parse(split[3])>80)  //�ж����峬�ޱ���
							{
							UpdateColor1(button3);
							button3->Text = "����";
							this->chart3->Series["Series1"]->Points[this->chart3->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
							if (split[3] != nullptr)
							{
							con1->Open();    // ������
							sql4 = "INSERT INTO �쳣���ݱ�_�ж�����([�ж�����],[�ж���������ʱ��],[�ж������Ӧ����]) VALUES(" + split[3] + " ,Now() , '" + strTableName + "'  )";
							OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
							con1->Close();
							}
							//Sleep(100);
							}
							else
							{
							UpdateColor2(button3);
							button3->Text = "����";
							}

							chart4->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[2]);
							chart4->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
							
							if (Int32::Parse(split[2])<0 || Int32::Parse(split[2])>20)  //�񵴶ȳ��ޱ���
							{
							UpdateColor1(button4);
							button4->Text = "����";
							this->chart4->Series["Series1"]->Points[this->chart3->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
							if (split[2] != nullptr)
							{
							con1->Open();    // ������
							sql4 = "INSERT INTO �쳣���ݱ�_�񵴶�([�񵴶�],[�񵴶�����ʱ��],[�񵴶ȶ�Ӧ����]) VALUES( " + split[2] + " ,Now() , '" + strTableName + "' )";
							OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
							con1->Close();
							}
							Sleep(100);

							}
							else
							{
							UpdateColor2(button4);
							button4->Text = "����";
							}

							//����
							if ((float::Parse(split[2]) > 10 && float::Parse(split[2]) < 30)) this->textBox1->Text = "�𵴶Ƚϴ�";
							else if (float::Parse(split[2]) < 10) this->textBox1->Text = "�𵴶Ƚ�С";
							else if (float::Parse(split[2]) > 30) this->textBox1->Text = "�𵴶Ⱥܴ�";

							if ((float::Parse(split[3]) > 10 && float::Parse(split[3]) < 40)) this->textBox2->Text = "���ڿ�������һ��";
							else if (float::Parse(split[3]) < 10) this->textBox2->Text = "���ڿ���������";
							else if (float::Parse(split[3]) > 40) this->textBox2->Text = "���ڿ���������";

							if ((float::Parse(split[0]) > 26 && float::Parse(split[0]) < 28)) this->textBox3->Text = "�������¶�����";
							else if (float::Parse(split[0]) < 26) this->textBox3->Text = "�����¶�ƫ��";
							else if (float::Parse(split[0]) > 28) this->textBox3->Text = "�����¶�ƫ��";

							/*if (Int32::Parse(split[3])<45)  this->textBox4->Text = "�����ڸ�����ˮ";
							else if (Int32::Parse(split[3]) >= 45 && Int32::Parse(split[3]) <= 75)  this->textBox4->Text = "�����ڻ�������";
							else if (Int32::Parse(split[3])>75) this->textBox4->Text = "�����ڳ�ʪ";
							if ((Int32::Parse(split[0])<0 || Int32::Parse(split[0])>100) && (Int32::Parse(split[1])<0 || Int32::Parse(split[1])>150) && (float::Parse(split[2])<26 || float::Parse(split[2])>28) && (Int32::Parse(split[3])<45 || Int32::Parse(split[3])>75))
							{
							//play();
							this->textBox2->Text = "�����ڻ�����";
							}*/
						}
					}
					else if (strTableName == "2��")
					{

						if (split[6] != nullptr&&split[7] != nullptr&&split[8] != nullptr&&split[9] != nullptr)
						{

							chart1->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[6]);
							chart1->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
							if (Int32::Parse(split[6])<26 || Int32::Parse(split[6])>28)  //�¶ȳ��ޱ���
							{
							UpdateColor1(button1);
							button1->Text = "����";
							this->chart1->Series["Series1"]->Points[this->chart1->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
							if (split[6] != nullptr)
							{
							con1->Open();    // ������
							sql4 = "INSERT INTO �쳣���ݱ�_�¶�([�¶�],[�¶�����ʱ��],[�¶ȶ�Ӧ����]) VALUES( " + split[6] + " ,Now() , '" + strTableName + "' )";
							OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
							con1->Close();
							}
							//Sleep(100);
							}
							else
							{
								UpdateColor2(button1);
								button1->Text = "����";
							}
							chart2->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[7]);
							chart2->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
							if (Int32::Parse(split[7])<0 || Int32::Parse(split[7])>50)  //ʪ�ȳ��ޱ���
							{
							UpdateColor1(button2);
							button2->Text = "����";
							this->chart2->Series["Series1"]->Points[this->chart2->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
							if (split[7] != nullptr)
							{
							con1->Open();    // ������
							sql4 = "INSERT INTO �쳣���ݱ�_ʪ��([ʪ��],[ʪ������ʱ��],[ʪ�ȶ�Ӧ����]) VALUES( " + split[7] + " ,Now() , '" + strTableName + "'  )";
							OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
							con1->Close();
							}
							//Sleep(100);
							}
							else
							{
							UpdateColor2(button2);
							button2->Text = "����";
							}

							chart3->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[9]);
							chart3->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
							
							if (float::Parse(split[9])<0 || float::Parse(split[9])>80)  //�ж����峬�ޱ���
							{
							UpdateColor1(button3);
							button3->Text = "����";
							this->chart3->Series["Series1"]->Points[this->chart3->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
							if (split[9] != nullptr)
							{
							con1->Open();    // ������
							sql4 = "INSERT INTO �쳣���ݱ�_�ж�����([�ж�����],[�ж���������ʱ��],[�ж������Ӧ����]) VALUES(" + split[9] + " ,Now() , '" + strTableName + "'  )";
							OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
							con1->Close();
							}
							//Sleep(100);
							}
							else
							{
							UpdateColor2(button3);
							button3->Text = "����";
							}
							chart4->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[8]);
							chart4->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
							if (Int32::Parse(split[8])<45 || Int32::Parse(split[8])>75)  //�񵴶ȳ��ޱ���
							{
							UpdateColor1(button4);
							button4->Text = "����";
							this->chart4->Series["Series1"]->Points[this->chart3->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
							if (split[8] != nullptr)
							{
							con1->Open();    // ������
							sql4 = "INSERT INTO �쳣���ݱ�_�񵴶�([�񵴶�],[�񵴶�����ʱ��],[�񵴶ȶ�Ӧ����]) VALUES( " + split[8] + " ,Now() , '" + strTableName + "' )";
							OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
							con1->Close();
							}
							//Sleep(100);

							}
							else
							{
							UpdateColor2(button4);
							button4->Text = "����";
							}

							//����
							if ((float::Parse(split[8]) > 10 && float::Parse(split[8]) < 30)) this->textBox1->Text = "�𵴶Ƚϴ�";
							else if (float::Parse(split[8]) < 10) this->textBox1->Text = "�𵴶Ƚ�С";
							else if (float::Parse(split[8]) > 30) this->textBox1->Text = "�𵴶Ⱥܴ�";

							if ((float::Parse(split[9]) > 10 && float::Parse(split[9]) < 40)) this->textBox2->Text = "���ڿ�������һ��";
							else if (float::Parse(split[9]) < 10) this->textBox2->Text = "���ڿ���������";
							else if (float::Parse(split[9]) > 40) this->textBox2->Text = "���ڿ���������";

							if ((float::Parse(split[6]) > 26 && float::Parse(split[6]) < 28)) this->textBox3->Text = "�������¶�����";
							else if (float::Parse(split[6]) < 26) this->textBox3->Text = "�����¶�ƫ��";
							else if (float::Parse(split[6]) > 28) this->textBox3->Text = "�����¶�ƫ��";

							/*if (Int32::Parse(split[7])<45)  this->textBox4->Text = "�����ڸ�����ˮ";
							else if (Int32::Parse(split[7]) >= 45 && Int32::Parse(split[7]) <= 75)  this->textBox4->Text = "�����ڻ�������";
							else if (Int32::Parse(split[7])>75) this->textBox4->Text = "�����ڳ�ʪ";
							if ((Int32::Parse(split[4])<0 || Int32::Parse(split[4])>100) && (Int32::Parse(split[5])<0 || Int32::Parse(split[5])>150) && (float::Parse(split[6])<26 || float::Parse(split[6])>28) && (Int32::Parse(split[7])<45 || Int32::Parse(split[7])>75))
							{
							//play();
							this->textBox2->Text = "�����ڻ�����";
							}*/
						}
					}
					else if (strTableName == "3��")
					{
						if (split[12] != nullptr&&split[13] != nullptr&&split[14] != nullptr&&split[15] != nullptr)
						{

							chart1->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[12]);
							chart1->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
						   if (Int32::Parse(split[12])<26|| Int32::Parse(split[12])>28)  //�¶ȳ��ޱ���
							{
							UpdateColor1(button1);
							button1->Text = "����";
							this->chart1->Series["Series1"]->Points[this->chart1->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
							if (split[12] != nullptr)
							{
							con1->Open();    // ������
							sql4 = "INSERT INTO �쳣���ݱ�_�¶�([�¶�],[�¶�����ʱ��],[�¶ȶ�Ӧ����]) VALUES( " + split[12] + " ,Now() , '" + strTableName + "' )";
							OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
							con1->Close();
							}
							//Sleep(100);
							}
						   else
						   {
							   UpdateColor2(button1);
							   button1->Text = "����";
						   }
							chart2->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[13]);
							chart2->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
							if (Int32::Parse(split[13])<0 || Int32::Parse(split[13])>50)  //ʪ�ȳ��ޱ���
							{
							UpdateColor1(button2);
							button2->Text = "����";
							this->chart2->Series["Series1"]->Points[this->chart2->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
							if (split[13] != nullptr)
							{
							con1->Open();    // ������
							sql4 = "INSERT INTO �쳣���ݱ�_PM([ʪ��],[ʪ������ʱ��],[ʪ�ȶ�Ӧ����]) VALUES( " + split[13] + " ,Now() , '" + strTableName + "'  )";
							OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
							con1->Close();
							}
							//Sleep(100);
							}
							else
							{
							UpdateColor2(button2);
							button2->Text = "����";
							}
							chart3->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[15]);
							chart3->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
							if (float::Parse(split[15])<26 || float::Parse(split[15])>28)  //�ж����峬�ޱ���
							{
							UpdateColor1(button3);
							button3->Text = "����";
							this->chart3->Series["Series1"]->Points[this->chart3->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
							if (split[15] != nullptr)
							{
							con1->Open();    // ������
							sql4 = "INSERT INTO �쳣���ݱ�_�ж�����([�ж�����],[�ж���������ʱ��],[�ж������Ӧ����]) VALUES(" + split[15] + " ,Now() , '" + strTableName + "'  )";
							OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
							con1->Close();
							}
							//Sleep(100);
							}
							else
							{
							UpdateColor2(button3);
							button3->Text = "����";
							}
							chart4->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[14]);
							chart4->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
							if (Int32::Parse(split[14])<45 || Int32::Parse(split[14])>75)  //�񵴶ȳ��ޱ���
							{
								UpdateColor1(button4); 
								button4->Text = "����";
							this->chart3->Series["Series1"]->Points[this->chart3->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
							if (split[14] != nullptr)
							{
							con1->Open();    // ������
							sql4 = "INSERT INTO �쳣���ݱ�_�񵴶�([�񵴶�],[�񵴶�����ʱ��],[�񵴶ȶ�Ӧ����]) VALUES( " + split[14] + " ,Now() , '" + strTableName + "' )";
							OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
							con1->Close();
							}
							//Sleep(100);
							}
							else
							{
							UpdateColor2(button4);
							button4->Text = "����";
							}

							//����
							if ((float::Parse(split[14]) > 10 && float::Parse(split[14]) < 30)) this->textBox1->Text = "�𵴶Ƚϴ�";
							else if (float::Parse(split[14]) < 10) this->textBox1->Text = "�𵴶Ƚ�С";
							else if (float::Parse(split[14]) > 30) this->textBox1->Text = "�𵴶Ⱥܴ�";

							if ((float::Parse(split[15]) > 10 && float::Parse(split[15]) < 40)) this->textBox2->Text = "���ڿ�������һ��";
							else if (float::Parse(split[15]) < 10) this->textBox2->Text = "���ڿ���������";
							else if (float::Parse(split[15]) > 40) this->textBox2->Text = "���ڿ���������";

							if ((float::Parse(split[12]) > 26 && float::Parse(split[12]) < 28)) this->textBox3->Text = "�������¶�����";
							else if (float::Parse(split[12]) < 26) this->textBox3->Text = "�����¶�ƫ��";
							else if (float::Parse(split[12]) > 28) this->textBox3->Text = "�����¶�ƫ��";

							/*if (Int32::Parse(split[11])<45)  this->textBox4->Text = "�����ڸ�����ˮ";
							else if (Int32::Parse(split[11]) >= 45 && Int32::Parse(split[11]) <= 75)  this->textBox4->Text = "�����ڻ�������";
							else if (Int32::Parse(split[11])>75) this->textBox4->Text = "�����ڳ�ʪ";
							if ((Int32::Parse(split[8])<0 || Int32::Parse(split[8])>100) && (Int32::Parse(split[9])<0 || Int32::Parse(split[9])>150) && (float::Parse(split[10])<26 || float::Parse(split[10])>28) && (Int32::Parse(split[11])<45 || Int32::Parse(split[11])>75))
							{
							//play();
							this->textBox2->Text = "�����ڻ�����";
							}*/
						}
					}

					/*if (LocationForm::comboBox1->Items->Count > 0){
						int index = LocationForm::comboBox1->SelectedIndex;
						switch (index)
						{
						case 0:
						{
							LocationForm::textBox1->Text = split[4]; 
							LocationForm::textBox2->Text = split[5]; 
							break;
						}
						case 1:
						{
							LocationForm::textBox1->Text = split[10]; 
							LocationForm::textBox2->Text = split[11];
							break;
						}
						case 2:
						{
							LocationForm::textBox1->Text = split[16];
							LocationForm::textBox2->Text = split[17]; 
							break;
						}
						}
					}*/

					if (TempForm::comboBox1->Items->Count > 0){
						int index1 = TempForm::comboBox1->SelectedIndex;
						switch (index1)
						{
						case 0:TempForm::textBox1->Text = split[0]; break;
						case 1:TempForm::textBox1->Text = split[6]; break;
						case 2:TempForm::textBox1->Text = split[12]; break;
						}
					}

					if (HumidForm::comboBox1->Items->Count > 0)
					{
						int index2 = HumidForm::comboBox1->SelectedIndex;
						switch (index2)
						{
						case 0:HumidForm::textBox1->Text = split[1]; break;
						case 1:HumidForm::textBox1->Text = split[7]; break;
						case 2:HumidForm::textBox1->Text = split[13]; break;
						}
					}

					if (ShakeForm::comboBox1->Items->Count > 0){

						int index3 = ShakeForm::comboBox1->SelectedIndex;
						switch (index3)
						{
						case 0:ShakeForm::textBox1->Text = split[2]; break;
						case 1:ShakeForm::textBox1->Text = split[8]; break;
						case 2:ShakeForm::textBox1->Text = split[14]; break;
						}
					}

					if (FForm::comboBox1->Items->Count > 0){
						int index4 = FForm::comboBox1->SelectedIndex;
						switch (index4)
						{
						case 0:FForm::textBox1->Text = split[3]; break;
						case 1:FForm::textBox1->Text = split[9]; break;
						case 2:FForm::textBox1->Text = split[15]; break;
						}
					if (LocationForm::comboBox1->Items->Count > 0)
						{
							int index = LocationForm::comboBox1->SelectedIndex;
							double m, n;
							switch (index)
							{
							case 0:
							{
									  m = Double::Parse(valuechange::����1);
									  n = Double::Parse(valuechange::γ��1);
									  LocationForm::textBox1->Text = m.ToString();
									  LocationForm::textBox2->Text = n.ToString();
									  array<System::Object^>^a = gcnew array<System::Object^>{m, n};
									  LocationForm::webBrowser1->Document->InvokeScript("setLocation", a);
								break;	
							}
							case 1:
							{
									  m = Double::Parse(valuechange::����2);
									  n = Double::Parse(valuechange::γ��2);
									  LocationForm::textBox1->Text = m.ToString();
									  LocationForm::textBox2->Text = n.ToString();
									  array<System::Object^>^a = gcnew array<System::Object^>{m, n};
									  LocationForm::webBrowser1->Document->InvokeScript("setLocation", a);
									  break;
							}
							case 2:
							{
									  m = Double::Parse(valuechange::����3);
									  n = Double::Parse(valuechange::γ��3);
									  LocationForm::textBox1->Text = m.ToString();
									  LocationForm::textBox2->Text = n.ToString();
									  array<System::Object^>^a = gcnew array<System::Object^>{m, n};
									  LocationForm::webBrowser1->Document->InvokeScript("setLocation", a);
									  break;
							}
							}

						}
					}
				}
			}
		}
	}

	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void notifyIcon1_DoubleClick(System::Object^  sender, System::EventArgs^  e) {

		this->Show();

		//Ϊ���廹ԭ��ʵ�֡�

		this->WindowState = System::Windows::Forms::FormWindowState::Normal;
	}
	private: System::Void Form1_SizeChanged(System::Object^  sender, System::EventArgs^  e) {
		//������С�����ж�����

		if (this->WindowState == System::Windows::Forms::FormWindowState::Minimized)

		{

			this->Hide();

			this->notifyIcon1->Visible = true;//��ʾ����ͼ��

			//Ϊʵ��������ʾ

			this->notifyIcon1->ShowBalloonTip(30, "������价�����ϵͳ", "��ͨ��ݽ߳�Ϊ������", ToolTipIcon::Info);

		}
	}
	private: System::Void contextMenuStrip1_Opening(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	}
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {

		static int i = 1;

		i = (i<8 ? i + 1 : 1);         // ͼ�������,����8��ͼ��

		this->notifyIcon1->Icon = gcnew System::Drawing::Icon(L"Rotate" + i + L".ico", 64, 64);
	}

	public:SerialForm^dlg = gcnew SerialForm();
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		int index = comboBox1->SelectedIndex;
		switch (index)
		{//��ʾ��������Ϣ
		case 1:break;
		case 2:break;
		case 3:break;
		}
	}

	private: System::Void On_DoSystemMenu(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		ToolStripMenuItem^ item;

		if (e == nullptr)

			item = safe_cast<ToolStripMenuItem^>(sender);

		else

			item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);

		if (item == ��ToolStripMenuItem)

		{

			OpenFileDialog^ pOFD = gcnew OpenFileDialog();

			pOFD->Filter = "�ı��ļ�(*.txt)|*.txt|�����ļ�(*.*)|*.*";

			pOFD->DefaultExt = "txt";

			if (pOFD->ShowDialog() == Windows::Forms::DialogResult::OK)

			{

				System::IO::StreamReader ^pReader =

					gcnew System::IO::StreamReader(pOFD->FileName,

					System::Text::Encoding::Default);


				pReader->Close();

				// ��״̬������ʾ��Ϣ

				//statusStrip1->Items[3]->Text= "����";

				//statusStrip1->Items[3]->Text =pOFD->FileName;

			}

		}
		else if (item == �ر�ToolStripMenuItem)
		{

			Application::Exit();
		}

	}

	private: System::Void ��������ToolStripMenuItem_DropDownItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {


		ToolStripMenuItem^ item;

		if (e == nullptr)

			item = safe_cast<ToolStripMenuItem^>(sender);

		else

			item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);
		if (item == ��������ToolStripMenuItem1)
		{
			GetComList_Reg(dlg->comboBox4);
			dlg->ShowDialog();
		}
		if (item == �򿪴���ToolStripMenuItem)
		{
			dlg->com->Open();//�򿪴��ڣ���������chart����
		}
		if (item == �رմ���ToolStripMenuItem)
		{
			dlg->com->Close();//�رմ��ڣ���������chart����
		}
	}
	private: System::Void �鿴ToolStripMenuItem_DropDownItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		ToolStripMenuItem^ item;
		if (e == nullptr)
			item = safe_cast<ToolStripMenuItem^>(sender);
		else
			item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);
		if (item == ������ToolStripMenuItem)      //�����������˵���
		{
			������ToolStripMenuItem->Checked = !������ToolStripMenuItem->Checked;
			//��ʾ/���ع�����
			toolStrip1->Visible = ������ToolStripMenuItem->Checked;
		}
		else if (item == ״̬��ToolStripMenuItem)    // ��״̬�����˵���
		{
			״̬��ToolStripMenuItem->Checked = !״̬��ToolStripMenuItem->Checked;
			// ��ʾ/����״̬��
			statusStrip1->Visible = ״̬��ToolStripMenuItem->Checked;
		}
		else if (item == ����ToolStripMenuItem)    // �����塱�˵���
		{
			FontDialog ^fDlg = gcnew FontDialog();
			fDlg->ShowColor = true;
			fDlg->ShowEffects = true;
			if (fDlg->ShowDialog() == Windows::Forms::DialogResult::OK)
			{
				textBox1->Font = fDlg->Font;
				textBox2->Font = fDlg->Font;
				textBox3->Font = fDlg->Font;
				listBox1->Font = fDlg->Font;
				textBox1->ForeColor = fDlg->Color;
				textBox2->ForeColor = fDlg->Color;
				textBox3->ForeColor = fDlg->Color;
				listBox1->ForeColor = fDlg->Color;
			}
		}
		else if (item == �Զ�����ToolStripMenuItem)
		{
			�Զ�����ToolStripMenuItem->Checked = !�Զ�����ToolStripMenuItem->Checked;
		}
	}
	private: String^ strConn;

	private: System::Void ϵͳToolStripMenuItem_DropDownItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {

		ToolStripMenuItem^ item;

		if (e == nullptr)

			item = safe_cast<ToolStripMenuItem^>(sender);

		else

			item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);

		if (item == ��ϵͳToolStripMenuItem)
		{
			this->button1->Enabled = true;
			this->button2->Enabled = true;
			this->button3->Enabled = true;
			this->button4->Enabled = true;
		}
		else if (item == �ر�ϵͳToolStripMenuItem)
		{
			this->button1->Enabled = false;
			this->button2->Enabled = false;
			this->button3->Enabled = false;
			this->button4->Enabled = false;

		}
	}
	private: System::Void ��������ToolStripMenuItem_DropDownItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {

		ToolStripMenuItem^ item;

		if (e == nullptr)

			item = safe_cast<ToolStripMenuItem^>(sender);

		else

			item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);
		if (item == �¶�ToolStripMenuItem)
		{
			TempForm^dlg = gcnew TempForm();
			dlg->ShowDialog();
		}
		else if (item == ʪ��ToolStripMenuItem)
		{
			HumidForm^dlg = gcnew HumidForm();
			dlg->ShowDialog();
		}
		else if (item == �񵴶�ToolStripMenuItem)
		{
			ShakeForm^dlg = gcnew ShakeForm();
			dlg->ShowDialog();
		}
		else if (item == �к�����ToolStripMenuItem)
		{
			FForm^dlg = gcnew FForm();
			dlg->ShowDialog();
		}
		else if (item == ����ֵ����ToolStripMenuItem)
		{
			SetForm^dlg = gcnew SetForm();
			dlg->ShowDialog();
		}
	}
	private: System::Void �˳�ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void �鿴ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void ��ʾ��ͼToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		LocationForm^dlg = gcnew LocationForm();
		dlg->ShowDialog();
	}
	private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void toolStripButton4_Click(System::Object^  sender, System::EventArgs^  e) {
		LocationForm^dlg = gcnew LocationForm();
		dlg->ShowDialog();
	}
	private: System::Void ����UToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void toolStripProgressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Form1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		String ^str = "X=" + e->X.ToString() + ",Y=" + e->Y.ToString();
		this->toolStripStatusLabel3->Text = str;
	}
	private: System::Void menuStrip1_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		this->statusStrip1->Items[3]->Text = "����";
	}
	private: System::Void menuStrip1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		this->statusStrip1->Items[3]->Text = "����";
	}
	private: System::Void On_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		String^ str = "����";

		ToolStripMenuItem^ item = safe_cast<ToolStripMenuItem^>(sender);

		if (item == ϵͳToolStripMenuItem)  str = "��ǰΪϵͳ�˵���";

		if (item == ��ToolStripMenuItem) str = "��ǰΪ���ļ��˵���";

		if (item == �ر�ToolStripMenuItem)  str = "�˳�Ӧ�ó���";

		if (item == ��ϵͳToolStripMenuItem)  str = "��ǰΪ��ʼ�˵���";

		if (item == ��������ToolStripMenuItem)    str = "���ô��ڲ���";

		if (item == ��ͼToolStripMenuItem)   str = "��ǰΪ��ͼ���ò˵���";

		if (item == ��������ToolStripMenuItem)   str = "��ǰΪ��ض���˵���";

		if (item == �鿴ToolStripMenuItem) str = "��ǰΪ��ʽ�˵���";

		if (item == toolStripMenuItem1)  str = "��ǰΪͼ�����ò˵���";

		if (item == ����ToolStripMenuItem)   str = "��ǰΪ�����˵���";

		if (item == ϵͳ����ToolStripMenuItem)  str = "��ǰΪϵͳ���ܲ˵���";

		if (item == ����ToolStripMenuItem)     str = "��ǰΪ���ڲ˵���";

		if (item == ��������ToolStripMenuItem)  str = "�������������";

		if (item == ƽ��������ToolStripMenuItem) str = "����ƽ���ȵ�����";
		if (item == ������ToolStripMenuItem)  str = "��ǰΪ�������˵���";

		if (item == ״̬��ToolStripMenuItem)   str = "��ǰΪ״̬���˵���";

		if (item == ����ToolStripMenuItem)  str = "��ǰΪ����˵���";

		if (item == �Զ�����ToolStripMenuItem)     str = "��ǰΪ�Զ����в˵���";

		if (item == ����ֵ����ToolStripMenuItem)  str = "��������ֵ������";

		if (item == �к�����ToolStripMenuItem) str = "������Ϊ�к�����";
		if (item == �񵴶�ToolStripMenuItem)  str = "������Ϊ�񵴶�";

		if (item == �¶�ToolStripMenuItem) str = "������Ϊ�¶�";
		if (item == ʪ��ToolStripMenuItem)  str = "������Ϊʪ��";

		if (item == ��ʾ��ͼToolStripMenuItem)   str = "������ʾ��ͼ����";

		if (item == �򿪴���ToolStripMenuItem)  str = "�򿪴��ڲ���";

		if (item == �رմ���ToolStripMenuItem)     str = "�رմ��ڲ���";

		if (item == ��ϵͳToolStripMenuItem)  str = "��ϵͳ����";

		if (item == �ر�ϵͳToolStripMenuItem) str = "�ر�ϵͳ����";

		if (item == ������ToolStripMenuItem){

			if (������ToolStripMenuItem->Checked)str = "���ع�����";

			else str = "��ʾ������";
		}

		if (item == ״̬��ToolStripMenuItem){

			if (״̬��ToolStripMenuItem->Checked) str = "����״̬��";

			else str = "��ʾ״̬��";
		}

		if (item == ����ToolStripMenuItem)	 str = "������ʾ���������ɫ";

		if (item == �Զ�����ToolStripMenuItem){

			if (�Զ�����ToolStripMenuItem->Checked) str = "ȡ���Զ�����";

			else str = "�ı��Զ�����";
		}

		this->statusStrip1->Items[3]->Text = str; // ��״̬������ʾ��Ϣ
	}
	private: System::Void ����ToolStripMenuItem_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void ��ʽ����ToolStripMenuItem_DropDownItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		ToolStripMenuItem^ item;

		if (e == nullptr)

			item = safe_cast<ToolStripMenuItem^>(sender);

		else

			item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);
		if (item == ����ͼToolStripMenuItem)
		{
			chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			chart2->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			chart3->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			chart4->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
		}
		else if (item == ����ͼToolStripMenuItem)
		{
			chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			chart2->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			chart3->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			chart4->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
		}
	}
	private:Color changeColor(int n)
	{
		Color co;
		switch (n)
		{
		case 0:co = Color::Red;
			break;
		case 1:co = Color::DarkRed;
			break;
		case 2:co = Color::Orange;
			break;
		case 3:co = Color::Yellow;
			break;
		case 4:co = Color::LightYellow;
			break;
		case 5:co = Color::Green;
			break;
		case 6:co = Color::LightGreen;
			break;
		case 7:co = Color::DarkGreen;
			break;
		case 8:co = Color::Blue;
			break;
		case 9:co = Color::LightBlue;
			break;
		case 10:co = Color::DarkBlue;
			break;
		case 11:co = Color::Purple;
			break;
		case 12:co = Color::MediumPurple;
			break;
		case 13:co = Color::Black;
			break;
		case 14:co = Color::White;
			break;
		default:
			break;
		}
		return co;
	}
	private: System::Void ��������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		ChartSetForm^dlg = gcnew ChartSetForm();
		dlg->ShowDialog();
		if (dlg->DialogResult == Windows::Forms::DialogResult::OK)
		{
			chart1->Series["Series1"]->Color = changeColor(dlg->tempcolor);
			chart2->Series["Series1"]->Color = changeColor(dlg->humidcolor);
			chart3->Series["Series1"]->Color = changeColor(dlg->shakecolor);
			chart4->Series["Series1"]->Color = changeColor(dlg->Fcolor);
			chart1->ChartAreas["ChartArea1"]->AxisY->Minimum = double(dlg->tempx);
			chart1->ChartAreas["ChartArea1"]->AxisY->Maximum = double(dlg->tempy);
			chart2->ChartAreas["ChartArea1"]->AxisY->Minimum = double(dlg->humidx);
			chart2->ChartAreas["ChartArea1"]->AxisY->Maximum = double(dlg->humidy);
			chart3->ChartAreas["ChartArea1"]->AxisY->Minimum = double(dlg->shakex);
			chart3->ChartAreas["ChartArea1"]->AxisY->Maximum = double(dlg->shakey);
			chart4->ChartAreas["ChartArea1"]->AxisY->Minimum = double(dlg->Fx);
			chart4->ChartAreas["ChartArea1"]->AxisY->Maximum = double(dlg->Fy);
		}
	}

			 // SerialForm ^dlg = gcnew SerialForm();
	private: System::Void ��������ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		//GetComList_Reg(dlg->comboBox1);

	}
	private: System::Void �򿪴���ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void �رմ���ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	}

	private:bool GetComList_Reg(ComboBox ^combox)
	{
		HKEY hkey;
		int result;
		int i = 0;
		result = RegOpenKeyEx(HKEY_LOCAL_MACHINE, _T("Hardware\\DeviceMap\\SerialComm"), NULL, KEY_READ, &hkey);
		//��ע���
		if (ERROR_SUCCESS == result)
		{
			TCHAR portName[0x100], commName[0x100];
			DWORD dwLong, dwSize;
			combox->Items->Clear();
			while (1)
			{
				dwSize = sizeof(portName) / sizeof(TCHAR);
				dwLong = dwSize;
				result = RegEnumValue(hkey, i, portName, &dwLong, NULL, NULL, (LPBYTE)commName, &dwSize);
				if (ERROR_NO_MORE_ITEMS == result)
				{
					//ö�ٴ���
					break;   //commName���Ǵ�������"COM2"
				}
				String ^strComName = gcnew String(commName);
				combox->Items->Add(strComName);
				i++;
			}
			RegCloseKey(hkey);
		}
		if (combox->Items->Count > 0)
		{
			combox->SelectedIndex = 0;//Ĭ��ѡ�е�һ��
			return true;
		}
		else
		{
			return false;
		}
	}
	private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		HistorySearch ^dlg = gcnew HistorySearch();
		dlg->ShowDialog();
	}
	};
}

