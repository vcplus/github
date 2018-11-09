#pragma once
#include "SerialDlg.h"
#include "Windows.h"
#include "tchar.h"
#include "HelpForm.h"
#include "AboutForm.h"
#include "AlcoholForm.h"
#include "PMForm.h"
#include "TempForm.h"
#include "HumiForm.h"
#include "SearchForm.h"
#include "windows.h"
#include "SettingForm.h"

namespace AMCS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System::Text;

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




	private: System::Windows::Forms::ToolStripMenuItem^  systemToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  commToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  serialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  netToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  usbToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^  airToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  AlcoholToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  PMToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  TempToolStripMenuItem;





	private: System::Windows::Forms::ToolStripMenuItem^  viewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  statusToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fontToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wordwardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;



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
	private: System::Windows::Forms::ToolStripButton^  帮助LToolStripButton;






	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripProgressBar^  toolStripProgressBar1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel3;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel4;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel5;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel6;


	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;

	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::NotifyIcon^  notifyIcon1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;


	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::ToolStripMenuItem^  humiToolStripMenuItem;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::ToolStripMenuItem^  查看帮助ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  关于ToolStripMenuItem;
private: System::Windows::Forms::ListBox^  listBox1;
private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;
private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;





private: System::IO::Ports::SerialPort^  serialPort1;
private: System::Data::DataColumn^  dataColumn1;
private: System::Data::DataTable^  dataTable1;
private: System::Data::DataSet^  dataSet1;
private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::TextBox^  textBox3;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::ToolStripMenuItem^  图像设置ToolStripMenuItem;










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
			this->systemToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->commToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->serialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->netToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usbToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->airToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AlcoholToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->PMToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TempToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->humiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wordwardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->查看帮助ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->关于ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->图像设置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->帮助LToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
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
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->dataColumn1 = (gcnew System::Data::DataColumn());
			this->dataTable1 = (gcnew System::Data::DataTable());
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->systemToolStripMenuItem,
					this->commToolStripMenuItem, this->airToolStripMenuItem, this->viewToolStripMenuItem, this->helpToolStripMenuItem, this->图像设置ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 3, 0, 3);
			this->menuStrip1->Size = System::Drawing::Size(1362, 27);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::menuStrip1_ItemClicked);
			this->menuStrip1->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItemDefault);
			this->menuStrip1->MouseLeave += gcnew System::EventHandler(this, &Form1::On_MenuItemDefault);
			// 
			// systemToolStripMenuItem
			// 
			this->systemToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->openToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->systemToolStripMenuItem->Name = L"systemToolStripMenuItem";
			this->systemToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->systemToolStripMenuItem->Text = L"系统";
			this->systemToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::On_DoSystemMenu);
			this->systemToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItem);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->openToolStripMenuItem->Text = L"打开";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->exitToolStripMenuItem->Text = L"退出";
			// 
			// commToolStripMenuItem
			// 
			this->commToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->serialToolStripMenuItem,
					this->netToolStripMenuItem, this->usbToolStripMenuItem
			});
			this->commToolStripMenuItem->Name = L"commToolStripMenuItem";
			this->commToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->commToolStripMenuItem->Text = L"串口";
			this->commToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItem);
			// 
			// serialToolStripMenuItem
			// 
			this->serialToolStripMenuItem->Name = L"serialToolStripMenuItem";
			this->serialToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->serialToolStripMenuItem->Text = L"串口设置";
			this->serialToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::serialToolStripMenuItem_Click);
			// 
			// netToolStripMenuItem
			// 
			this->netToolStripMenuItem->Name = L"netToolStripMenuItem";
			this->netToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->netToolStripMenuItem->Text = L"打开串口";
			// 
			// usbToolStripMenuItem
			// 
			this->usbToolStripMenuItem->Name = L"usbToolStripMenuItem";
			this->usbToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->usbToolStripMenuItem->Text = L"关闭串口";
			// 
			// airToolStripMenuItem
			// 
			this->airToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->AlcoholToolStripMenuItem,
					this->PMToolStripMenuItem, this->TempToolStripMenuItem, this->humiToolStripMenuItem
			});
			this->airToolStripMenuItem->Name = L"airToolStripMenuItem";
			this->airToolStripMenuItem->Size = System::Drawing::Size(68, 21);
			this->airToolStripMenuItem->Text = L"气体类型";
			this->airToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItem);
			// 
			// AlcoholToolStripMenuItem
			// 
			this->AlcoholToolStripMenuItem->Name = L"AlcoholToolStripMenuItem";
			this->AlcoholToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->AlcoholToolStripMenuItem->Text = L"酒精";
			this->AlcoholToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::AlcoholToolStripMenuItem_Click);
			// 
			// PMToolStripMenuItem
			// 
			this->PMToolStripMenuItem->Name = L"PMToolStripMenuItem";
			this->PMToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->PMToolStripMenuItem->Text = L"PM2.5";
			this->PMToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::PMToolStripMenuItem_Click);
			// 
			// TempToolStripMenuItem
			// 
			this->TempToolStripMenuItem->Name = L"TempToolStripMenuItem";
			this->TempToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->TempToolStripMenuItem->Text = L"温度";
			this->TempToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::TempToolStripMenuItem_Click);
			// 
			// humiToolStripMenuItem
			// 
			this->humiToolStripMenuItem->Name = L"humiToolStripMenuItem";
			this->humiToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->humiToolStripMenuItem->Text = L"湿度";
			this->humiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::humiToolStripMenuItem_Click);
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolsToolStripMenuItem,
					this->statusToolStripMenuItem, this->fontToolStripMenuItem, this->wordwardToolStripMenuItem
			});
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->viewToolStripMenuItem->Text = L"查看";
			this->viewToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::On_DoViewMenu);
			this->viewToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItem);
			// 
			// toolsToolStripMenuItem
			// 
			this->toolsToolStripMenuItem->Name = L"toolsToolStripMenuItem";
			this->toolsToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->toolsToolStripMenuItem->Text = L"工具栏";
			// 
			// statusToolStripMenuItem
			// 
			this->statusToolStripMenuItem->Name = L"statusToolStripMenuItem";
			this->statusToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->statusToolStripMenuItem->Text = L"状态栏";
			// 
			// fontToolStripMenuItem
			// 
			this->fontToolStripMenuItem->Name = L"fontToolStripMenuItem";
			this->fontToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->fontToolStripMenuItem->Text = L"字体";
			// 
			// wordwardToolStripMenuItem
			// 
			this->wordwardToolStripMenuItem->Name = L"wordwardToolStripMenuItem";
			this->wordwardToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->wordwardToolStripMenuItem->Text = L"自动换行";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->查看帮助ToolStripMenuItem,
					this->关于ToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->helpToolStripMenuItem->Text = L"帮助";
			this->helpToolStripMenuItem->MouseEnter += gcnew System::EventHandler(this, &Form1::On_MenuItem);
			// 
			// 查看帮助ToolStripMenuItem
			// 
			this->查看帮助ToolStripMenuItem->Name = L"查看帮助ToolStripMenuItem";
			this->查看帮助ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->查看帮助ToolStripMenuItem->Text = L"查看帮助";
			this->查看帮助ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::查看帮助ToolStripMenuItem_Click);
			// 
			// 关于ToolStripMenuItem
			// 
			this->关于ToolStripMenuItem->Name = L"关于ToolStripMenuItem";
			this->关于ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->关于ToolStripMenuItem->Text = L"关于";
			this->关于ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::关于ToolStripMenuItem_Click);
			// 
			// 图像设置ToolStripMenuItem
			// 
			this->图像设置ToolStripMenuItem->Name = L"图像设置ToolStripMenuItem";
			this->图像设置ToolStripMenuItem->Size = System::Drawing::Size(68, 21);
			this->图像设置ToolStripMenuItem->Text = L"图像设置";
			this->图像设置ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::图像设置ToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->新建NToolStripButton,
					this->打开OToolStripButton, this->保存SToolStripButton, this->打印PToolStripButton, this->toolStripSeparator, this->剪切UToolStripButton,
					this->复制CToolStripButton, this->粘贴PToolStripButton, this->toolStripSeparator1, this->帮助LToolStripButton
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 27);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1362, 27);
			this->toolStrip1->TabIndex = 4;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// 新建NToolStripButton
			// 
			this->新建NToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->新建NToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"新建NToolStripButton.Image")));
			this->新建NToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->新建NToolStripButton->Name = L"新建NToolStripButton";
			this->新建NToolStripButton->Size = System::Drawing::Size(24, 24);
			this->新建NToolStripButton->Text = L"新建(&N)";
			// 
			// 打开OToolStripButton
			// 
			this->打开OToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->打开OToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打开OToolStripButton.Image")));
			this->打开OToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打开OToolStripButton->Name = L"打开OToolStripButton";
			this->打开OToolStripButton->Size = System::Drawing::Size(24, 24);
			this->打开OToolStripButton->Text = L"打开(&O)";
			this->打开OToolStripButton->Click += gcnew System::EventHandler(this, &Form1::OpenToolStripButton_Click);
			// 
			// 保存SToolStripButton
			// 
			this->保存SToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->保存SToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"保存SToolStripButton.Image")));
			this->保存SToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->保存SToolStripButton->Name = L"保存SToolStripButton";
			this->保存SToolStripButton->Size = System::Drawing::Size(24, 24);
			this->保存SToolStripButton->Text = L"保存(&S)";
			// 
			// 打印PToolStripButton
			// 
			this->打印PToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->打印PToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打印PToolStripButton.Image")));
			this->打印PToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打印PToolStripButton->Name = L"打印PToolStripButton";
			this->打印PToolStripButton->Size = System::Drawing::Size(24, 24);
			this->打印PToolStripButton->Text = L"打印(&P)";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 27);
			// 
			// 剪切UToolStripButton
			// 
			this->剪切UToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->剪切UToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"剪切UToolStripButton.Image")));
			this->剪切UToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->剪切UToolStripButton->Name = L"剪切UToolStripButton";
			this->剪切UToolStripButton->Size = System::Drawing::Size(24, 24);
			this->剪切UToolStripButton->Text = L"剪切(&U)";
			// 
			// 复制CToolStripButton
			// 
			this->复制CToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->复制CToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"复制CToolStripButton.Image")));
			this->复制CToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->复制CToolStripButton->Name = L"复制CToolStripButton";
			this->复制CToolStripButton->Size = System::Drawing::Size(24, 24);
			this->复制CToolStripButton->Text = L"复制(&C)";
			// 
			// 粘贴PToolStripButton
			// 
			this->粘贴PToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->粘贴PToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"粘贴PToolStripButton.Image")));
			this->粘贴PToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->粘贴PToolStripButton->Name = L"粘贴PToolStripButton";
			this->粘贴PToolStripButton->Size = System::Drawing::Size(24, 24);
			this->粘贴PToolStripButton->Text = L"粘贴(&P)";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 27);
			// 
			// 帮助LToolStripButton
			// 
			this->帮助LToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->帮助LToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"帮助LToolStripButton.Image")));
			this->帮助LToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->帮助LToolStripButton->Name = L"帮助LToolStripButton";
			this->帮助LToolStripButton->Size = System::Drawing::Size(24, 24);
			this->帮助LToolStripButton->Text = L"帮助(&L)";
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
			this->statusStrip1->Location = System::Drawing::Point(0, 708);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Padding = System::Windows::Forms::Padding(1, 0, 13, 0);
			this->statusStrip1->Size = System::Drawing::Size(1362, 33);
			this->statusStrip1->TabIndex = 6;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(131, 28);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(131, 28);
			this->toolStripStatusLabel2->Text = L"toolStripStatusLabel2";
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->Maximum = 60;
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(100, 27);
			this->toolStripProgressBar1->Step = 1;
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(864, 28);
			this->toolStripStatusLabel3->Spring = true;
			// 
			// toolStripStatusLabel4
			// 
			this->toolStripStatusLabel4->AutoSize = false;
			this->toolStripStatusLabel4->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
			this->toolStripStatusLabel4->BorderStyle = System::Windows::Forms::Border3DStyle::SunkenOuter;
			this->toolStripStatusLabel4->Name = L"toolStripStatusLabel4";
			this->toolStripStatusLabel4->Size = System::Drawing::Size(40, 28);
			// 
			// toolStripStatusLabel5
			// 
			this->toolStripStatusLabel5->AutoSize = false;
			this->toolStripStatusLabel5->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
			this->toolStripStatusLabel5->BorderStyle = System::Windows::Forms::Border3DStyle::SunkenOuter;
			this->toolStripStatusLabel5->Name = L"toolStripStatusLabel5";
			this->toolStripStatusLabel5->Size = System::Drawing::Size(40, 28);
			// 
			// toolStripStatusLabel6
			// 
			this->toolStripStatusLabel6->AutoSize = false;
			this->toolStripStatusLabel6->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
			this->toolStripStatusLabel6->BorderStyle = System::Windows::Forms::Border3DStyle::SunkenOuter;
			this->toolStripStatusLabel6->Name = L"toolStripStatusLabel6";
			this->toolStripStatusLabel6->Size = System::Drawing::Size(40, 28);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::Timer1Tick);
			// 
			// chart3
			// 
			chartArea1->AxisX->ScaleView->Size = 8;
			chartArea1->AxisX->ScrollBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			chartArea1->AxisX->ScrollBar->ButtonColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			chartArea1->AxisY->Maximum = 30;
			chartArea1->AxisY->Minimum = 20;
			chartArea1->CursorX->IsUserEnabled = true;
			chartArea1->CursorX->IsUserSelectionEnabled = true;
			chartArea1->CursorY->IsUserEnabled = true;
			chartArea1->CursorY->IsUserSelectionEnabled = true;
			chartArea1->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart3->Legends->Add(legend1);
			this->chart3->Location = System::Drawing::Point(17, 386);
			this->chart3->Margin = System::Windows::Forms::Padding(4);
			this->chart3->Name = L"chart3";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->IsValueShownAsLabel = true;
			series1->Legend = L"Legend1";
			series1->LegendText = L"温度";
			series1->MarkerColor = System::Drawing::Color::Green;
			series1->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Square;
			series1->Name = L"Series1";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::String;
			this->chart3->Series->Add(series1);
			this->chart3->Size = System::Drawing::Size(501, 237);
			this->chart3->TabIndex = 7;
			this->chart3->Text = L"chart1";
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			// 
			// chart1
			// 
			chartArea2->AxisX->ScaleView->Size = 8;
			chartArea2->AxisX->ScrollBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			chartArea2->AxisX->ScrollBar->ButtonColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			chartArea2->CursorX->IsUserEnabled = true;
			chartArea2->CursorX->IsUserSelectionEnabled = true;
			chartArea2->CursorY->IsUserEnabled = true;
			chartArea2->CursorY->IsUserSelectionEnabled = true;
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(17, 75);
			this->chart1->Margin = System::Windows::Forms::Padding(4);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->IsValueShownAsLabel = true;
			series2->Legend = L"Legend1";
			series2->LegendText = L"酒精浓度";
			series2->MarkerColor = System::Drawing::Color::Green;
			series2->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Square;
			series2->Name = L"Series1";
			series2->ToolTip = L"#VAL{D} #VAL";
			series2->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::String;
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(501, 247);
			this->chart1->TabIndex = 10;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			chartArea3->AxisX->ScaleView->Size = 8;
			chartArea3->AxisX->ScrollBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			chartArea3->AxisX->ScrollBar->ButtonColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			chartArea3->CursorX->IsUserEnabled = true;
			chartArea3->CursorX->IsUserSelectionEnabled = true;
			chartArea3->CursorY->IsUserEnabled = true;
			chartArea3->CursorY->IsUserSelectionEnabled = true;
			chartArea3->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart2->Legends->Add(legend3);
			this->chart2->Location = System::Drawing::Point(549, 75);
			this->chart2->Margin = System::Windows::Forms::Padding(4);
			this->chart2->Name = L"chart2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->IsValueShownAsLabel = true;
			series3->LabelBackColor = System::Drawing::Color::White;
			series3->LabelBorderColor = System::Drawing::Color::White;
			series3->Legend = L"Legend1";
			series3->LegendText = L"PM2.5";
			series3->MarkerColor = System::Drawing::Color::Green;
			series3->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Square;
			series3->Name = L"Series1";
			series3->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::String;
			this->chart2->Series->Add(series3);
			this->chart2->Size = System::Drawing::Size(494, 247);
			this->chart2->TabIndex = 11;
			this->chart2->Text = L"chart2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"黑体", 16));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Location = System::Drawing::Point(195, 37);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 22);
			this->label1->TabIndex = 12;
			this->label1->Text = L"酒精浓度";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"黑体", 16));
			this->label2->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label2->Location = System::Drawing::Point(717, 37);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 22);
			this->label2->TabIndex = 12;
			this->label2->Text = L"PM2.5";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Lime;
			this->button3->ForeColor = System::Drawing::Color::Lime;
			this->button3->Location = System::Drawing::Point(419, 337);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(47, 41);
			this->button3->TabIndex = 0;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Lime;
			this->button2->ForeColor = System::Drawing::Color::Lime;
			this->button2->Location = System::Drawing::Point(831, 29);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(47, 41);
			this->button2->TabIndex = 0;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Lime;
			this->button4->ForeColor = System::Drawing::Color::Lime;
			this->button4->Location = System::Drawing::Point(831, 337);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(47, 41);
			this->button4->TabIndex = 0;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// chart4
			// 
			chartArea4->AxisX->ScaleView->Size = 8;
			chartArea4->AxisX->ScrollBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			chartArea4->AxisX->ScrollBar->ButtonColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			chartArea4->CursorX->IsUserEnabled = true;
			chartArea4->CursorX->IsUserSelectionEnabled = true;
			chartArea4->CursorY->IsUserEnabled = true;
			chartArea4->CursorY->IsUserSelectionEnabled = true;
			chartArea4->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart4->Legends->Add(legend4);
			this->chart4->Location = System::Drawing::Point(549, 386);
			this->chart4->Margin = System::Windows::Forms::Padding(4);
			this->chart4->Name = L"chart4";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->IsValueShownAsLabel = true;
			series4->Legend = L"Legend1";
			series4->LegendText = L"湿度";
			series4->MarkerColor = System::Drawing::Color::Green;
			series4->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Square;
			series4->Name = L"Series1";
			series4->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::String;
			this->chart4->Series->Add(series4);
			this->chart4->Size = System::Drawing::Size(494, 237);
			this->chart4->TabIndex = 7;
			this->chart4->Text = L"chart1";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->ForeColor = System::Drawing::Color::Lime;
			this->button1->Location = System::Drawing::Point(419, 33);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(47, 41);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"宋体", 16));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"第一车厢", L"第二车厢", L"第三车厢" });
			this->comboBox1->Location = System::Drawing::Point(22, 333);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(172, 29);
			this->comboBox1->TabIndex = 14;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"黑体", 16));
			this->label3->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label3->Location = System::Drawing::Point(215, 345);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 22);
			this->label3->TabIndex = 15;
			this->label3->Text = L"温度";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"黑体", 16));
			this->label4->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label4->Location = System::Drawing::Point(717, 345);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 22);
			this->label4->TabIndex = 16;
			this->label4->Text = L"湿度";
			// 
			// groupBox1
			// 
			this->groupBox1->AutoSize = true;
			this->groupBox1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->chart3);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->chart1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->chart2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->chart4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12));
			this->groupBox1->ForeColor = System::Drawing::Color::BlueViolet;
			this->groupBox1->Location = System::Drawing::Point(411, 58);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(1051, 650);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"实时显示";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"黑体", 16));
			this->label5->Location = System::Drawing::Point(17, 305);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(98, 22);
			this->label5->TabIndex = 18;
			this->label5->Text = L"选择车厢";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 16));
			this->button5->Location = System::Drawing::Point(21, 370);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(173, 107);
			this->button5->TabIndex = 17;
			this->button5->Text = L"查询历史数据";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(22, 480);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(383, 228);
			this->listBox1->TabIndex = 17;
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = resources->GetString(L"oleDbSelectCommand1.CommandText");
			// 
			// dataColumn1
			// 
			this->dataColumn1->ColumnName = L"Column1";
			// 
			// dataTable1
			// 
			this->dataTable1->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(1) { this->dataColumn1 });
			this->dataTable1->TableName = L"Table1";
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			this->dataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) { this->dataTable1 });
			// 
			// oleDbConnection1
			// 
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\张紫萱\\Desktop\\Database1.accd"
				L"b";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"黑体", 12));
			this->textBox1->Location = System::Drawing::Point(6, 25);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(188, 29);
			this->textBox1->TabIndex = 17;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(30, 176);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 16);
			this->label6->TabIndex = 17;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->groupBox2->Location = System::Drawing::Point(204, 305);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 172);
			this->groupBox2->TabIndex = 17;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"车厢内环境评定";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox4->Font = (gcnew System::Drawing::Font(L"黑体", 12));
			this->textBox4->Location = System::Drawing::Point(6, 130);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(188, 29);
			this->textBox4->TabIndex = 17;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox3->Font = (gcnew System::Drawing::Font(L"黑体", 12));
			this->textBox3->Location = System::Drawing::Point(6, 95);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(188, 29);
			this->textBox3->TabIndex = 17;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox2->Font = (gcnew System::Drawing::Font(L"黑体", 12));
			this->textBox2->Location = System::Drawing::Point(6, 60);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(188, 29);
			this->textBox2->TabIndex = 17;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(21, 58);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(383, 241);
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(1362, 741);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"宋体", 12));
			this->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"气体检测系统";
			this->Load += gcnew System::EventHandler(this, &Form1::On_Load);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseMove);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: delegate void data();
	    public:SerialDlg ^dlg = gcnew SerialDlg();
		public:static String ^receive_data;
			 //  public: array<float>^ firstcomponent;
	//public: static array<String^>^ firstcomponent ;
	//public: static array<String^>^ secondcomponent = gcnew array<String^>(100);
	//public: static array<String^>^ thirdcomponent = gcnew array<String^>(100);

private: System::Void On_DoSystemMenu(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
			 ToolStripMenuItem^ item;
			 if (e == nullptr)
				 item = safe_cast<ToolStripMenuItem^>(sender);
			 else
				 item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);
			 if (item == openToolStripMenuItem)
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
					 statusStrip1->Items[3]->Text= "就绪";
					 statusStrip1->Items[3]->Text =pOFD->FileName;
				 }
			 }
			 else if (item == exitToolStripMenuItem)
				 this->Close();
}
private: System::Void serialToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 SerialDlg ^dlg = gcnew SerialDlg();
			 GetComList_Reg(dlg->comboBox1);
			 dlg->ShowDialog();
}
//public:static bool Beep(int freq, int duration);
// public: void play()
//	   {
//		   //调用  
//		   Beep(800, 3000);
//	   }

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
					if (buff->Length>32)
					{
						listBox1->Items->Add(buff);
						array<String^> ^split = gcnew array<String^>(12);
						//split = gcnew array<String^>{L"0", L"0", L"0", L"0"};
						split = buff->Split(59);
						DateTime dateTime = DateTime::Now;             //获取系统当前时间
						//********连接数据库并存储*******************//////
						strConn = String::Format("Provider=Microsoft.Jet.OLEDB.4.0; Data Source=AMCS.mdb");
						OleDbConnection^ con1 = gcnew OleDbConnection(strConn);
						//********选择车厢后画图并存储数据********// 
						int nIndex = this->comboBox1->SelectedIndex;
						if (nIndex < 0) return;
						String^ strTableName = this->comboBox1->Items[nIndex]->ToString();
						String^ sql1;
						String^ sql2;
						String^ sql3;
						String^ sql4;
						con1->Open();    // 打开连接
						sql1 = "INSERT INTO 第一车厢数据表([酒精浓度],[PM浓度],[温度],[湿度],[日期时间],[对应车厢]) VALUES( " + split[0] + " , " + split[1] + " , " + split[2] + ", " + split[3] + ",Now() , '第一车厢' )";
						OleDbCommand^ comm1 = gcnew OleDbCommand(sql1, con1);
						comm1->ExecuteNonQuery();											
						sql2 = "INSERT INTO 第二车厢数据表([酒精浓度],[PM浓度],[温度],[湿度],[日期时间],[对应车厢]) VALUES( " + split[4] + " , " + split[5] + " , " + split[6] + ", " + split[7] + ",Now() , '第二车厢' )";
						OleDbCommand^ comm2 = gcnew OleDbCommand(sql2, con1);
						comm2->ExecuteNonQuery();
						//con1->Close();
						//con1->Open();    // 打开连接
						sql3 = "INSERT INTO 第三车厢数据表([酒精浓度],[PM浓度],[温度],[湿度],[日期时间],[对应车厢]) VALUES( " + split[8] + " , " + split[9] + " , " + split[10] + ", " + split[11] + ",Now() , '第三车厢' )";
						OleDbCommand^ comm3 = gcnew OleDbCommand(sql3, con1);
						comm3->ExecuteNonQuery();
						con1->Close();
						if (strTableName == "第一车厢")
						{
							if (split[0] != nullptr&&split[1] != nullptr&&split[2] != nullptr&&split[3] != nullptr)
							{
								
								chart1->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[0]);
								chart1->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
								if (Int32::Parse(split[0])<0 || Int32::Parse(split[0])>100)  //酒精超限报警
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
									/*Sleep(100);*/
								}
								else UpdateColor2(button1);
								chart2->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[1]);
								chart2->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
								if (Int32::Parse(split[1])<0 || Int32::Parse(split[1])>150)  //PM2.5超限报警
								{
									UpdateColor1(button2);
									this->chart2->Series["Series1"]->Points[this->chart2->Series["Series1"]->Points->Count - 1]->MarkerColor = Color::FromArgb(255, 0, 0);
									if (split[1] != nullptr)
									{
										con1->Open();    // 打开连接
										sql4= "INSERT INTO 异常数据表_PM([PM浓度],[PM日期时间],[PM对应车厢]) VALUES( " + split[1] + " ,Now() , '" + strTableName + "'  )";
										OleDbCommand^ comm2 = gcnew OleDbCommand(sql4, con1); comm2->ExecuteNonQuery();
										con1->Close();
									}
									//Sleep(100);
								}
								else
								{
									UpdateColor2(button2);
								}
								chart3->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[2]);
								chart3->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
								if (float::Parse(split[2])<26 || float::Parse(split[2])>28)  //温度超限报警
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
								}
								chart4->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[3]);
								chart4->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
								if (Int32::Parse(split[3])<45 || Int32::Parse(split[3])>75)  //湿度超限报警
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
								}

								//分析
								if (Int32::Parse(split[0]) <= 50)  this->textBox1->Text = "安全";
								else if (Int32::Parse(split[0]) > 50 && Int32::Parse(split[0]) <= 100) this->textBox1->Text = "有安全隐患，请及时排查！";
								else if (Int32::Parse(split[0]) > 100)this->textBox1->Text = "警告！危险！";

								if (Int32::Parse(split[1])<50)  this->textBox1->Text = "车厢内空气质量优";
								else if (Int32::Parse(split[1])>50 && Int32::Parse(split[1])<100) this->textBox2->Text = "车厢内空气质量良好";
								else if (Int32::Parse(split[1])>100 && Int32::Parse(split[1])<150) this->textBox2->Text = "车厢内空气轻度污染";
								else if (Int32::Parse(split[1])>150 && Int32::Parse(split[1])<200) this->textBox2->Text = "车厢内空气中度污染";
								else if (Int32::Parse(split[1])>200 && Int32::Parse(split[1])<300) this->textBox2->Text = "车厢内空气重度污染";
								else this->textBox2->Text = "车厢内空气严重污染";

								if (float::Parse(split[2]) > 26 && float::Parse(split[2]) < 28) this->textBox3->Text = "车厢内温度适宜";
								else if (float::Parse(split[2]) <26) this->textBox3->Text = "车厢内温度偏低";
								else if (float::Parse(split[2]) >28) this->textBox3->Text = "车厢内温度偏高";

								if (Int32::Parse(split[3])<45)  this->textBox4->Text = "车厢内干燥，多喝水";
								else if (Int32::Parse(split[3]) >= 45 && Int32::Parse(split[3]) <= 75)  this->textBox4->Text = "车厢内环境舒适";
								else if (Int32::Parse(split[3])>75) this->textBox4->Text = "车厢内潮湿";
								if ((Int32::Parse(split[0])<0 || Int32::Parse(split[0])>100) && (Int32::Parse(split[1])<0 || Int32::Parse(split[1])>150) && (float::Parse(split[2])<26 || float::Parse(split[2])>28) && (Int32::Parse(split[3])<45 || Int32::Parse(split[3])>75))
								{
									//play();
									this->textBox2->Text = "车厢内环境差";
								}
							}
						}
						else if (strTableName == "第二车厢")
						{

							if (split[4] != nullptr&&split[5] != nullptr&&split[6] != nullptr&&split[7] != nullptr)
							{
								
								chart1->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[4]);
								chart1->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
								if (Int32::Parse(split[4])<0 || Int32::Parse(split[4])>100)  //酒精超限报警
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
									/*Sleep(100);*/
								}
								else UpdateColor2(button1);
								chart2->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[5]);
								chart2->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
								if (Int32::Parse(split[5])<0 || Int32::Parse(split[5])>150)  //PM2.5超限报警
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
								}
								chart3->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[6]);
								chart3->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
								if (float::Parse(split[6])<26 || float::Parse(split[6])>28)  //温度超限报警
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
								}
								chart4->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[7]);
								chart4->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
								if (Int32::Parse(split[7])<45 || Int32::Parse(split[7])>75)  //湿度超限报警
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
								}

								//分析
								if (Int32::Parse(split[4]) <= 50)  this->textBox1->Text = "安全";
								else if (Int32::Parse(split[4]) > 50 && Int32::Parse(split[4]) <= 100) this->textBox1->Text = "有安全隐患，请及时排查！";
								else if (Int32::Parse(split[4]) > 100)this->textBox1->Text = "警告！危险！";

								if (Int32::Parse(split[5])<50)  this->textBox1->Text = "车厢内空气质量优";
								else if (Int32::Parse(split[5])>50 && Int32::Parse(split[5])<100) this->textBox2->Text = "车厢内空气质量良好";
								else if (Int32::Parse(split[5])>100 && Int32::Parse(split[5])<150) this->textBox2->Text = "车厢内空气轻度污染";
								else if (Int32::Parse(split[5])>150 && Int32::Parse(split[5])<200) this->textBox2->Text = "车厢内空气中度污染";
								else if (Int32::Parse(split[5])>200 && Int32::Parse(split[5])<300) this->textBox2->Text = "车厢内空气重度污染";
								else this->textBox2->Text = "车厢内空气严重污染";

								if (float::Parse(split[6]) > 26 && float::Parse(split[6]) < 28) this->textBox3->Text = "车厢内温度适宜";
								else if (float::Parse(split[6]) <26) this->textBox3->Text = "车厢内温度偏低";
								else if (float::Parse(split[6]) >28) this->textBox3->Text = "车厢内温度偏高";

								if (Int32::Parse(split[7])<45)  this->textBox4->Text = "车厢内干燥，多喝水";
								else if (Int32::Parse(split[7]) >= 45 && Int32::Parse(split[7]) <= 75)  this->textBox4->Text = "车厢内环境舒适";
								else if (Int32::Parse(split[7])>75) this->textBox4->Text = "车厢内潮湿";
								if ((Int32::Parse(split[4])<0 || Int32::Parse(split[4])>100) && (Int32::Parse(split[5])<0 || Int32::Parse(split[5])>150) && (float::Parse(split[6])<26 || float::Parse(split[6])>28) && (Int32::Parse(split[7])<45 || Int32::Parse(split[7])>75))
								{
									//play();
									this->textBox2->Text = "车厢内环境差";
								}
							}
						}
						else if (strTableName == "第三车厢")
						{
							if (split[8] != nullptr&&split[9] != nullptr&&split[10] != nullptr&&split[11] != nullptr)
							{
								
								chart1->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[8]);
								chart1->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
								if (Int32::Parse(split[8])<0 || Int32::Parse(split[8])>100)  //酒精超限报警
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
									/*Sleep(100);*/
								}
								else UpdateColor2(button1);
								chart2->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[9]);
								chart2->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
								if (Int32::Parse(split[9])<0 || Int32::Parse(split[9])>150)  //PM2.5超限报警
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
								}
								chart3->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[10]);
								chart3->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
								if (float::Parse(split[10])<26 || float::Parse(split[10])>28)  //温度超限报警
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
								}
								chart4->Series["Series1"]->Points->AddXY(dateTime.ToLongTimeString(), split[11]);
								chart4->ChartAreas["ChartArea1"]->AxisX->ScaleView->Scroll(System::Windows::Forms::DataVisualization::Charting::ScrollType::Last);
								if (Int32::Parse(split[11])<45 || Int32::Parse(split[11])>75)  //湿度超限报警
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
								}

								//分析
								if (Int32::Parse(split[8]) <= 50)  this->textBox1->Text = "安全";
								else if (Int32::Parse(split[8]) > 50 && Int32::Parse(split[8]) <= 100) this->textBox1->Text = "有安全隐患，请及时排查！";
								else if (Int32::Parse(split[8]) > 100)this->textBox1->Text = "警告！危险！";

								if (Int32::Parse(split[9])<50)  this->textBox1->Text = "车厢内空气质量优";
								else if (Int32::Parse(split[9])>50 && Int32::Parse(split[9])<100) this->textBox2->Text = "车厢内空气质量良好";
								else if (Int32::Parse(split[9])>100 && Int32::Parse(split[9])<150) this->textBox2->Text = "车厢内空气轻度污染";
								else if (Int32::Parse(split[9])>150 && Int32::Parse(split[9])<200) this->textBox2->Text = "车厢内空气中度污染";
								else if (Int32::Parse(split[9])>200 && Int32::Parse(split[9])<300) this->textBox2->Text = "车厢内空气重度污染";
								else this->textBox2->Text = "车厢内空气严重污染";

								if (float::Parse(split[10]) > 26 && float::Parse(split[10]) < 28) this->textBox3->Text = "车厢内温度适宜";
								else if (float::Parse(split[10]) <26) this->textBox3->Text = "车厢内温度偏低";
								else if (float::Parse(split[10]) >28) this->textBox3->Text = "车厢内温度偏高";

								if (Int32::Parse(split[11])<45)  this->textBox4->Text = "车厢内干燥，多喝水";
								else if (Int32::Parse(split[11]) >= 45 && Int32::Parse(split[11]) <= 75)  this->textBox4->Text = "车厢内环境舒适";
								else if (Int32::Parse(split[11])>75) this->textBox4->Text = "车厢内潮湿";
								if ((Int32::Parse(split[8])<0 || Int32::Parse(split[8])>100) && (Int32::Parse(split[9])<0 || Int32::Parse(split[9])>150) && (float::Parse(split[10])<26 || float::Parse(split[10])>28) && (Int32::Parse(split[11])<45 || Int32::Parse(split[11])>75))
								{
									//play();
									this->textBox2->Text = "车厢内环境差";
								}
							}
						}
					  }
					}
				}
 }

private: String^ strConn;
private: System::Void On_Load(System::Object^  sender, System::EventArgs^  e) 
{
			 this->toolsToolStripMenuItem->Checked = true;
			 this->statusToolStripMenuItem->Checked = true;
		
			 //chart1->Series["Series1"]->ToolTip = "浓度(ppm):#VAL";
			 //chart2->Series["Series1"]->ToolTip = "浓度(ppm):#VAL";
			 //chart3->Series["Series1"]->ToolTip = "温度(℃):#VAL";
			 //chart4->Series["Series1"]->ToolTip = "湿度(%):#VAL";
}
private: System::Void On_DoViewMenu(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
			 ToolStripMenuItem^ item;
			 if (e == nullptr)
				 item = safe_cast<ToolStripMenuItem^>(sender);
			 else
				 item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);
			 if (item == toolsToolStripMenuItem)      //“工具栏”菜单项
			 {
				 toolsToolStripMenuItem->Checked = !toolsToolStripMenuItem->Checked;
				 //显示/隐藏工具栏
				 toolStrip1->Visible = toolsToolStripMenuItem->Checked;
			 }
			 else if ( item ==statusToolStripMenuItem)    // “状态栏”菜单项
			 {
			 statusToolStripMenuItem->Checked= !statusToolStripMenuItem->Checked;
			 // 显示/隐藏状态栏
			 statusStrip1->Visible  = statusToolStripMenuItem->Checked;
			 }
			 else if (item == fontToolStripMenuItem)    // “字体”菜单项
			 {
				 FontDialog ^fDlg = gcnew FontDialog();
				 fDlg->ShowColor = true;
				 fDlg->ShowEffects = true;
				 if (fDlg->ShowDialog() == Windows::Forms::DialogResult::OK)
				 {
				//	 textBox2->Font = fDlg->Font;
				//	 textBox2->ForeColor = fDlg->Color;
				 }
			 }
			 else if (item == wordwardToolStripMenuItem)  // “自动换行”菜单项
			 {
				 wordwardToolStripMenuItem->Checked = !wordwardToolStripMenuItem->Checked;
			
			 }
}
private: System::Void OpenToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 On_DoSystemMenu(openToolStripMenuItem, nullptr);
}
private: System::Void Timer1Tick(System::Object^  sender, System::EventArgs^  e) {
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
			 data_receivce();//数据接收	
}
private: System::Void On_MenuItem(System::Object^  sender, System::EventArgs^  e) {
			 String^ str = "就绪";
			 ToolStripMenuItem^ item = safe_cast<ToolStripMenuItem^>(sender);
			 if (item == systemToolStripMenuItem)  str = "打开一个文件或退出程序...";
			 if (item == openToolStripMenuItem) str = "打开一个文本文件...";
			 if (item == exitToolStripMenuItem)  str = "退出应用程序...";
			 if (item == commToolStripMenuItem)  str = "设置通信接口操作...";
			 if (item == serialToolStripMenuItem)    str = "设置串口操作...";
			 if (item == netToolStripMenuItem)   str = "设置网络接口操作...";
			 if (item == usbToolStripMenuItem)   str = "设置USB接口操作...";
			 if (item == airToolStripMenuItem)  str = "查看监控参数...";
			 if (item == AlcoholToolStripMenuItem)   str = "查看酒精气体浓度";
			 if (item == PMToolStripMenuItem)  str = "查看PM2.5浓度";
			 if (item == TempToolStripMenuItem)     str = "查看温度";
			 if (item == humiToolStripMenuItem)     str = "查看湿度";
			 if (item == viewToolStripMenuItem)  str = "查看状态设置...";
			 if (item == helpToolStripMenuItem) str = "帮助...";
			 if (item == toolsToolStripMenuItem){
				 if (toolsToolStripMenuItem->Checked)str = "隐藏工具栏...";
				 else str = "显示工具栏...";
			 }
			 if (item == statusToolStripMenuItem){
				 if (statusToolStripMenuItem->Checked)str = "隐藏状态栏...";
				 else str = "显示状态栏...";
			 }
			 if (item == fontToolStripMenuItem)  str = "设置显示的字体和颜色...";
			 if (item == wordwardToolStripMenuItem){
				 if (wordwardToolStripMenuItem->Checked) str = "取消自动换行...";
				 else str = "文本自动换行...";
			 }
			 this->statusStrip1->Items[3]->Text = str; // 在状态栏上显示信息
}

private: System::Void On_MenuItemDefault(System::Object^  sender, System::EventArgs^  e) {
			 // 在状态栏上显示信息
			 this->statusStrip1->Items[3]->Text = "就绪";
}
private: System::Void Form1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 String ^str = "X=" + e->X.ToString() + ",Y=" + e->Y.ToString();
			 this->toolStripStatusLabel3->Text = str;
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
private: System::Void huanyuan(System::Object^  sender, System::EventArgs^  e) {
			 this->notifyIcon1->Visible = false;
			 this->Show();
			 //为窗体还原的实现。
			 this->WindowState = System::Windows::Forms::FormWindowState::Normal;
}
private: System::Void tuichu(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}

//private: System::Void serial_DataReceived(System::Object^  sender, System::IO::Ports::SerialDataReceivedEventArgs^  e) {
//
//
//			 /*receive_data = dlg->com->ReadExisting();
//			 this->textBox3->Text = receive_data;*/
//			 if (dlg->com->IsOpen)
//			 {
//				 if (dlg->com->BytesToRead > 0)
//				 {
//					 char ch = (char)dlg->com->ReadByte();
//					 receive_data += ch.ToString();
//				 }
//			 }
//			 else
//				 MessageBox::Show("未打开串口");
//			 //this->textBox3->Text = receive_data;
//}
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

	//color1 = Color::FromArgb(255, 0, 0);
	color2 = Color::FromArgb(0, 255, 0);
	//button->BackColor = color1;
	//Sleep(1000);
	button->BackColor = color2;
}
private: System::Void 查看帮助ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 HelpForm^dlg = gcnew HelpForm();
			 dlg->ShowDialog();
}
private: System::Void 关于ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 AboutForm^dlg = gcnew AboutForm();
			 dlg->ShowDialog();
}
private: System::Void AlcoholToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 AlcoholForm^dlg = gcnew AlcoholForm();
			 dlg->ShowDialog();
}
private: System::Void PMToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 PMForm^dlg = gcnew PMForm();
			 dlg->ShowDialog();
}
private: System::Void TempToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 TempForm^dlg = gcnew TempForm();
			 dlg->ShowDialog();
}

private: System::Void humiToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 HumiForm^dlg = gcnew HumiForm();
			 dlg->ShowDialog();

}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			SearchForm^dlg = gcnew SearchForm();
			 dlg->ShowDialog();
}



private: System::Void odbcDataAdapter1_RowUpdated(System::Object^  sender, System::Data::Odbc::OdbcRowUpdatedEventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			
}
private: System::Void serialPort1_DataReceived(System::Object^  sender, System::IO::Ports::SerialDataReceivedEventArgs^  e) {
			 //strConn = String::Format("Provider=Microsoft.Jet.OLEDB.4.0; Data Source=AMCS.mdb");

			 //OleDbConnection^ con1 = gcnew OleDbConnection(strConn);

			 //con1->Open();    // 打开连接	 
			 //int nIndex = this->comboBox1->SelectedIndex;
			 //if (nIndex < 0) return;
			 //String^ strTableName = this->comboBox1->Items[nIndex]->ToString();
			 //String^ sql;
			 //if (strTableName == "第一车厢")
			 //{
				//  sql = "INSERT INTO 第一车厢数据表([参数类型],[参数浓度],[日期时间],[对应车厢]) VALUES('酒精' , " + split[0] + " ,Now() , '第一车厢' )";
				//  sql = "INSERT INTO 第一车厢数据表([参数类型],[参数浓度],[日期时间],[对应车厢]) VALUES('PM2.5' , " + split[1] + " ,Now() , '第一车厢' )";
				//  sql = "INSERT INTO 第一车厢数据表([参数类型],[参数浓度],[日期时间],[对应车厢]) VALUES('温度' , " + split[2] + " ,Now() , '第一车厢' )";
				//  sql = "INSERT INTO 第一车厢数据表([参数类型],[参数浓度],[日期时间],[对应车厢]) VALUES('湿度' , " + split[3] + " ,Now() , '第一车厢' )";
			 //}
			 //else if (strTableName == "第二车厢")
			 //{
				// sql = "INSERT INTO 第二车厢数据表([参数类型],[参数浓度],[日期时间],[对应车厢]) VALUES('酒精' , " + split[0] + " ,Now() , '第二车厢' )";
				// sql = "INSERT INTO 第二车厢数据表([参数类型],[参数浓度],[日期时间],[对应车厢]) VALUES('PM2.5' , " + split[1] + " ,Now() , '第二车厢' )";
				// sql = "INSERT INTO 第二车厢数据表([参数类型],[参数浓度],[日期时间],[对应车厢]) VALUES('温度' , " + split[2] + " ,Now() , '第二车厢' )";
				// sql = "INSERT INTO 第二车厢数据表([参数类型],[参数浓度],[日期时间],[对应车厢]) VALUES('湿度' , " + split[3] + " ,Now() , '第二车厢' )";
			 //}
			 //else if (strTableName == "第三车厢")
			 //{
				// sql = "INSERT INTO 第三车厢数据表([参数类型],[参数浓度],[日期时间],[对应车厢]) VALUES('酒精' , " + split[0] + " ,Now() , '第三车厢' )";
				// sql = "INSERT INTO 第三车厢数据表([参数类型],[参数浓度],[日期时间],[对应车厢]) VALUES('PM2.5' , " + split[1] + " ,Now() , '第三车厢' )";
				// sql = "INSERT INTO 第三车厢数据表([参数类型],[参数浓度],[日期时间],[对应车厢]) VALUES('温度' , " + split[2] + " ,Now() , '第三车厢' )";
				// sql = "INSERT INTO 第三车厢数据表([参数类型],[参数浓度],[日期时间],[对应车厢]) VALUES('湿度' , " + split[3] + " ,Now() , '第三车厢' )";
			 //}

			 //OleDbCommand^ comm = gcnew OleDbCommand(sql, con1);
			 //comm->ExecuteNonQuery();
			 //con1->Close();
}
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
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
private: System::Void 图像设置ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 SettingForm ^dlg = gcnew SettingForm();
			 dlg->numericUpDown1->Value = System::Convert::ToDecimal(chart1->ChartAreas["ChartArea1"]->AxisY->Minimum);
			 dlg->numericUpDown2->Value = System::Convert::ToDecimal(chart1->ChartAreas["ChartArea1"]->AxisY->Maximum);
			 dlg->numericUpDown6->Value = System::Convert::ToDecimal(chart2->ChartAreas["ChartArea1"]->AxisY->Minimum);
			 dlg->numericUpDown5->Value = System::Convert::ToDecimal(chart2->ChartAreas["ChartArea1"]->AxisY->Maximum);
			 dlg->numericUpDown4->Value = System::Convert::ToDecimal(chart3->ChartAreas["ChartArea1"]->AxisY->Minimum);
			 dlg->numericUpDown3->Value = System::Convert::ToDecimal(chart3->ChartAreas["ChartArea1"]->AxisY->Maximum);
			 dlg->numericUpDown8->Value = System::Convert::ToDecimal(chart4->ChartAreas["ChartArea1"]->AxisY->Minimum);
			 dlg->numericUpDown7->Value = System::Convert::ToDecimal(chart4->ChartAreas["ChartArea1"]->AxisY->Maximum);
			 dlg->ShowDialog();
			 if (dlg->DialogResult == Windows::Forms::DialogResult::OK)
			 {
				 chart1->Series["Series1"]->Color = changeColor(dlg->comboBox1->SelectedIndex);
				 chart2->Series["Series1"]->Color = changeColor(dlg->comboBox2->SelectedIndex);
				 chart3->Series["Series1"]->Color = changeColor(dlg->comboBox3->SelectedIndex);
				 chart4->Series["Series1"]->Color = changeColor(dlg->comboBox4->SelectedIndex);
				 chart1->ChartAreas["ChartArea1"]->AxisY->Minimum = double(dlg->numericUpDown1->Value);
				 chart1->ChartAreas["ChartArea1"]->AxisY->Maximum = double(dlg->numericUpDown2->Value);
				 chart2->ChartAreas["ChartArea1"]->AxisY->Minimum = double(dlg->numericUpDown6->Value);
				 chart2->ChartAreas["ChartArea1"]->AxisY->Maximum = double(dlg->numericUpDown5->Value);
				 chart3->ChartAreas["ChartArea1"]->AxisY->Minimum = double(dlg->numericUpDown4->Value);
				 chart3->ChartAreas["ChartArea1"]->AxisY->Maximum = double(dlg->numericUpDown3->Value);
				 chart4->ChartAreas["ChartArea1"]->AxisY->Minimum = double(dlg->numericUpDown8->Value);
				 chart4->ChartAreas["ChartArea1"]->AxisY->Maximum = double(dlg->numericUpDown7->Value);
				 if (dlg->radioButton1->Checked == true)
				 {
					 chart1->Series["Series1"]->ChartType = SeriesChartType::Line;
					 chart2->Series["Series1"]->ChartType = SeriesChartType::Line;
					 chart3->Series["Series1"]->ChartType = SeriesChartType::Line;
					 chart4->Series["Series1"]->ChartType = SeriesChartType::Line;
				 }
				 else if (dlg->radioButton2->Checked == true)
				 {
					 chart1->Series["Series1"]->ChartType = SeriesChartType::Spline;
					 chart2->Series["Series1"]->ChartType = SeriesChartType::Spline;
					 chart3->Series["Series1"]->ChartType = SeriesChartType::Spline;
					 chart4->Series["Series1"]->ChartType = SeriesChartType::Spline;
				 }
				 else if (dlg->radioButton3->Checked == true)
				 {
					 chart1->Series["Series1"]->ChartType = SeriesChartType::Column;
					 chart2->Series["Series1"]->ChartType = SeriesChartType::Column;
					 chart3->Series["Series1"]->ChartType = SeriesChartType::Column;
					 chart4->Series["Series1"]->ChartType = SeriesChartType::Column;
				 }
				 else if (dlg->radioButton4->Checked == true)
				 {
					 chart1->Series["Series1"]->ChartType = SeriesChartType::Point;
					 chart2->Series["Series1"]->ChartType = SeriesChartType::Point;
					 chart3->Series["Series1"]->ChartType = SeriesChartType::Point;
					 chart4->Series["Series1"]->ChartType = SeriesChartType::Point;
				 }
			 }
}
};
}

