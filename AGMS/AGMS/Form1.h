#pragma once
#include "SerialForm.h"
#include "Windows.h"
#include "tchar.h"
namespace AGMS {

	using namespace System;
	using namespace System::IO::Ports;
	using namespace System::ComponentModel;
	using namespace System::Windows::Forms;
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
	private: System::Windows::Forms::ToolStripMenuItem^  刷新ToolStripMenuItem;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripMenuItem^  期望值设置ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  系统ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  打开ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  关闭ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  格式设置ToolStripMenuItem;

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
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->坐标设置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->平滑度设置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
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
			this->刷新ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->格式设置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->系统ToolStripMenuItem1,
					this->系统ToolStripMenuItem, this->串口设置ToolStripMenuItem, this->气体类型ToolStripMenuItem, this->查看ToolStripMenuItem, this->toolStripMenuItem1,
					this->帮助ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1323, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 系统ToolStripMenuItem1
			// 
			this->系统ToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->打开ToolStripMenuItem,
					this->关闭ToolStripMenuItem
			});
			this->系统ToolStripMenuItem1->Name = L"系统ToolStripMenuItem1";
			this->系统ToolStripMenuItem1->Size = System::Drawing::Size(44, 21);
			this->系统ToolStripMenuItem1->Text = L"系统";
			this->系统ToolStripMenuItem1->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::On_DoSystemMenu);
			// 
			// 打开ToolStripMenuItem
			// 
			this->打开ToolStripMenuItem->Name = L"打开ToolStripMenuItem";
			this->打开ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->打开ToolStripMenuItem->Text = L"打开文件";
			// 
			// 关闭ToolStripMenuItem
			// 
			this->关闭ToolStripMenuItem->Name = L"关闭ToolStripMenuItem";
			this->关闭ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->关闭ToolStripMenuItem->Text = L"关闭";
			// 
			// 系统ToolStripMenuItem
			// 
			this->系统ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->打开系统ToolStripMenuItem,
					this->关闭系统ToolStripMenuItem
			});
			this->系统ToolStripMenuItem->Name = L"系统ToolStripMenuItem";
			this->系统ToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->系统ToolStripMenuItem->Text = L"开始";
			this->系统ToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::系统ToolStripMenuItem_DropDownItemClicked);
			this->系统ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::系统ToolStripMenuItem_Click);
			// 
			// 打开系统ToolStripMenuItem
			// 
			this->打开系统ToolStripMenuItem->Name = L"打开系统ToolStripMenuItem";
			this->打开系统ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->打开系统ToolStripMenuItem->Text = L"打开系统";
			// 
			// 关闭系统ToolStripMenuItem
			// 
			this->关闭系统ToolStripMenuItem->Name = L"关闭系统ToolStripMenuItem";
			this->关闭系统ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->关闭系统ToolStripMenuItem->Text = L"关闭系统";
			// 
			// 串口设置ToolStripMenuItem
			// 
			this->串口设置ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->串口设置ToolStripMenuItem1,
					this->打开串口ToolStripMenuItem, this->关闭串口ToolStripMenuItem
			});
			this->串口设置ToolStripMenuItem->Name = L"串口设置ToolStripMenuItem";
			this->串口设置ToolStripMenuItem->Size = System::Drawing::Size(68, 21);
			this->串口设置ToolStripMenuItem->Text = L"串口设置";
			this->串口设置ToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::串口设置ToolStripMenuItem_DropDownItemClicked);
			// 
			// 串口设置ToolStripMenuItem1
			// 
			this->串口设置ToolStripMenuItem1->Name = L"串口设置ToolStripMenuItem1";
			this->串口设置ToolStripMenuItem1->Size = System::Drawing::Size(124, 22);
			this->串口设置ToolStripMenuItem1->Text = L"串口设置";
			// 
			// 打开串口ToolStripMenuItem
			// 
			this->打开串口ToolStripMenuItem->Name = L"打开串口ToolStripMenuItem";
			this->打开串口ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->打开串口ToolStripMenuItem->Text = L"打开串口";
			// 
			// 关闭串口ToolStripMenuItem
			// 
			this->关闭串口ToolStripMenuItem->Name = L"关闭串口ToolStripMenuItem";
			this->关闭串口ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->关闭串口ToolStripMenuItem->Text = L"关闭串口";
			// 
			// 气体类型ToolStripMenuItem
			// 
			this->气体类型ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->温度ToolStripMenuItem,
					this->湿度ToolStripMenuItem, this->振荡度ToolStripMenuItem, this->有害气体ToolStripMenuItem, this->期望值设置ToolStripMenuItem
			});
			this->气体类型ToolStripMenuItem->Name = L"气体类型ToolStripMenuItem";
			this->气体类型ToolStripMenuItem->Size = System::Drawing::Size(68, 21);
			this->气体类型ToolStripMenuItem->Text = L"监测对象";
			// 
			// 温度ToolStripMenuItem
			// 
			this->温度ToolStripMenuItem->Name = L"温度ToolStripMenuItem";
			this->温度ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->温度ToolStripMenuItem->Text = L"温度";
			// 
			// 湿度ToolStripMenuItem
			// 
			this->湿度ToolStripMenuItem->Name = L"湿度ToolStripMenuItem";
			this->湿度ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->湿度ToolStripMenuItem->Text = L"湿度";
			// 
			// 振荡度ToolStripMenuItem
			// 
			this->振荡度ToolStripMenuItem->Name = L"振荡度ToolStripMenuItem";
			this->振荡度ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->振荡度ToolStripMenuItem->Text = L"振荡度";
			// 
			// 有害气体ToolStripMenuItem
			// 
			this->有害气体ToolStripMenuItem->Name = L"有害气体ToolStripMenuItem";
			this->有害气体ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->有害气体ToolStripMenuItem->Text = L"有害气体";
			// 
			// 期望值设置ToolStripMenuItem
			// 
			this->期望值设置ToolStripMenuItem->Name = L"期望值设置ToolStripMenuItem";
			this->期望值设置ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->期望值设置ToolStripMenuItem->Text = L"期望值设置";
			// 
			// 查看ToolStripMenuItem
			// 
			this->查看ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->工具栏ToolStripMenuItem,
					this->状态栏ToolStripMenuItem, this->字体ToolStripMenuItem
			});
			this->查看ToolStripMenuItem->Name = L"查看ToolStripMenuItem";
			this->查看ToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->查看ToolStripMenuItem->Text = L"查看";
			this->查看ToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::查看ToolStripMenuItem_DropDownItemClicked);
			// 
			// 工具栏ToolStripMenuItem
			// 
			this->工具栏ToolStripMenuItem->Name = L"工具栏ToolStripMenuItem";
			this->工具栏ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->工具栏ToolStripMenuItem->Text = L"工具栏";
			// 
			// 状态栏ToolStripMenuItem
			// 
			this->状态栏ToolStripMenuItem->Name = L"状态栏ToolStripMenuItem";
			this->状态栏ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->状态栏ToolStripMenuItem->Text = L"状态栏";
			// 
			// 字体ToolStripMenuItem
			// 
			this->字体ToolStripMenuItem->Name = L"字体ToolStripMenuItem";
			this->字体ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->字体ToolStripMenuItem->Text = L"字体";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->坐标设置ToolStripMenuItem,
					this->平滑度设置ToolStripMenuItem, this->格式设置ToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(68, 21);
			this->toolStripMenuItem1->Text = L"图像设置";
			// 
			// 坐标设置ToolStripMenuItem
			// 
			this->坐标设置ToolStripMenuItem->Name = L"坐标设置ToolStripMenuItem";
			this->坐标设置ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->坐标设置ToolStripMenuItem->Text = L"坐标设置";
			// 
			// 平滑度设置ToolStripMenuItem
			// 
			this->平滑度设置ToolStripMenuItem->Name = L"平滑度设置ToolStripMenuItem";
			this->平滑度设置ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->平滑度设置ToolStripMenuItem->Text = L"平滑度设置";
			// 
			// 帮助ToolStripMenuItem
			// 
			this->帮助ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->系统介绍ToolStripMenuItem,
					this->关于ToolStripMenuItem
			});
			this->帮助ToolStripMenuItem->Name = L"帮助ToolStripMenuItem";
			this->帮助ToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->帮助ToolStripMenuItem->Text = L"帮助";
			// 
			// 系统介绍ToolStripMenuItem
			// 
			this->系统介绍ToolStripMenuItem->Name = L"系统介绍ToolStripMenuItem";
			this->系统介绍ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->系统介绍ToolStripMenuItem->Text = L"系统介绍";
			// 
			// 关于ToolStripMenuItem
			// 
			this->关于ToolStripMenuItem->Name = L"关于ToolStripMenuItem";
			this->关于ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->关于ToolStripMenuItem->Text = L"关于";
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(15, 15);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {
				this->新建NToolStripButton,
					this->打开OToolStripButton, this->保存SToolStripButton, this->打印PToolStripButton, this->toolStripSeparator, this->剪切UToolStripButton,
					this->复制CToolStripButton, this->粘贴PToolStripButton, this->toolStripSeparator1, this->toolStripButton1, this->toolStripButton2,
					this->toolStripButton3
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 25);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1323, 25);
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
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"toolStripButton2";
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(23, 22);
			this->toolStripButton3->Text = L"toolStripButton3";
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth4Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::White;
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2, this->toolStripProgressBar1
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 640);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1323, 22);
			this->statusStrip1->TabIndex = 2;
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
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripProgressBar1->Maximum = 60;
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->RightToLeftLayout = true;
			this->toolStripProgressBar1->Size = System::Drawing::Size(100, 16);
			this->toolStripProgressBar1->Step = 1;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
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
			this->实时数据->Location = System::Drawing::Point(12, 67);
			this->实时数据->Name = L"实时数据";
			this->实时数据->Size = System::Drawing::Size(822, 570);
			this->实时数据->TabIndex = 3;
			this->实时数据->TabStop = false;
			this->实时数据->Text = L"实时数据";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(216, 529);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(64, 24);
			this->button4->TabIndex = 5;
			this->button4->Text = L"显示";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(126, 534);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 19);
			this->label4->TabIndex = 4;
			this->label4->Text = L"振荡度";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(612, 529);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(64, 24);
			this->button3->TabIndex = 5;
			this->button3->Text = L"显示";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(508, 534);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 19);
			this->label3->TabIndex = 4;
			this->label3->Text = L"有害气体";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(612, 267);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 24);
			this->button2->TabIndex = 5;
			this->button2->Text = L"显示";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(522, 268);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 19);
			this->label2->TabIndex = 4;
			this->label2->Text = L"湿度";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(216, 266);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 24);
			this->button1->TabIndex = 5;
			this->button1->Text = L"显示";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(126, 267);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 19);
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
			chartArea3->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea3);
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
			this->pictureBox1->Size = System::Drawing::Size(346, 243);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1号", L"2号", L"3号" });
			this->comboBox1->Location = System::Drawing::Point(1106, 366);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 20);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(1103, 339);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(104, 16);
			this->label6->TabIndex = 7;
			this->label6->Text = L"选择快递车辆";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(1106, 401);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(160, 57);
			this->button5->TabIndex = 8;
			this->button5->Text = L"查询历史数据";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(899, 339);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(179, 129);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"环境评定";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(9, 93);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(158, 26);
			this->textBox3->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(9, 52);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(158, 26);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(9, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(158, 26);
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
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->刷新ToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(101, 26);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::contextMenuStrip1_Opening);
			// 
			// 刷新ToolStripMenuItem
			// 
			this->刷新ToolStripMenuItem->Name = L"刷新ToolStripMenuItem";
			this->刷新ToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->刷新ToolStripMenuItem->Text = L"刷新";
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
			this->label5->Location = System::Drawing::Point(904, 482);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 19);
			this->label5->TabIndex = 10;
			this->label5->Text = L"数据接收区";
			// 
			// 格式设置ToolStripMenuItem
			// 
			this->格式设置ToolStripMenuItem->Name = L"格式设置ToolStripMenuItem";
			this->格式设置ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->格式设置ToolStripMenuItem->Text = L"格式设置";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1323, 662);
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
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"快递运输环境监测系统";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &Form1::Form1_SizeChanged);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 //this->timer2->Enabled = true;
	}

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 DateTime dateTime = DateTime::Now;             //获取系统当前时间
			 toolStripStatusLabel1->Text = dateTime.ToLongDateString();       // 显示日期
			 toolStripStatusLabel2->Text = dateTime.ToLongTimeString();     // 显示时间
			 toolStripProgressBar1->Value = dateTime.Second;           //进度条
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
private: System::Void 系统ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}

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
			
			 SerialForm^dlg = gcnew SerialForm();

			 ToolStripMenuItem^ item;

			 if (e == nullptr)

				 item = safe_cast<ToolStripMenuItem^>(sender);

			 else

				 item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);
			 if (item == 串口设置ToolStripMenuItem1)
			 {
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
}
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
};
}

