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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  系统ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  串口设置ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  气体类型ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  查看ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  帮助ToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  新建NToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  打开OToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  保存SToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  打印PToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;
	private: System::Windows::Forms::ToolStripButton^  剪切UToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  复制CToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  粘贴PToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;

	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ToolStripProgressBar^  toolStripProgressBar1;
	private: System::Windows::Forms::GroupBox^  实时数据;
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
	private: System::Windows::Forms::ToolStripMenuItem^  打开系统ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  关闭系统ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  串口设置ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  打开串口ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  关闭串口ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  温度ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  湿度ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  振荡度ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  有害气体ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  工具栏ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  状态栏ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  字体ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  坐标设置ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  平滑度设置ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  系统介绍ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  关于ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::NotifyIcon^  notifyIcon1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;

	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripMenuItem^  期望值设置ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  系统ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  打开ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  关闭ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  格式设置ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  自动换行ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  退出ToolStripMenuItem;
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::ToolStripMenuItem^  地图ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  显示地图ToolStripMenuItem;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton4;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel3;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel4;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel5;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel6;
	private: System::Windows::Forms::ToolStripMenuItem^  曲线图ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  折线图ToolStripMenuItem;
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;

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
			this->系统ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打开ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->关闭ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->系统ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打开系统ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->关闭系统ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->串口设置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->串口设置ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打开串口ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->关闭串口ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->地图ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->显示地图ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->气体类型ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->温度ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->湿度ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->振荡度ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->有害气体ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->期望值设置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->查看ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->工具栏ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->状态栏ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->字体ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->自动换行ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->坐标设置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->平滑度设置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->格式设置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->曲线图ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->折线图ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->帮助ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->系统介绍ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->关于ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->新建NToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->打开OToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->保存SToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->打印PToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->剪切UToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->复制CToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->粘贴PToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
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
			this->实时数据 = (gcnew System::Windows::Forms::GroupBox());
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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->退出ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->实时数据->SuspendLayout();
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
				this->系统ToolStripMenuItem1,
					this->系统ToolStripMenuItem, this->串口设置ToolStripMenuItem, this->地图ToolStripMenuItem, this->气体类型ToolStripMenuItem, this->查看ToolStripMenuItem,
					this->toolStripMenuItem1, this->帮助ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1775, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->MouseEnter += gcnew System::EventHandler(this, &Form1::menuStrip1_MouseEnter);
			this->menuStrip1->MouseLeave += gcnew System::EventHandler(this, &Form1::menuStrip1_MouseLeave);
			// 
			// 系统ToolStripMenuItem1
			// 
			this->系统ToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->打开ToolStripMenuItem,
					this->关闭ToolStripMenuItem
			});
			this->系统ToolStripMenuItem1->Name = L"系统ToolStripMenuItem1";
			this->系统ToolStripMenuItem1->Size = System::Drawing::Size(51, 24);
			this->系统ToolStripMenuItem1->Text = L"系统";
			this->系统ToolStripMenuItem1->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::On_DoSystemMenu);
			this->系统ToolStripMenuItem1->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 打开ToolStripMenuItem
			// 
			this->打开ToolStripMenuItem->Name = L"打开ToolStripMenuItem";
			this->打开ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->打开ToolStripMenuItem->Text = L"打开文件";
			this->打开ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 关闭ToolStripMenuItem
			// 
			this->关闭ToolStripMenuItem->Name = L"关闭ToolStripMenuItem";
			this->关闭ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->关闭ToolStripMenuItem->Text = L"关闭";
			this->关闭ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 系统ToolStripMenuItem
			// 
			this->系统ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->打开系统ToolStripMenuItem,
					this->关闭系统ToolStripMenuItem
			});
			this->系统ToolStripMenuItem->Name = L"系统ToolStripMenuItem";
			this->系统ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->系统ToolStripMenuItem->Text = L"开始";
			this->系统ToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::系统ToolStripMenuItem_DropDownItemClicked);
			this->系统ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 打开系统ToolStripMenuItem
			// 
			this->打开系统ToolStripMenuItem->Name = L"打开系统ToolStripMenuItem";
			this->打开系统ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->打开系统ToolStripMenuItem->Text = L"打开系统";
			this->打开系统ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 关闭系统ToolStripMenuItem
			// 
			this->关闭系统ToolStripMenuItem->Name = L"关闭系统ToolStripMenuItem";
			this->关闭系统ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->关闭系统ToolStripMenuItem->Text = L"关闭系统";
			this->关闭系统ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 串口设置ToolStripMenuItem
			// 
			this->串口设置ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->串口设置ToolStripMenuItem1,
					this->打开串口ToolStripMenuItem, this->关闭串口ToolStripMenuItem
			});
			this->串口设置ToolStripMenuItem->Name = L"串口设置ToolStripMenuItem";
			this->串口设置ToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->串口设置ToolStripMenuItem->Text = L"串口设置";
			this->串口设置ToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::串口设置ToolStripMenuItem_DropDownItemClicked);
			this->串口设置ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 串口设置ToolStripMenuItem1
			// 
			this->串口设置ToolStripMenuItem1->Name = L"串口设置ToolStripMenuItem1";
			this->串口设置ToolStripMenuItem1->Size = System::Drawing::Size(144, 26);
			this->串口设置ToolStripMenuItem1->Text = L"串口设置";
			this->串口设置ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::串口设置ToolStripMenuItem1_Click);
			this->串口设置ToolStripMenuItem1->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 打开串口ToolStripMenuItem
			// 
			this->打开串口ToolStripMenuItem->Name = L"打开串口ToolStripMenuItem";
			this->打开串口ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->打开串口ToolStripMenuItem->Text = L"打开串口";
			this->打开串口ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::打开串口ToolStripMenuItem_Click);
			this->打开串口ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 关闭串口ToolStripMenuItem
			// 
			this->关闭串口ToolStripMenuItem->Name = L"关闭串口ToolStripMenuItem";
			this->关闭串口ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->关闭串口ToolStripMenuItem->Text = L"关闭串口";
			this->关闭串口ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::关闭串口ToolStripMenuItem_Click);
			this->关闭串口ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 地图ToolStripMenuItem
			// 
			this->地图ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->显示地图ToolStripMenuItem });
			this->地图ToolStripMenuItem->Name = L"地图ToolStripMenuItem";
			this->地图ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->地图ToolStripMenuItem->Text = L"地图";
			this->地图ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 显示地图ToolStripMenuItem
			// 
			this->显示地图ToolStripMenuItem->Name = L"显示地图ToolStripMenuItem";
			this->显示地图ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->显示地图ToolStripMenuItem->Text = L"显示地图";
			this->显示地图ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::显示地图ToolStripMenuItem_Click);
			this->显示地图ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 气体类型ToolStripMenuItem
			// 
			this->气体类型ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->温度ToolStripMenuItem,
					this->湿度ToolStripMenuItem, this->振荡度ToolStripMenuItem, this->有害气体ToolStripMenuItem, this->期望值设置ToolStripMenuItem
			});
			this->气体类型ToolStripMenuItem->Name = L"气体类型ToolStripMenuItem";
			this->气体类型ToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->气体类型ToolStripMenuItem->Text = L"监测对象";
			this->气体类型ToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::气体类型ToolStripMenuItem_DropDownItemClicked);
			this->气体类型ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 温度ToolStripMenuItem
			// 
			this->温度ToolStripMenuItem->Name = L"温度ToolStripMenuItem";
			this->温度ToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->温度ToolStripMenuItem->Text = L"温度";
			this->温度ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 湿度ToolStripMenuItem
			// 
			this->湿度ToolStripMenuItem->Name = L"湿度ToolStripMenuItem";
			this->湿度ToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->湿度ToolStripMenuItem->Text = L"湿度";
			this->湿度ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 振荡度ToolStripMenuItem
			// 
			this->振荡度ToolStripMenuItem->Name = L"振荡度ToolStripMenuItem";
			this->振荡度ToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->振荡度ToolStripMenuItem->Text = L"振荡度";
			this->振荡度ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 有害气体ToolStripMenuItem
			// 
			this->有害气体ToolStripMenuItem->Name = L"有害气体ToolStripMenuItem";
			this->有害气体ToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->有害气体ToolStripMenuItem->Text = L"有害气体";
			this->有害气体ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 期望值设置ToolStripMenuItem
			// 
			this->期望值设置ToolStripMenuItem->Name = L"期望值设置ToolStripMenuItem";
			this->期望值设置ToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->期望值设置ToolStripMenuItem->Text = L"期望值设置";
			this->期望值设置ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 查看ToolStripMenuItem
			// 
			this->查看ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->工具栏ToolStripMenuItem,
					this->状态栏ToolStripMenuItem, this->字体ToolStripMenuItem, this->自动换行ToolStripMenuItem
			});
			this->查看ToolStripMenuItem->Name = L"查看ToolStripMenuItem";
			this->查看ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->查看ToolStripMenuItem->Text = L"格式";
			this->查看ToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::查看ToolStripMenuItem_DropDownItemClicked);
			this->查看ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::查看ToolStripMenuItem_Click);
			this->查看ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 工具栏ToolStripMenuItem
			// 
			this->工具栏ToolStripMenuItem->Name = L"工具栏ToolStripMenuItem";
			this->工具栏ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->工具栏ToolStripMenuItem->Text = L"工具栏";
			this->工具栏ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 状态栏ToolStripMenuItem
			// 
			this->状态栏ToolStripMenuItem->Name = L"状态栏ToolStripMenuItem";
			this->状态栏ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->状态栏ToolStripMenuItem->Text = L"状态栏";
			this->状态栏ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 字体ToolStripMenuItem
			// 
			this->字体ToolStripMenuItem->Name = L"字体ToolStripMenuItem";
			this->字体ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->字体ToolStripMenuItem->Text = L"字体";
			this->字体ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 自动换行ToolStripMenuItem
			// 
			this->自动换行ToolStripMenuItem->Name = L"自动换行ToolStripMenuItem";
			this->自动换行ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->自动换行ToolStripMenuItem->Text = L"自动换行";
			this->自动换行ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->坐标设置ToolStripMenuItem,
					this->平滑度设置ToolStripMenuItem, this->格式设置ToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(81, 24);
			this->toolStripMenuItem1->Text = L"图像设置";
			this->toolStripMenuItem1->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 坐标设置ToolStripMenuItem
			// 
			this->坐标设置ToolStripMenuItem->Name = L"坐标设置ToolStripMenuItem";
			this->坐标设置ToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->坐标设置ToolStripMenuItem->Text = L"坐标设置";
			this->坐标设置ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::坐标设置ToolStripMenuItem_Click);
			this->坐标设置ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 平滑度设置ToolStripMenuItem
			// 
			this->平滑度设置ToolStripMenuItem->Name = L"平滑度设置ToolStripMenuItem";
			this->平滑度设置ToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->平滑度设置ToolStripMenuItem->Text = L"平滑度设置";
			this->平滑度设置ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 格式设置ToolStripMenuItem
			// 
			this->格式设置ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->曲线图ToolStripMenuItem,
					this->折线图ToolStripMenuItem
			});
			this->格式设置ToolStripMenuItem->Name = L"格式设置ToolStripMenuItem";
			this->格式设置ToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->格式设置ToolStripMenuItem->Text = L"格式设置";
			this->格式设置ToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::格式设置ToolStripMenuItem_DropDownItemClicked);
			this->格式设置ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 曲线图ToolStripMenuItem
			// 
			this->曲线图ToolStripMenuItem->Name = L"曲线图ToolStripMenuItem";
			this->曲线图ToolStripMenuItem->Size = System::Drawing::Size(129, 26);
			this->曲线图ToolStripMenuItem->Text = L"曲线图";
			// 
			// 折线图ToolStripMenuItem
			// 
			this->折线图ToolStripMenuItem->Name = L"折线图ToolStripMenuItem";
			this->折线图ToolStripMenuItem->Size = System::Drawing::Size(129, 26);
			this->折线图ToolStripMenuItem->Text = L"折线图";
			// 
			// 帮助ToolStripMenuItem
			// 
			this->帮助ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->系统介绍ToolStripMenuItem,
					this->关于ToolStripMenuItem
			});
			this->帮助ToolStripMenuItem->Name = L"帮助ToolStripMenuItem";
			this->帮助ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->帮助ToolStripMenuItem->Text = L"帮助";
			this->帮助ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 系统介绍ToolStripMenuItem
			// 
			this->系统介绍ToolStripMenuItem->Name = L"系统介绍ToolStripMenuItem";
			this->系统介绍ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->系统介绍ToolStripMenuItem->Text = L"系统介绍";
			this->系统介绍ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// 关于ToolStripMenuItem
			// 
			this->关于ToolStripMenuItem->Name = L"关于ToolStripMenuItem";
			this->关于ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->关于ToolStripMenuItem->Text = L"关于";
			this->关于ToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MouseEnter);
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(15, 15);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(13) {
				this->新建NToolStripButton,
					this->打开OToolStripButton, this->保存SToolStripButton, this->打印PToolStripButton, this->toolStripSeparator, this->剪切UToolStripButton,
					this->复制CToolStripButton, this->粘贴PToolStripButton, this->toolStripSeparator1, this->toolStripButton1, this->toolStripButton2,
					this->toolStripButton3, this->toolStripButton4
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 28);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1775, 25);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// 新建NToolStripButton
			// 
			this->新建NToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->新建NToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"新建NToolStripButton.Image")));
			this->新建NToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->新建NToolStripButton->Name = L"新建NToolStripButton";
			this->新建NToolStripButton->Size = System::Drawing::Size(23, 22);
			this->新建NToolStripButton->Text = L"新建(&N)";
			// 
			// 打开OToolStripButton
			// 
			this->打开OToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->打开OToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打开OToolStripButton.Image")));
			this->打开OToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打开OToolStripButton->Name = L"打开OToolStripButton";
			this->打开OToolStripButton->Size = System::Drawing::Size(23, 22);
			this->打开OToolStripButton->Text = L"打开(&O)";
			// 
			// 保存SToolStripButton
			// 
			this->保存SToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->保存SToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"保存SToolStripButton.Image")));
			this->保存SToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->保存SToolStripButton->Name = L"保存SToolStripButton";
			this->保存SToolStripButton->Size = System::Drawing::Size(23, 22);
			this->保存SToolStripButton->Text = L"保存(&S)";
			// 
			// 打印PToolStripButton
			// 
			this->打印PToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->打印PToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打印PToolStripButton.Image")));
			this->打印PToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打印PToolStripButton->Name = L"打印PToolStripButton";
			this->打印PToolStripButton->Size = System::Drawing::Size(23, 22);
			this->打印PToolStripButton->Text = L"打印(&P)";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 25);
			// 
			// 剪切UToolStripButton
			// 
			this->剪切UToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->剪切UToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"剪切UToolStripButton.Image")));
			this->剪切UToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->剪切UToolStripButton->Name = L"剪切UToolStripButton";
			this->剪切UToolStripButton->Size = System::Drawing::Size(23, 22);
			this->剪切UToolStripButton->Text = L"剪切(&U)";
			this->剪切UToolStripButton->Click += gcnew System::EventHandler(this, &Form1::剪切UToolStripButton_Click);
			// 
			// 复制CToolStripButton
			// 
			this->复制CToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->复制CToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"复制CToolStripButton.Image")));
			this->复制CToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->复制CToolStripButton->Name = L"复制CToolStripButton";
			this->复制CToolStripButton->Size = System::Drawing::Size(23, 22);
			this->复制CToolStripButton->Text = L"复制(&C)";
			// 
			// 粘贴PToolStripButton
			// 
			this->粘贴PToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->粘贴PToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"粘贴PToolStripButton.Image")));
			this->粘贴PToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->粘贴PToolStripButton->Name = L"粘贴PToolStripButton";
			this->粘贴PToolStripButton->Size = System::Drawing::Size(23, 22);
			this->粘贴PToolStripButton->Text = L"粘贴(&P)";
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
			this->toolStripButton1->ToolTipText = L"接收数据";
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
			this->toolStripButton2->ToolTipText = L"数据曲线";
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(23, 22);
			this->toolStripButton3->Text = L"toolStripButton3";
			this->toolStripButton3->ToolTipText = L"期望值";
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(23, 22);
			this->toolStripButton4->Text = L"toolStripButton4";
			this->toolStripButton4->ToolTipText = L"快递车跟踪";
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
			this->statusStrip1->Location = System::Drawing::Point(0, 794);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Padding = System::Windows::Forms::Padding(1, 0, 19, 0);
			this->statusStrip1->Size = System::Drawing::Size(1775, 48);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(167, 43);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(167, 43);
			this->toolStripStatusLabel2->Text = L"toolStripStatusLabel2";
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripProgressBar1->Maximum = 60;
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->RightToLeftLayout = true;
			this->toolStripProgressBar1->Size = System::Drawing::Size(133, 42);
			this->toolStripProgressBar1->Step = 1;
			this->toolStripProgressBar1->Click += gcnew System::EventHandler(this, &Form1::toolStripProgressBar1_Click);
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(785, 43);
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
			// 实时数据
			// 
			this->实时数据->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->实时数据->Controls->Add(this->button4);
			this->实时数据->Controls->Add(this->label4);
			this->实时数据->Controls->Add(this->button3);
			this->实时数据->Controls->Add(this->label3);
			this->实时数据->Controls->Add(this->button2);
			this->实时数据->Controls->Add(this->label2);
			this->实时数据->Controls->Add(this->button1);
			this->实时数据->Controls->Add(this->label1);
			this->实时数据->Controls->Add(this->chart4);
			this->实时数据->Controls->Add(this->chart3);
			this->实时数据->Controls->Add(this->chart2);
			this->实时数据->Controls->Add(this->chart1);
			this->实时数据->Font = (gcnew System::Drawing::Font(L"宋体", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->实时数据->Location = System::Drawing::Point(16, 84);
			this->实时数据->Margin = System::Windows::Forms::Padding(4);
			this->实时数据->Name = L"实时数据";
			this->实时数据->Padding = System::Windows::Forms::Padding(4);
			this->实时数据->Size = System::Drawing::Size(1096, 700);
			this->实时数据->TabIndex = 3;
			this->实时数据->TabStop = false;
			this->实时数据->Text = L"实时数据";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(288, 661);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(85, 30);
			this->button4->TabIndex = 5;
			this->button4->Text = L"显示";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(168, 668);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 24);
			this->label4->TabIndex = 4;
			this->label4->Text = L"振荡度";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(816, 661);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(85, 30);
			this->button3->TabIndex = 5;
			this->button3->Text = L"显示";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(677, 668);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"有害气体";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(816, 334);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 30);
			this->button2->TabIndex = 5;
			this->button2->Text = L"显示";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(696, 335);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"湿度";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(288, 332);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 30);
			this->button1->TabIndex = 5;
			this->button1->Text = L"显示";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(168, 334);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"温度";
			// 
			// chart4
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart4->Legends->Add(legend1);
			this->chart4->Location = System::Drawing::Point(25, 388);
			this->chart4->Margin = System::Windows::Forms::Padding(4);
			this->chart4->Name = L"chart4";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart4->Series->Add(series1);
			this->chart4->Size = System::Drawing::Size(477, 250);
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
			this->chart3->Location = System::Drawing::Point(552, 388);
			this->chart3->Margin = System::Windows::Forms::Padding(4);
			this->chart3->Name = L"chart3";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart3->Series->Add(series2);
			this->chart3->Size = System::Drawing::Size(477, 250);
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
			this->chart2->Location = System::Drawing::Point(552, 61);
			this->chart2->Margin = System::Windows::Forms::Padding(4);
			this->chart2->Name = L"chart2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart2->Series->Add(series3);
			this->chart2->Size = System::Drawing::Size(477, 250);
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
			this->chart1->Location = System::Drawing::Point(25, 61);
			this->chart1->Margin = System::Windows::Forms::Padding(4);
			this->chart1->Name = L"chart1";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(477, 250);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1211, 84);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(461, 304);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(1211, 630);
			this->listBox1->Margin = System::Windows::Forms::Padding(4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(476, 144);
			this->listBox1->TabIndex = 5;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1号", L"2号", L"3号" });
			this->comboBox1->Location = System::Drawing::Point(1475, 458);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(212, 23);
			this->comboBox1->Sorted = true;
			this->comboBox1->TabIndex = 6;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(1471, 424);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(129, 20);
			this->label6->TabIndex = 7;
			this->label6->Text = L"选择快递车辆";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(1475, 501);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(213, 71);
			this->button5->TabIndex = 8;
			this->button5->Text = L"查询历史数据";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(1199, 395);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(243, 204);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"环境评定";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 145);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(209, 31);
			this->textBox3->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 89);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(209, 31);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 31);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(209, 31);
			this->textBox1->TabIndex = 0;
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->ContextMenuStrip = this->contextMenuStrip1;
			this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
			this->notifyIcon1->Text = L"快递运输环境监测系统";
			this->notifyIcon1->Visible = true;
			this->notifyIcon1->DoubleClick += gcnew System::EventHandler(this, &Form1::notifyIcon1_DoubleClick);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->退出ToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(109, 28);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::contextMenuStrip1_Opening);
			// 
			// 退出ToolStripMenuItem
			// 
			this->退出ToolStripMenuItem->Name = L"退出ToolStripMenuItem";
			this->退出ToolStripMenuItem->Size = System::Drawing::Size(108, 24);
			this->退出ToolStripMenuItem->Text = L"退出";
			this->退出ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::退出ToolStripMenuItem_Click);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(1205, 602);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(130, 24);
			this->label5->TabIndex = 10;
			this->label5->Text = L"数据接收区";
			// 
			// toolTip1
			// 
			this->toolTip1->IsBalloon = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1457, 592);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(143, 15);
			this->label7->TabIndex = 11;
			this->label7->Text = L"接收时间间隔（ms）";
			this->label7->Click += gcnew System::EventHandler(this, &Form1::label7_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(1606, 590);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 25);
			this->numericUpDown1->TabIndex = 12;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1775, 842);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->实时数据);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"快递运输环境监测系统";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &Form1::Form1_SizeChanged);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseMove);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->实时数据->ResumeLayout(false);
			this->实时数据->PerformLayout();
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
		DateTime dateTime = DateTime::Now;             //获取系统当前时间
		toolStripStatusLabel1->Text = dateTime.ToLongDateString();       // 显示日期
		toolStripStatusLabel2->Text = dateTime.ToLongTimeString();     // 显示时间
		toolStripProgressBar1->Value = dateTime.Second;           //进度条
		if (Control::IsKeyLocked(Keys::CapsLock))

			this->toolStripStatusLabel4->Text = "大写";

		else

			this->toolStripStatusLabel4->Text = "";

		if (Control::IsKeyLocked(Keys::NumLock))

			this->toolStripStatusLabel5->Text = "数字";

		else

			this->toolStripStatusLabel5->Text = "";

		if (Control::IsKeyLocked(Keys::Scroll))

			this->toolStripStatusLabel6->Text = "滚动";

		else

			this->toolStripStatusLabel6->Text = "";
		this->timer1->Interval = Int32::Parse(this->numericUpDown1->Text);
		data_receivce();

	}


			 TempForm^tf = gcnew TempForm();
			 HumidForm^hf = gcnew HumidForm();
			 ShakeForm^sf = gcnew ShakeForm();
			 FForm^ff = gcnew FForm();
			 LocationForm^lf = gcnew LocationForm();
	public: void data_receivce()//接收串口数据
	{
		String^ receiveText = nullptr;
		char buffer[100] = {};
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
					array<String^> ^split = gcnew array<String^>(12);
					//split = gcnew array<String^>{L"0", L"0", L"0", L"0"};
					split = buff->Split(59);
					DateTime dateTime = DateTime::Now;             //获取系统当前时间
					//********连接数据库并存储*******************//////
					strConn = String::Format("Provider=Microsoft.Jet.OLEDB.4.0; Data Source=AGMS.mdb");
					OleDbConnection^ con1 = gcnew OleDbConnection(strConn);
					//********选择车厢后画图并存储数据********// 
					int nIndex = this->comboBox1->SelectedIndex;
					if (nIndex < 0) return;
					String^ strTableName = this->comboBox1->Items[nIndex]->ToString();
					String^ sql1;
					String^ sql2;
					String^ sql3;
					String^ sql4;

					LocationForm::textBox1->Text = split[12];
					LocationForm::textBox1->Text = split[13];

					con1->Open();    // 打开连接
					sql1 = "INSERT INTO 1号车数据表([温度],[湿度],[震荡度],[有害气体],[日期时间],[对应车辆]) VALUES( " + split[0] + " , " + split[1] + " , " + split[2] + ", " + split[3] + ",Now() , '1号' )";
					OleDbCommand^ comm1 = gcnew OleDbCommand(sql1, con1);
					comm1->ExecuteNonQuery();
					sql2 = "INSERT INTO 2号车数据表([温度],[湿度],[震荡度],[有害气体],[日期时间],[对应车辆]) VALUES( " + split[4] + " , " + split[5] + " , " + split[6] + ", " + split[7] + ",Now() , '2号' )";
					OleDbCommand^ comm2 = gcnew OleDbCommand(sql2, con1);
					comm2->ExecuteNonQuery();
					//con1->Close();
					//con1->Open();    // 打开连接
					sql3 = "INSERT INTO 3号车数据表([温度],[湿度],[震荡度],[有害气体],[日期时间],[对应车辆]) VALUES( " + split[8] + " , " + split[9] + " , " + split[10] + ", " + split[11] + ",Now() , '3号' )";
					OleDbCommand^ comm3 = gcnew OleDbCommand(sql3, con1);
					comm3->ExecuteNonQuery();
					con1->Close();
					if (strTableName == "1号")
					{
						if (split[0] != nullptr&&split[1] != nullptr&&split[2] != nullptr&&split[3] != nullptr)
						{

							chart1->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[0]);
							chart1->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
							/*if (Int32::Parse(split[0])<0 || Int32::Parse(split[0])>100)  //酒精超限报警
							{
							UpdateColor1(button1);
							this->chart1->Series["Series1"]->Points[this->chart1->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
							if (split[0] != nullptr)
							{
							con1->Open();    // 打开连接
							sql4 = "INSERT INTO 异常数据表_酒精([酒精浓度],[酒精日期时间],[酒精对应车厢]) VALUES( " + split[0] + " ,Now() , '" + strTableName + "' )";
							OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
							con1->Close();
							}
							//Sleep(100);
							}
							else UpdateColor2(button1);*/
							chart2->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[1]);
							chart2->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
							/*if (Int32::Parse(split[1])<0 || Int32::Parse(split[1])>150)  //PM2.5超限报警
							{
							UpdateColor1(button2);
							this->chart2->Series["Series1"]->Points[this->chart2->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
							if (split[1] != nullptr)
							{
							con1->Open();    // 打开连接
							sql4 = "INSERT INTO 异常数据表_PM([PM浓度],[PM日期时间],[PM对应车厢]) VALUES( " + split[1] + " ,Now() , '" + strTableName + "'  )";
							OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
							con1->Close();
							}
							//Sleep(100);
							}
							else
							{
							UpdateColor2(button2);
							}*/
							chart3->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[2]);
							chart3->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
							/*if (float::Parse(split[2])<26 || float::Parse(split[2])>28)  //温度超限报警
							{
							UpdateColor1(button3);
							this->chart3->Series["Series1"]->Points[this->chart3->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
							if (split[2] != nullptr)
							{
							con1->Open();    // 打开连接
							sql4 = "INSERT INTO 异常数据表_温度([温度],[温度日期时间],[温度对应车厢]) VALUES(" + split[2] + " ,Now() , '" + strTableName + "'  )";
							OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
							con1->Close();
							}
							Sleep(100);
							}
							else
							{
							UpdateColor2(button3);
							}*/
							chart4->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[3]);
							chart4->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
							/*if (Int32::Parse(split[3])<45 || Int32::Parse(split[3])>75)  //湿度超限报警
							{
							UpdateColor1(button4);
							this->chart3->Series["Series1"]->Points[this->chart3->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
							if (split[3] != nullptr)
							{
							con1->Open();    // 打开连接
							sql4 = "INSERT INTO 异常数据表_湿度([湿度],[湿度日期时间],[湿度对应车厢]) VALUES( " + split[3] + " ,Now() , '" + strTableName + "' )";
							OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
							con1->Close();
							}
							Sleep(100);

							}
							else
							{
							UpdateColor2(button4);
							}*/

							//分析
							if ((float::Parse(split[2]) > 10 && float::Parse(split[6]) < 30)) this->textBox1->Text = "震荡度较大";
							else if (float::Parse(split[2]) < 10) this->textBox1->Text = "震荡度较小";
							else if (float::Parse(split[2]) > 30) this->textBox1->Text = "震荡度很大";

							if ((float::Parse(split[3]) > 10 && float::Parse(split[2]) < 40)) this->textBox2->Text = "车内空气质量一般";
							else if (float::Parse(split[3]) < 10) this->textBox2->Text = "车内空气质量好";
							else if (float::Parse(split[3]) > 40) this->textBox2->Text = "车内空气质量差";

							if ((float::Parse(split[0]) > 26 && float::Parse(split[2]) < 28)) this->textBox3->Text = "车厢内温度适宜";
							else if (float::Parse(split[0]) < 26) this->textBox3->Text = "车内温度偏低";
							else if (float::Parse(split[0]) > 28) this->textBox3->Text = "车内温度偏高";

							/*if (Int32::Parse(split[3])<45)  this->textBox4->Text = "车厢内干燥，多喝水";
							else if (Int32::Parse(split[3]) >= 45 && Int32::Parse(split[3]) <= 75)  this->textBox4->Text = "车厢内环境舒适";
							else if (Int32::Parse(split[3])>75) this->textBox4->Text = "车厢内潮湿";
							if ((Int32::Parse(split[0])<0 || Int32::Parse(split[0])>100) && (Int32::Parse(split[1])<0 || Int32::Parse(split[1])>150) && (float::Parse(split[2])<26 || float::Parse(split[2])>28) && (Int32::Parse(split[3])<45 || Int32::Parse(split[3])>75))
							{
							//play();
							this->textBox2->Text = "车厢内环境差";
							}*/
						}
					}
					else if (strTableName == "2号")
					{

						if (split[4] != nullptr&&split[5] != nullptr&&split[6] != nullptr&&split[7] != nullptr)
						{

							chart1->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[4]);
							chart1->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
							/*if (Int32::Parse(split[4])<0 || Int32::Parse(split[4])>100)  //酒精超限报警
							{
							UpdateColor1(button1);
							this->chart1->Series["Series1"]->Points[this->chart1->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
							if (split[4] != nullptr)
							{
							con1->Open();    // 打开连接
							sql4 = "INSERT INTO 异常数据表_酒精([酒精浓度],[酒精日期时间],[酒精对应车厢]) VALUES( " + split[4] + " ,Now() , '" + strTableName + "' )";
							OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
							con1->Close();
							}
							//Sleep(100);
							}
							else UpdateColor2(button1);*/
							chart2->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[5]);
							chart2->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
							/*if (Int32::Parse(split[5])<0 || Int32::Parse(split[5])>150)  //PM2.5超限报警
							{
							UpdateColor1(button2);
							this->chart2->Series["Series1"]->Points[this->chart2->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
							if (split[5] != nullptr)
							{
							con1->Open();    // 打开连接
							sql4 = "INSERT INTO 异常数据表_PM([PM浓度],[PM日期时间],[PM对应车厢]) VALUES( " + split[5] + " ,Now() , '" + strTableName + "'  )";
							OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
							con1->Close();
							}
							//Sleep(100);
							}
							else
							{
							UpdateColor2(button2);
							}*/
							chart3->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[6]);
							chart3->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
							/*if (float::Parse(split[6])<26 || float::Parse(split[6])>28)  //温度超限报警
							{
							UpdateColor1(button3);
							this->chart3->Series["Series1"]->Points[this->chart3->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
							if (split[6] != nullptr)
							{
							con1->Open();    // 打开连接
							sql4 = "INSERT INTO 异常数据表_温度([温度],[温度日期时间],[温度对应车厢]) VALUES(" + split[6] + " ,Now() , '" + strTableName + "'  )";
							OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
							con1->Close();
							}
							//Sleep(100);
							}
							else
							{
							UpdateColor2(button3);
							}*/
							chart4->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[7]);
							chart4->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
							/*if (Int32::Parse(split[7])<45 || Int32::Parse(split[7])>75)  //湿度超限报警
							{
							UpdateColor1(button4);
							this->chart3->Series["Series1"]->Points[this->chart3->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
							if (split[7] != nullptr)
							{
							con1->Open();    // 打开连接
							sql4 = "INSERT INTO 异常数据表_湿度([湿度],[湿度日期时间],[湿度对应车厢]) VALUES( " + split[7] + " ,Now() , '" + strTableName + "' )";
							OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
							con1->Close();
							}
							//Sleep(100);

							}
							else
							{
							UpdateColor2(button4);
							}*/

							//分析
							if ((float::Parse(split[6]) > 10 && float::Parse(split[6]) < 30)) this->textBox1->Text = "震荡度较大";
							else if (float::Parse(split[6]) < 10) this->textBox1->Text = "震荡度较小";
							else if (float::Parse(split[6]) > 30) this->textBox1->Text = "震荡度很大";

							if ((float::Parse(split[7]) > 10 && float::Parse(split[2]) < 40)) this->textBox2->Text = "车内空气质量一般";
							else if (float::Parse(split[7]) < 10) this->textBox2->Text = "车内空气质量好";
							else if (float::Parse(split[7]) > 40) this->textBox2->Text = "车内空气质量差";

							if ((float::Parse(split[4]) > 26 && float::Parse(split[2]) < 28)) this->textBox3->Text = "车厢内温度适宜";
							else if (float::Parse(split[4]) < 26) this->textBox3->Text = "车内温度偏低";
							else if (float::Parse(split[4]) > 28) this->textBox3->Text = "车内温度偏高";

							/*if (Int32::Parse(split[7])<45)  this->textBox4->Text = "车厢内干燥，多喝水";
							else if (Int32::Parse(split[7]) >= 45 && Int32::Parse(split[7]) <= 75)  this->textBox4->Text = "车厢内环境舒适";
							else if (Int32::Parse(split[7])>75) this->textBox4->Text = "车厢内潮湿";
							if ((Int32::Parse(split[4])<0 || Int32::Parse(split[4])>100) && (Int32::Parse(split[5])<0 || Int32::Parse(split[5])>150) && (float::Parse(split[6])<26 || float::Parse(split[6])>28) && (Int32::Parse(split[7])<45 || Int32::Parse(split[7])>75))
							{
							//play();
							this->textBox2->Text = "车厢内环境差";
							}*/
						}
					}
					else if (strTableName == "3号")
					{
						if (split[8] != nullptr&&split[9] != nullptr&&split[10] != nullptr&&split[11] != nullptr)
						{

							chart1->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[8]);
							chart1->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
							/*if (Int32::Parse(split[8])<0 || Int32::Parse(split[8])>100)  //酒精超限报警
							{
							UpdateColor1(button1);
							this->chart1->Series["Series1"]->Points[this->chart1->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
							if (split[0] != nullptr)
							{
							con1->Open();    // 打开连接
							sql4 = "INSERT INTO 异常数据表_酒精([酒精浓度],[酒精日期时间],[酒精对应车厢]) VALUES( " + split[8] + " ,Now() , '" + strTableName + "' )";
							OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
							con1->Close();
							}
							//Sleep(100);
							}
							else UpdateColor2(button1);*/
							chart2->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[9]);
							chart2->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
							/*if (Int32::Parse(split[9])<0 || Int32::Parse(split[9])>150)  //PM2.5超限报警
							{
							UpdateColor1(button2);
							this->chart2->Series["Series1"]->Points[this->chart2->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
							if (split[1] != nullptr)
							{
							con1->Open();    // 打开连接
							sql4 = "INSERT INTO 异常数据表_PM([PM浓度],[PM日期时间],[PM对应车厢]) VALUES( " + split[9] + " ,Now() , '" + strTableName + "'  )";
							OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
							con1->Close();
							}
							//Sleep(100);
							}
							else
							{
							UpdateColor2(button2);
							}*/
							chart3->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[10]);
							chart3->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
							/*if (float::Parse(split[10])<26 || float::Parse(split[10])>28)  //温度超限报警
							{
							UpdateColor1(button3);
							this->chart3->Series["Series1"]->Points[this->chart3->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
							if (split[2] != nullptr)
							{
							con1->Open();    // 打开连接
							sql4 = "INSERT INTO 异常数据表_温度([温度],[温度日期时间],[温度对应车厢]) VALUES(" + split[10] + " ,Now() , '" + strTableName + "'  )";
							OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
							con1->Close();
							}
							//Sleep(100);
							}
							else
							{
							UpdateColor2(button3);
							}*/
							chart4->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[11]);
							chart4->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
							/*if (Int32::Parse(split[11])<45 || Int32::Parse(split[11])>75)  //湿度超限报警
							{
							UpdateColor1(button4);
							this->chart3->Series["Series1"]->Points[this->chart3->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
							if (split[3] != nullptr)
							{
							con1->Open();    // 打开连接
							sql4 = "INSERT INTO 异常数据表_湿度([湿度],[湿度日期时间],[湿度对应车厢]) VALUES( " + split[11] + " ,Now() , '" + strTableName + "' )";
							OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
							con1->Close();
							}
							//Sleep(100);
							}
							else
							{
							UpdateColor2(button4);
							}*/

							//分析
							if ((float::Parse(split[10]) > 10 && float::Parse(split[6]) < 30)) this->textBox1->Text = "震荡度较大";
							else if (float::Parse(split[10]) < 10) this->textBox1->Text = "震荡度较小";
							else if (float::Parse(split[10]) > 30) this->textBox1->Text = "震荡度很大";

							if ((float::Parse(split[11]) > 10 && float::Parse(split[2]) < 40)) this->textBox2->Text = "车内空气质量一般";
							else if (float::Parse(split[11]) < 10) this->textBox2->Text = "车内空气质量好";
							else if (float::Parse(split[11]) > 40) this->textBox2->Text = "车内空气质量差";

							if ((float::Parse(split[8]) > 26 && float::Parse(split[2]) < 28)) this->textBox3->Text = "车厢内温度适宜";
							else if (float::Parse(split[8]) < 26) this->textBox3->Text = "车内温度偏低";
							else if (float::Parse(split[8]) > 28) this->textBox3->Text = "车内温度偏高";

							/*if (Int32::Parse(split[11])<45)  this->textBox4->Text = "车厢内干燥，多喝水";
							else if (Int32::Parse(split[11]) >= 45 && Int32::Parse(split[11]) <= 75)  this->textBox4->Text = "车厢内环境舒适";
							else if (Int32::Parse(split[11])>75) this->textBox4->Text = "车厢内潮湿";
							if ((Int32::Parse(split[8])<0 || Int32::Parse(split[8])>100) && (Int32::Parse(split[9])<0 || Int32::Parse(split[9])>150) && (float::Parse(split[10])<26 || float::Parse(split[10])>28) && (Int32::Parse(split[11])<45 || Int32::Parse(split[11])>75))
							{
							//play();
							this->textBox2->Text = "车厢内环境差";
							}*/
						}
					}
					if (TempForm::comboBox1->Items->Count > 0){
						int index1 = TempForm::comboBox1->SelectedIndex;
						switch (index1)
						{
						case 0:TempForm::textBox1->Text = split[0]; break;
						case 1:TempForm::textBox1->Text = split[4]; break;
						case 2:TempForm::textBox1->Text = split[8]; break;
						}
					}

					if (HumidForm::comboBox1->Items->Count > 0)
					{
						int index2 = HumidForm::comboBox1->SelectedIndex;
						switch (index2)
						{
						case 0:HumidForm::textBox1->Text = split[1]; break;
						case 1:HumidForm::textBox1->Text = split[5]; break;
						case 2:HumidForm::textBox1->Text = split[9]; break;
						}
					}

					if (ShakeForm::comboBox1->Items->Count > 0){

						int index3 = ShakeForm::comboBox1->SelectedIndex;
						switch (index3)
						{
						case 0:ShakeForm::textBox1->Text = split[2]; break;
						case 1:ShakeForm::textBox1->Text = split[6]; break;
						case 2:ShakeForm::textBox1->Text = split[10]; break;
						}
					}

					if (FForm::comboBox1->Items->Count > 0){
						int index4 = FForm::comboBox1->SelectedIndex;
						switch (index4)
						{
						case 0:FForm::textBox1->Text = split[3]; break;
						case 1:FForm::textBox1->Text = split[7]; break;
						case 2:FForm::textBox1->Text = split[11]; break;
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

		//为窗体还原的实现。

		this->WindowState = System::Windows::Forms::FormWindowState::Normal;
	}
	private: System::Void Form1_SizeChanged(System::Object^  sender, System::EventArgs^  e) {
		//窗体最小化的判断条件

		if (this->WindowState == System::Windows::Forms::FormWindowState::Minimized)

		{

			this->Hide();

			this->notifyIcon1->Visible = true;//显示程序图标

			//为实现气球提示

			this->notifyIcon1->ShowBalloonTip(30, "注意", "大家好，这是我设计的一个系统", ToolTipIcon::Info);

		}
	}
	private: System::Void contextMenuStrip1_Opening(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	}
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {

		static int i = 1;

		i = (i<8 ? i + 1 : 1);         // 图像的索引,共有8个图标

		this->notifyIcon1->Icon = gcnew System::Drawing::Icon(L"Rotate" + i + L".ico", 64, 64);
	}

	public:SerialForm^dlg = gcnew SerialForm();
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		int index = comboBox1->SelectedIndex;
		switch (index)
		{//显示汽车的信息
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

		if (item == 打开ToolStripMenuItem)

		{

			OpenFileDialog^ pOFD = gcnew OpenFileDialog();

			pOFD->Filter = "文本文件(*.txt)|*.txt|所有文件(*.*)|*.*";

			pOFD->DefaultExt = "txt";

			if (pOFD->ShowDialog() == Windows::Forms::DialogResult::OK)

			{

				System::IO::StreamReader ^pReader =

					gcnew System::IO::StreamReader(pOFD->FileName,

					System::Text::Encoding::Default);


				pReader->Close();

				// 在状态栏上显示信息

				//statusStrip1->Items[3]->Text= "就绪";

				//statusStrip1->Items[3]->Text =pOFD->FileName;

			}

		}
		else if (item == 关闭ToolStripMenuItem)
		{

			Application::Exit();
		}

	}

	private: System::Void 串口设置ToolStripMenuItem_DropDownItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {


		ToolStripMenuItem^ item;

		if (e == nullptr)

			item = safe_cast<ToolStripMenuItem^>(sender);

		else

			item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);
		if (item == 串口设置ToolStripMenuItem1)
		{
			GetComList_Reg(dlg->comboBox4);
			dlg->ShowDialog();
		}
		if (item == 打开串口ToolStripMenuItem)
		{
			dlg->com->Open();//打开串口，调整功能chart处理
		}
		if (item == 关闭串口ToolStripMenuItem)
		{
			dlg->com->Close();//关闭串口，调整功能chart处理
		}
	}
	private: System::Void 查看ToolStripMenuItem_DropDownItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		ToolStripMenuItem^ item;
		if (e == nullptr)
			item = safe_cast<ToolStripMenuItem^>(sender);
		else
			item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);
		if (item == 工具栏ToolStripMenuItem)      //“工具栏”菜单项
		{
			工具栏ToolStripMenuItem->Checked = !工具栏ToolStripMenuItem->Checked;
			//显示/隐藏工具栏
			toolStrip1->Visible = 工具栏ToolStripMenuItem->Checked;
		}
		else if (item == 状态栏ToolStripMenuItem)    // “状态栏”菜单项
		{
			状态栏ToolStripMenuItem->Checked = !状态栏ToolStripMenuItem->Checked;
			// 显示/隐藏状态栏
			statusStrip1->Visible = 状态栏ToolStripMenuItem->Checked;
		}
		else if (item == 字体ToolStripMenuItem)    // “字体”菜单项
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
		else if (item == 自动换行ToolStripMenuItem)
		{
			自动换行ToolStripMenuItem->Checked = !自动换行ToolStripMenuItem->Checked;
		}
	}
	private: String^ strConn;

	private: System::Void 系统ToolStripMenuItem_DropDownItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {

		ToolStripMenuItem^ item;

		if (e == nullptr)

			item = safe_cast<ToolStripMenuItem^>(sender);

		else

			item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);

		if (item == 打开系统ToolStripMenuItem)
		{
			this->button1->Enabled = true;
			this->button2->Enabled = true;
			this->button3->Enabled = true;
			this->button4->Enabled = true;
		}
		else if (item == 关闭系统ToolStripMenuItem)
		{
			this->button1->Enabled = false;
			this->button2->Enabled = false;
			this->button3->Enabled = false;
			this->button4->Enabled = false;

		}
	}
	private: System::Void 气体类型ToolStripMenuItem_DropDownItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {

		ToolStripMenuItem^ item;

		if (e == nullptr)

			item = safe_cast<ToolStripMenuItem^>(sender);

		else

			item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);
		if (item == 温度ToolStripMenuItem)
		{
			TempForm^dlg = gcnew TempForm();
			dlg->ShowDialog();
		}
		else if (item == 湿度ToolStripMenuItem)
		{
			HumidForm^dlg = gcnew HumidForm();
			dlg->ShowDialog();
		}
		else if (item == 振荡度ToolStripMenuItem)
		{
			ShakeForm^dlg = gcnew ShakeForm();
			dlg->ShowDialog();
		}
		else if (item == 有害气体ToolStripMenuItem)
		{
			FForm^dlg = gcnew FForm();
			dlg->ShowDialog();
		}
		else if (item == 期望值设置ToolStripMenuItem)
		{
			SetForm^dlg = gcnew SetForm();
			dlg->ShowDialog();
		}
	}
	private: System::Void 退出ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void 查看ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void 显示地图ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		LocationForm^dlg = gcnew LocationForm();
		dlg->ShowDialog();
	}
	private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void toolStripButton4_Click(System::Object^  sender, System::EventArgs^  e) {
		LocationForm^dlg = gcnew LocationForm();
		dlg->ShowDialog();
	}
	private: System::Void 剪切UToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void toolStripProgressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Form1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		String ^str = "X=" + e->X.ToString() + ",Y=" + e->Y.ToString();
		this->toolStripStatusLabel3->Text = str;
	}
	private: System::Void menuStrip1_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		this->statusStrip1->Items[3]->Text = "就绪";
	}
	private: System::Void menuStrip1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		this->statusStrip1->Items[3]->Text = "就绪";
	}
	private: System::Void On_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		String^ str = "就绪";

		ToolStripMenuItem^ item = safe_cast<ToolStripMenuItem^>(sender);

		if (item == 系统ToolStripMenuItem)  str = "当前为系统菜单项";

		if (item == 打开ToolStripMenuItem) str = "当前为打开文件菜单项";

		if (item == 关闭ToolStripMenuItem)  str = "退出应用程序";

		if (item == 打开系统ToolStripMenuItem)  str = "当前为开始菜单项";

		if (item == 串口设置ToolStripMenuItem)    str = "设置串口操作";

		if (item == 地图ToolStripMenuItem)   str = "当前为地图设置菜单项";

		if (item == 气体类型ToolStripMenuItem)   str = "当前为监控对象菜单项";

		if (item == 查看ToolStripMenuItem) str = "当前为格式菜单项";

		if (item == toolStripMenuItem1)  str = "当前为图像设置菜单项";

		if (item == 帮助ToolStripMenuItem)   str = "当前为帮助菜单项";

		if (item == 系统介绍ToolStripMenuItem)  str = "当前为系统介绍菜单项";

		if (item == 关于ToolStripMenuItem)     str = "当前为关于菜单项";

		if (item == 坐标设置ToolStripMenuItem)  str = "进行坐标的设置";

		if (item == 平滑度设置ToolStripMenuItem) str = "进行平滑度的设置";
		if (item == 工具栏ToolStripMenuItem)  str = "当前为工具栏菜单项";

		if (item == 状态栏ToolStripMenuItem)   str = "当前为状态栏菜单项";

		if (item == 字体ToolStripMenuItem)  str = "当前为字体菜单项";

		if (item == 自动换行ToolStripMenuItem)     str = "当前为自动换行菜单项";

		if (item == 期望值设置ToolStripMenuItem)  str = "进行期望值的设置";

		if (item == 有害气体ToolStripMenuItem) str = "检测对象为有害气体";
		if (item == 振荡度ToolStripMenuItem)  str = "监测对象为振荡度";

		if (item == 温度ToolStripMenuItem) str = "监测对象为温度";
		if (item == 湿度ToolStripMenuItem)  str = "监测对象为湿度";

		if (item == 显示地图ToolStripMenuItem)   str = "进行显示地图操作";

		if (item == 打开串口ToolStripMenuItem)  str = "打开串口操作";

		if (item == 关闭串口ToolStripMenuItem)     str = "关闭串口操作";

		if (item == 打开系统ToolStripMenuItem)  str = "打开系统操作";

		if (item == 关闭系统ToolStripMenuItem) str = "关闭系统操作";

		if (item == 工具栏ToolStripMenuItem){

			if (工具栏ToolStripMenuItem->Checked)str = "隐藏工具栏";

			else str = "显示工具栏";
		}

		if (item == 状态栏ToolStripMenuItem){

			if (状态栏ToolStripMenuItem->Checked) str = "隐藏状态栏";

			else str = "显示状态栏";
		}

		if (item == 字体ToolStripMenuItem)	 str = "设置显示的字体和颜色";

		if (item == 自动换行ToolStripMenuItem){

			if (自动换行ToolStripMenuItem->Checked) str = "取消自动换行";

			else str = "文本自动换行";
		}

		this->statusStrip1->Items[3]->Text = str; // 在状态栏上显示信息
	}
	private: System::Void 帮助ToolStripMenuItem_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void 格式设置ToolStripMenuItem_DropDownItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		ToolStripMenuItem^ item;

		if (e == nullptr)

			item = safe_cast<ToolStripMenuItem^>(sender);

		else

			item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);
		if (item == 曲线图ToolStripMenuItem)
		{
			chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			chart2->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			chart3->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			chart4->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
		}
		else if (item == 折线图ToolStripMenuItem)
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
	private: System::Void 坐标设置ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	private: System::Void 串口设置ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		//GetComList_Reg(dlg->comboBox1);

	}
	private: System::Void 打开串口ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void 关闭串口ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	}

	private:bool GetComList_Reg(ComboBox ^combox)
	{
		HKEY hkey;
		int result;
		int i = 0;
		result = RegOpenKeyEx(HKEY_LOCAL_MACHINE, _T("Hardware\\DeviceMap\\SerialComm"), NULL, KEY_READ, &hkey);
		//读注册表
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
					//枚举串口
					break;   //commName就是串口名字"COM2"
				}
				String ^strComName = gcnew String(commName);
				combox->Items->Add(strComName);
				i++;
			}
			RegCloseKey(hkey);
		}
		if (combox->Items->Count > 0)
		{
			combox->SelectedIndex = 0;//默认选中第一个
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

