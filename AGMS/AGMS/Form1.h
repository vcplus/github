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
	private: System::Windows::Forms::ToolStripMenuItem^  ˢ��ToolStripMenuItem;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ֵ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ϵͳToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �ر�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ʽ����ToolStripMenuItem;

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
			this->ϵͳToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ر�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ϵͳToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ϵͳToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ر�ϵͳToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�򿪴���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�رմ���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�¶�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʪ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�񵴶�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�к�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ֵ����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�鿴ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->״̬��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ƽ��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->ˢ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->��ʽ����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->ϵͳToolStripMenuItem1,
					this->ϵͳToolStripMenuItem, this->��������ToolStripMenuItem, this->��������ToolStripMenuItem, this->�鿴ToolStripMenuItem, this->toolStripMenuItem1,
					this->����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1323, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ϵͳToolStripMenuItem1
			// 
			this->ϵͳToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��ToolStripMenuItem,
					this->�ر�ToolStripMenuItem
			});
			this->ϵͳToolStripMenuItem1->Name = L"ϵͳToolStripMenuItem1";
			this->ϵͳToolStripMenuItem1->Size = System::Drawing::Size(44, 21);
			this->ϵͳToolStripMenuItem1->Text = L"ϵͳ";
			this->ϵͳToolStripMenuItem1->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::On_DoSystemMenu);
			// 
			// ��ToolStripMenuItem
			// 
			this->��ToolStripMenuItem->Name = L"��ToolStripMenuItem";
			this->��ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->��ToolStripMenuItem->Text = L"���ļ�";
			// 
			// �ر�ToolStripMenuItem
			// 
			this->�ر�ToolStripMenuItem->Name = L"�ر�ToolStripMenuItem";
			this->�ر�ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->�ر�ToolStripMenuItem->Text = L"�ر�";
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
			this->ϵͳToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ϵͳToolStripMenuItem_Click);
			// 
			// ��ϵͳToolStripMenuItem
			// 
			this->��ϵͳToolStripMenuItem->Name = L"��ϵͳToolStripMenuItem";
			this->��ϵͳToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->��ϵͳToolStripMenuItem->Text = L"��ϵͳ";
			// 
			// �ر�ϵͳToolStripMenuItem
			// 
			this->�ر�ϵͳToolStripMenuItem->Name = L"�ر�ϵͳToolStripMenuItem";
			this->�ر�ϵͳToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->�ر�ϵͳToolStripMenuItem->Text = L"�ر�ϵͳ";
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
			// 
			// ��������ToolStripMenuItem1
			// 
			this->��������ToolStripMenuItem1->Name = L"��������ToolStripMenuItem1";
			this->��������ToolStripMenuItem1->Size = System::Drawing::Size(124, 22);
			this->��������ToolStripMenuItem1->Text = L"��������";
			// 
			// �򿪴���ToolStripMenuItem
			// 
			this->�򿪴���ToolStripMenuItem->Name = L"�򿪴���ToolStripMenuItem";
			this->�򿪴���ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->�򿪴���ToolStripMenuItem->Text = L"�򿪴���";
			// 
			// �رմ���ToolStripMenuItem
			// 
			this->�رմ���ToolStripMenuItem->Name = L"�رմ���ToolStripMenuItem";
			this->�رմ���ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->�رմ���ToolStripMenuItem->Text = L"�رմ���";
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
			// 
			// �¶�ToolStripMenuItem
			// 
			this->�¶�ToolStripMenuItem->Name = L"�¶�ToolStripMenuItem";
			this->�¶�ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->�¶�ToolStripMenuItem->Text = L"�¶�";
			// 
			// ʪ��ToolStripMenuItem
			// 
			this->ʪ��ToolStripMenuItem->Name = L"ʪ��ToolStripMenuItem";
			this->ʪ��ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ʪ��ToolStripMenuItem->Text = L"ʪ��";
			// 
			// �񵴶�ToolStripMenuItem
			// 
			this->�񵴶�ToolStripMenuItem->Name = L"�񵴶�ToolStripMenuItem";
			this->�񵴶�ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->�񵴶�ToolStripMenuItem->Text = L"�񵴶�";
			// 
			// �к�����ToolStripMenuItem
			// 
			this->�к�����ToolStripMenuItem->Name = L"�к�����ToolStripMenuItem";
			this->�к�����ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->�к�����ToolStripMenuItem->Text = L"�к�����";
			// 
			// ����ֵ����ToolStripMenuItem
			// 
			this->����ֵ����ToolStripMenuItem->Name = L"����ֵ����ToolStripMenuItem";
			this->����ֵ����ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->����ֵ����ToolStripMenuItem->Text = L"����ֵ����";
			// 
			// �鿴ToolStripMenuItem
			// 
			this->�鿴ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->������ToolStripMenuItem,
					this->״̬��ToolStripMenuItem, this->����ToolStripMenuItem
			});
			this->�鿴ToolStripMenuItem->Name = L"�鿴ToolStripMenuItem";
			this->�鿴ToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->�鿴ToolStripMenuItem->Text = L"�鿴";
			this->�鿴ToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::�鿴ToolStripMenuItem_DropDownItemClicked);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// ״̬��ToolStripMenuItem
			// 
			this->״̬��ToolStripMenuItem->Name = L"״̬��ToolStripMenuItem";
			this->״̬��ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->״̬��ToolStripMenuItem->Text = L"״̬��";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->����ToolStripMenuItem->Text = L"����";
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
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// ƽ��������ToolStripMenuItem
			// 
			this->ƽ��������ToolStripMenuItem->Name = L"ƽ��������ToolStripMenuItem";
			this->ƽ��������ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ƽ��������ToolStripMenuItem->Text = L"ƽ��������";
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
			// 
			// ϵͳ����ToolStripMenuItem
			// 
			this->ϵͳ����ToolStripMenuItem->Name = L"ϵͳ����ToolStripMenuItem";
			this->ϵͳ����ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ϵͳ����ToolStripMenuItem->Text = L"ϵͳ����";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(15, 15);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {
				this->�½�NToolStripButton,
					this->��OToolStripButton, this->����SToolStripButton, this->��ӡPToolStripButton, this->toolStripSeparator, this->����UToolStripButton,
					this->����CToolStripButton, this->ճ��PToolStripButton, this->toolStripSeparator1, this->toolStripButton1, this->toolStripButton2,
					this->toolStripButton3
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 25);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1323, 25);
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
			this->ʵʱ����->Size = System::Drawing::Size(822, 570);
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
			this->button4->Text = L"��ʾ";
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
			this->button3->Text = L"��ʾ";
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
			this->button2->Text = L"��ʾ";
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
			this->button1->Text = L"��ʾ";
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
			this->comboBox1->Location = System::Drawing::Point(1106, 366);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 20);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(1103, 339);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(104, 16);
			this->label6->TabIndex = 7;
			this->label6->Text = L"ѡ���ݳ���";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(1106, 401);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(160, 57);
			this->button5->TabIndex = 8;
			this->button5->Text = L"��ѯ��ʷ����";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"΢���ź�", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(899, 339);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(179, 129);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"��������";
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
			this->notifyIcon1->Text = L"������价�����ϵͳ";
			this->notifyIcon1->Visible = true;
			this->notifyIcon1->DoubleClick += gcnew System::EventHandler(this, &Form1::notifyIcon1_DoubleClick);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ˢ��ToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(101, 26);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::contextMenuStrip1_Opening);
			// 
			// ˢ��ToolStripMenuItem
			// 
			this->ˢ��ToolStripMenuItem->Name = L"ˢ��ToolStripMenuItem";
			this->ˢ��ToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->ˢ��ToolStripMenuItem->Text = L"ˢ��";
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
			// ��ʽ����ToolStripMenuItem
			// 
			this->��ʽ����ToolStripMenuItem->Name = L"��ʽ����ToolStripMenuItem";
			this->��ʽ����ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->��ʽ����ToolStripMenuItem->Text = L"��ʽ����";
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 //this->timer2->Enabled = true;
	}

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 DateTime dateTime = DateTime::Now;             //��ȡϵͳ��ǰʱ��
			 toolStripStatusLabel1->Text = dateTime.ToLongDateString();       // ��ʾ����
			 toolStripStatusLabel2->Text = dateTime.ToLongTimeString();     // ��ʾʱ��
			 toolStripProgressBar1->Value = dateTime.Second;           //������
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

				 this->notifyIcon1->ShowBalloonTip(30, "ע��", "��Һã���������Ƶ�һ��ϵͳ", ToolTipIcon::Info);

			 }
}
private: System::Void contextMenuStrip1_Opening(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {

			 static int i = 1;
			 
			 i = (i<8 ? i + 1 : 1);         // ͼ�������,����8��ͼ��

			 this->notifyIcon1->Icon = gcnew System::Drawing::Icon(L"Rotate" + i + L".ico", 64, 64);
}
private: System::Void ϵͳToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}

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
			
			 SerialForm^dlg = gcnew SerialForm();

			 ToolStripMenuItem^ item;

			 if (e == nullptr)

				 item = safe_cast<ToolStripMenuItem^>(sender);

			 else

				 item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);
			 if (item == ��������ToolStripMenuItem1)
			 {
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
}
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
};
}

