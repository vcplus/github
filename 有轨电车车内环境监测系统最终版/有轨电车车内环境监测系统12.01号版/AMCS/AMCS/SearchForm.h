#pragma once

namespace AMCS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Printing;
	using namespace System::Drawing::Drawing2D;	
	using namespace System::Data::OleDb;
	using namespace System::Data::Common;
	
	/// <summary>
	/// SearchForm ժҪ
	/// </summary>
	public ref class SearchForm : public System::Windows::Forms::Form
	{
	public:
		SearchForm(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~SearchForm()
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
	private: System::Windows::Forms::ToolStripMenuItem^  firstcompartmentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  alcoholToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  pM25ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  tempToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  humidityToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  secondcompartmentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  thirdcompartmentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  returnToolStripMenuItem;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
			 //System::Windows::Forms::DataVisualization::Charting::Series ^ Series1= (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
	private: System::Windows::Forms::ToolStripMenuItem^  alcoholToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  pM25ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  tempToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  humiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  alcoholToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  pM25ToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  tempToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  humidityToolStripMenuItem1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;








	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ӡToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ӡԤ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ֱ�Ӵ�ӡToolStripMenuItem;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Data::DataColumn^  dataColumn1;
	private: System::Data::DataTable^  dataTable1;
	private: System::Data::DataSet^  dataSet1;
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
	private: System::Windows::Forms::ComboBox^  comboBox2;

	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection2;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;


	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SearchForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->systemToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->firstcompartmentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alcoholToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pM25ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tempToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->humidityToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->secondcompartmentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alcoholToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pM25ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tempToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->humiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->thirdcompartmentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alcoholToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pM25ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tempToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->humidityToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->returnToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ӡToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ӡԤ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ֱ�Ӵ�ӡToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dataColumn1 = (gcnew System::Data::DataColumn());
			this->dataTable1 = (gcnew System::Data::DataTable());
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection2 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->systemToolStripMenuItem,
					this->��ӡToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1299, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &SearchForm::menuStrip1_ItemClicked);
			// 
			// systemToolStripMenuItem
			// 
			this->systemToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->openToolStripMenuItem,
					this->returnToolStripMenuItem
			});
			this->systemToolStripMenuItem->Name = L"systemToolStripMenuItem";
			this->systemToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->systemToolStripMenuItem->Text = L"ϵͳ";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->firstcompartmentToolStripMenuItem,
					this->secondcompartmentToolStripMenuItem, this->thirdcompartmentToolStripMenuItem
			});
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->openToolStripMenuItem->Text = L"ѡ��";
			// 
			// firstcompartmentToolStripMenuItem
			// 
			this->firstcompartmentToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->alcoholToolStripMenuItem,
					this->pM25ToolStripMenuItem, this->tempToolStripMenuItem, this->humidityToolStripMenuItem
			});
			this->firstcompartmentToolStripMenuItem->Name = L"firstcompartmentToolStripMenuItem";
			this->firstcompartmentToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->firstcompartmentToolStripMenuItem->Text = L"��һ����";
			// 
			// alcoholToolStripMenuItem
			// 
			this->alcoholToolStripMenuItem->Name = L"alcoholToolStripMenuItem";
			this->alcoholToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->alcoholToolStripMenuItem->Text = L"�ƾ�";
			// 
			// pM25ToolStripMenuItem
			// 
			this->pM25ToolStripMenuItem->Name = L"pM25ToolStripMenuItem";
			this->pM25ToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->pM25ToolStripMenuItem->Text = L"PM2.5";
			// 
			// tempToolStripMenuItem
			// 
			this->tempToolStripMenuItem->Name = L"tempToolStripMenuItem";
			this->tempToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->tempToolStripMenuItem->Text = L"�¶�";
			// 
			// humidityToolStripMenuItem
			// 
			this->humidityToolStripMenuItem->Name = L"humidityToolStripMenuItem";
			this->humidityToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->humidityToolStripMenuItem->Text = L"ʪ��";
			// 
			// secondcompartmentToolStripMenuItem
			// 
			this->secondcompartmentToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->alcoholToolStripMenuItem1,
					this->pM25ToolStripMenuItem1, this->tempToolStripMenuItem1, this->humiToolStripMenuItem
			});
			this->secondcompartmentToolStripMenuItem->Name = L"secondcompartmentToolStripMenuItem";
			this->secondcompartmentToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->secondcompartmentToolStripMenuItem->Text = L"�ڶ�����";
			// 
			// alcoholToolStripMenuItem1
			// 
			this->alcoholToolStripMenuItem1->Name = L"alcoholToolStripMenuItem1";
			this->alcoholToolStripMenuItem1->Size = System::Drawing::Size(112, 22);
			this->alcoholToolStripMenuItem1->Text = L"�ƾ�";
			// 
			// pM25ToolStripMenuItem1
			// 
			this->pM25ToolStripMenuItem1->Name = L"pM25ToolStripMenuItem1";
			this->pM25ToolStripMenuItem1->Size = System::Drawing::Size(112, 22);
			this->pM25ToolStripMenuItem1->Text = L"PM2.5";
			// 
			// tempToolStripMenuItem1
			// 
			this->tempToolStripMenuItem1->Name = L"tempToolStripMenuItem1";
			this->tempToolStripMenuItem1->Size = System::Drawing::Size(112, 22);
			this->tempToolStripMenuItem1->Text = L"�¶�";
			// 
			// humiToolStripMenuItem
			// 
			this->humiToolStripMenuItem->Name = L"humiToolStripMenuItem";
			this->humiToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->humiToolStripMenuItem->Text = L"ʪ��";
			// 
			// thirdcompartmentToolStripMenuItem
			// 
			this->thirdcompartmentToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->alcoholToolStripMenuItem2,
					this->pM25ToolStripMenuItem2, this->tempToolStripMenuItem2, this->humidityToolStripMenuItem1
			});
			this->thirdcompartmentToolStripMenuItem->Name = L"thirdcompartmentToolStripMenuItem";
			this->thirdcompartmentToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->thirdcompartmentToolStripMenuItem->Text = L"��������";
			// 
			// alcoholToolStripMenuItem2
			// 
			this->alcoholToolStripMenuItem2->Name = L"alcoholToolStripMenuItem2";
			this->alcoholToolStripMenuItem2->Size = System::Drawing::Size(112, 22);
			this->alcoholToolStripMenuItem2->Text = L"�ƾ�";
			// 
			// pM25ToolStripMenuItem2
			// 
			this->pM25ToolStripMenuItem2->Name = L"pM25ToolStripMenuItem2";
			this->pM25ToolStripMenuItem2->Size = System::Drawing::Size(112, 22);
			this->pM25ToolStripMenuItem2->Text = L"PM2.5";
			// 
			// tempToolStripMenuItem2
			// 
			this->tempToolStripMenuItem2->Name = L"tempToolStripMenuItem2";
			this->tempToolStripMenuItem2->Size = System::Drawing::Size(112, 22);
			this->tempToolStripMenuItem2->Text = L"�¶�";
			// 
			// humidityToolStripMenuItem1
			// 
			this->humidityToolStripMenuItem1->Name = L"humidityToolStripMenuItem1";
			this->humidityToolStripMenuItem1->Size = System::Drawing::Size(112, 22);
			this->humidityToolStripMenuItem1->Text = L"ʪ��";
			// 
			// returnToolStripMenuItem
			// 
			this->returnToolStripMenuItem->Name = L"returnToolStripMenuItem";
			this->returnToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->returnToolStripMenuItem->Text = L"����";
			this->returnToolStripMenuItem->Click += gcnew System::EventHandler(this, &SearchForm::returnToolStripMenuItem_Click);
			// 
			// ��ӡToolStripMenuItem
			// 
			this->��ӡToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��ӡԤ��ToolStripMenuItem,
					this->ֱ�Ӵ�ӡToolStripMenuItem
			});
			this->��ӡToolStripMenuItem->Name = L"��ӡToolStripMenuItem";
			this->��ӡToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->��ӡToolStripMenuItem->Text = L"��ӡ";
			// 
			// ��ӡԤ��ToolStripMenuItem
			// 
			this->��ӡԤ��ToolStripMenuItem->Name = L"��ӡԤ��ToolStripMenuItem";
			this->��ӡԤ��ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->��ӡԤ��ToolStripMenuItem->Text = L"��ӡԤ��";
			this->��ӡԤ��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &SearchForm::��ӡԤ��ToolStripMenuItem_Click);
			// 
			// ֱ�Ӵ�ӡToolStripMenuItem
			// 
			this->ֱ�Ӵ�ӡToolStripMenuItem->Name = L"ֱ�Ӵ�ӡToolStripMenuItem";
			this->ֱ�Ӵ�ӡToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->ֱ�Ӵ�ӡToolStripMenuItem->Text = L"ֱ�Ӵ�ӡ";
			this->ֱ�Ӵ�ӡToolStripMenuItem->Click += gcnew System::EventHandler(this, &SearchForm::ֱ�Ӵ�ӡToolStripMenuItem_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"����", 12));
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->dateTimePicker1->CustomFormat = L"yyyy/MM/dd HH:mm:ss";
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"����", 12));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dateTimePicker1->Location = System::Drawing::Point(22, 71);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->ShowUpDown = true;
			this->dateTimePicker1->Size = System::Drawing::Size(220, 26);
			this->dateTimePicker1->TabIndex = 1;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &SearchForm::dateTimePicker1_ValueChanged);
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			chartArea1->AxisX->ScaleView->Size = 8;
			chartArea1->AxisX->ScrollBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			chartArea1->AxisX->ScrollBar->ButtonColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			chartArea1->CursorX->IsUserEnabled = true;
			chartArea1->CursorX->IsUserSelectionEnabled = true;
			chartArea1->CursorY->IsUserEnabled = true;
			chartArea1->CursorY->IsUserSelectionEnabled = true;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 338);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Pastel;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->IsValueShownAsLabel = true;
			series1->Legend = L"Legend1";
			series1->MarkerColor = System::Drawing::Color::Red;
			series1->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Square;
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(597, 296);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 16));
			this->label1->ForeColor = System::Drawing::Color::Blue;
			this->label1->Location = System::Drawing::Point(793, 307);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 22);
			this->label1->TabIndex = 4;
			this->label1->Text = L"���ݱ�";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 16));
			this->label2->ForeColor = System::Drawing::Color::Blue;
			this->label2->Location = System::Drawing::Point(83, 313);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 22);
			this->label2->TabIndex = 4;
			this->label2->Text = L"��ʷ����ͼ";
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &SearchForm::printDocument1_PrintPage);
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(645, 338);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(618, 296);
			this->listView1->TabIndex = 7;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"����", 12));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"��һ�������ݱ�", L"�ڶ��������ݱ�", L"�����������ݱ�", L"�쳣���ݱ�_�ƾ�",
					L"�쳣���ݱ�_PM", L"�쳣���ݱ�_�¶�", L"�쳣���ݱ�_ʪ��"
			});
			this->comboBox1->Location = System::Drawing::Point(926, 307);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(178, 24);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->Text = L"��һ�������ݱ�";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &SearchForm::comboBox1_SelectedIndexChanged);
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
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AMCS.mdb";
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"����", 12));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"�쳣���ݱ�_�ƾ�", L"�쳣���ݱ�_PM", L"�쳣���ݱ�_�¶�", L"�쳣���ݱ�_ʪ��" });
			this->comboBox2->Location = System::Drawing::Point(250, 308);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(178, 24);
			this->comboBox2->TabIndex = 8;
			this->comboBox2->Text = L"�쳣���ݱ�_�ƾ�";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &SearchForm::comboBox2_SelectedIndexChanged);
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT   \r\nFROM      [�쳣���ݱ�_�ƾ�]";
			this->oleDbSelectCommand1->Connection = this->oleDbConnection2;
			// 
			// oleDbConnection2
			// 
			this->oleDbConnection2->ConnectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\\Users\\������\\Desktop\\�й�糵���ڻ������ϵͳ12."
				L"04\\�й�糵���ڻ������ϵͳ12.01�Ű�\\AMCS\\AMCS\\AMCS.mdb";
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->monthCalendar1->Location = System::Drawing::Point(1038, 37);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 10;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &SearchForm::monthCalendar1_DateChanged);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(317, 37);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(292, 232);
			this->listBox1->TabIndex = 11;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"yyyy/MM/dd HH:mm:ss";
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"����", 12));
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(22, 168);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->ShowUpDown = true;
			this->dateTimePicker2->Size = System::Drawing::Size(220, 26);
			this->dateTimePicker2->TabIndex = 12;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->dateTimePicker2);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"����", 12));
			this->groupBox1->Location = System::Drawing::Point(12, 37);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(267, 236);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ѡ����ʾʱ��";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 12));
			this->label4->Location = System::Drawing::Point(19, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 16);
			this->label4->TabIndex = 13;
			this->label4->Text = L"��������ʱ��";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 12));
			this->label3->Location = System::Drawing::Point(19, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 16);
			this->label3->TabIndex = 13;
			this->label3->Text = L"��ʼ����ʱ��";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(645, 37);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(381, 236);
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			// 
			// SearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(1299, 661);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"SearchForm";
			this->Text = L"��ѯ����";
			this->Load += gcnew System::EventHandler(this, &SearchForm::SearchForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: BindingSource^ binding1;
	private: System::Void returnToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
	}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {


		
}
private: System::Void DispView(DataTable^ table)

{

			 this->listView1->Columns->Clear();

			 this->listView1->Items->Clear();

			 if (table == nullptr) return;

			 ListViewItem^ item;

			 for each (DataRow^ row in table->Rows)

			 {

				 if (row->RowState != DataRowState::Deleted)// ��������ɾ������

				 {

					 item = gcnew ListViewItem(row[0]->ToString());

					 for (int i = 1; i<table->Columns->Count; i++)

						 item->SubItems->Add(row[i]->ToString());

				 }

				 listView1->Items->Add(item);

			 }

			 // ����ListView�б�ͷ

			 for each (DataColumn^ col in table->Columns)

				 listView1->Columns->Add(col->Caption, 80);

}

//public: System::Windows::Forms::ListView^  listView1;

private: System::Void ScoreTab_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

			 if (listView1->Items->Count<1)return;

			 Graphics^ g = e->Graphics;

			 Drawing::Font^ font = gcnew Drawing::Font(L"����", 12, FontStyle::Regular);

			 SolidBrush^ brush1 = gcnew SolidBrush(Color::Blue);//��ɫ�ı�

			 StringFormat^ format = gcnew StringFormat();

			 array<float>^ tabStops = gcnew array<float>{90.0f, 120.0f, 60.0f, 60.0f, 60.0f};

			 format->SetTabStops(0.0f, tabStops);         // �����Ʊ�λ
			 int nIndex = this->comboBox1->SelectedIndex;
			 String^ strTableName = this->comboBox1->Items[nIndex]->ToString();			 // ��ȡѡ������ݱ���
			 if (strTableName == "�쳣���ݱ�_�ƾ�" )
			 g->DrawString(L"���\t�ƾ�Ũ��\t�ƾ�����ʱ��\t�ƾ���Ӧ����", font, brush1, Point(40, 20), format);
			 else if (strTableName == "�쳣���ݱ�_PM")
				 g->DrawString(L"���\tPM2.5Ũ��\tPM2.5����ʱ��\tPM2.5��Ӧ����", font, brush1, Point(40, 20), format);
			 else if (strTableName == "�쳣���ݱ�_�¶�")
				 g->DrawString(L"���\t�¶�Ũ��\t�¶�����ʱ��\t�¶ȶ�Ӧ����", font, brush1, Point(40, 20), format);
			 else if (strTableName == "�쳣���ݱ�_ʪ��")
				 g->DrawString(L"���\tʪ��Ũ��\tʪ������ʱ��\tʪ�ȶ�Ӧ����", font, brush1, Point(40, 20), format);
			 else
				 g->DrawString(L"���\t�ƾ�Ũ��\tPM2.5Ũ��\t�¶�\tʪ��\t����ʱ��\t��Ӧ����", font, brush1, Point(40, 20), format);
			 Pen^ pen1 = gcnew Pen(Color::Gray, 2);

			 g->DrawLine(pen1, 20, 40, 540, 40);          	// ����ָ���

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

				 g->DrawLine(pen2, 20, 70 + i * 30, 540, 70 + i * 30);//�б�������

				 i++;

			 }

}




private: System::Void ��ӡԤ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 PrintPreviewDialog^ previewDlg = gcnew PrintPreviewDialog(); // ��ӡԤ���Ի���

			 previewDlg->Document = this->printDocument1;         //���ô�ӡ�ĵ�����

			 previewDlg->ShowDialog();                                      // ��ʾ��ӡԤ���Ի���
}
private: System::Void ֱ�Ӵ�ӡToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 PrintDialog^ printDlg = gcnew PrintDialog();                   //��ӡ�Ի���

			 printDlg->Document = this->printDocument1;            //���ô�ӡ�ĵ�

			 if (printDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)

				 this->printDocument1->Print();                               //��ʼ��ӡ
}
	private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
				 Graphics^ g = e->Graphics;

				 int left = e->MarginBounds.Left;                   // ���Ͻ�Xλ��

				 int top = e->MarginBounds.Top;                   // ���Ͻ�Yλ��

				 int width = e->MarginBounds.Width;                 //��Ч������

				 int height = e->MarginBounds.Height;             // ��Ч����߶�

				 // ��ӡҳͷ(����,26��)

				 Drawing::Font^ headerFont =

					 gcnew Drawing::Font(L"����", 26, FontStyle::Regular);
				 int nIndex = this->comboBox1->SelectedIndex;
				 String^ strTableName = this->comboBox1->Items[nIndex]->ToString();			 // ��ȡѡ������ݱ���
		 if (strTableName == "�쳣���ݱ�_�ƾ�")
		 {			
					 g->DrawString(L"�ƾ��쳣���ݱ�", headerFont, Brushes::Black, left + 230, top);
				 // ��ӡ����(������ɫ,����,12��)
					 top += 60;
				 Drawing::Pen^  tablesPen = gcnew Drawing::Pen(Color::Black);

				 // g->FillRectangle(Brushes::LightGray, Rectangle(left,top,width,30));

				 g->DrawLine(tablesPen, left, top + 30, left + width, top + 30);

				 Drawing::Font^titlesFont = gcnew Drawing::Font(L"����", 12, FontStyle::Bold);

				 g->DrawString(L"���", titlesFont, Brushes::Black, left + 30, top + 5);

				 g->DrawLine(tablesPen, left + 100, top, left + 100, top + 30);          //�зָ���

				 g->DrawString(L"�ƾ�Ũ��", titlesFont, Brushes::Black, left + 120, top + 5);

				 g->DrawLine(tablesPen, left + 250, top, left + 250, top + 30);

				 g->DrawString(L"�ƾ�����ʱ��", titlesFont, Brushes::Black, left + 270, top + 5);

				 g->DrawLine(tablesPen, left + 500, top, left + 500, top + 30);

				 g->DrawString(L"�ƾ���Ӧ����", titlesFont, Brushes::Black, left + 520, top + 5);
				

				 // ��ӡҳ��

				 top += 30, height -= 30;

				 Drawing::Font^ tablesFont =

					 gcnew Drawing::Font(L"����", 12, FontStyle::Regular);

				 for each(ListViewItem^ item in this->listView1->Items) {

					 g->DrawString(item->SubItems[0]->Text, tablesFont, Brushes::Black, left + 20, top + 5);      // ���

					 g->DrawLine(tablesPen, left + 100, top, left + 100, top + 30);             //�зָ���

					 g->DrawString(item->SubItems[1]->Text, tablesFont, Brushes::Black, left + 120, top + 5);    // ��������

					 g->DrawLine(tablesPen, left + 250, top, left + 250, top + 30);

					 g->DrawString(item->SubItems[2]->Text, tablesFont, Brushes::Black, left + 270, top + 5);    // ����Ũ��

					 g->DrawLine(tablesPen, left + 500, top, left + 500, top + 30);

					 g->DrawString(item->SubItems[3]->Text, tablesFont, Brushes::Black, left + 520, top + 5);    // ʱ��				

					 g->DrawLine(tablesPen, left, top + 30, left + width, top + 30);

					 top += 30, height -= 30;
				 }
				 e->HasMorePages = false;
	}			
		 else if (strTableName == "�쳣���ݱ�_PM")
		 {
			 g->DrawString(L"PM2.5�쳣���ݱ�", headerFont, Brushes::Black, left + 230, top);
			 // ��ӡ����(������ɫ,����,12��)
			 top += 60;
			 Drawing::Pen^  tablesPen = gcnew Drawing::Pen(Color::Black);

			 // g->FillRectangle(Brushes::LightGray, Rectangle(left,top,width,30));

			 g->DrawLine(tablesPen, left, top + 30, left + width, top + 30);

			 Drawing::Font^titlesFont = gcnew Drawing::Font(L"����", 12, FontStyle::Bold);

			 g->DrawString(L"���", titlesFont, Brushes::Black, left + 30, top + 5);

			 g->DrawLine(tablesPen, left + 100, top, left + 100, top + 30);          //�зָ���

			 g->DrawString(L"PM2.5Ũ��", titlesFont, Brushes::Black, left + 120, top + 5);

			 g->DrawLine(tablesPen, left + 250, top, left + 250, top + 30);

			 g->DrawString(L"PM2.5����ʱ��", titlesFont, Brushes::Black, left + 270, top + 5);

			 g->DrawLine(tablesPen, left + 500, top, left + 500, top + 30);

			 g->DrawString(L"PM2.5��Ӧ����", titlesFont, Brushes::Black, left + 520, top + 5);


			 // ��ӡҳ��

			 top += 30, height -= 30;

			 Drawing::Font^ tablesFont =

				 gcnew Drawing::Font(L"����", 12, FontStyle::Regular);

			 for each(ListViewItem^ item in this->listView1->Items) {

				 g->DrawString(item->SubItems[0]->Text, tablesFont, Brushes::Black, left + 20, top + 5);      // ���

				 g->DrawLine(tablesPen, left + 100, top, left + 100, top + 30);             //�зָ���

				 g->DrawString(item->SubItems[1]->Text, tablesFont, Brushes::Black, left + 120, top + 5);    // ��������

				 g->DrawLine(tablesPen, left + 250, top, left + 250, top + 30);

				 g->DrawString(item->SubItems[2]->Text, tablesFont, Brushes::Black, left + 270, top + 5);    // ����Ũ��

				 g->DrawLine(tablesPen, left + 500, top, left + 500, top + 30);

				 g->DrawString(item->SubItems[3]->Text, tablesFont, Brushes::Black, left + 520, top + 5);    // ʱ��				

				 g->DrawLine(tablesPen, left, top + 30, left + width, top + 30);

				 top += 30, height -= 30;
			 }
			 e->HasMorePages = false;
		 }
		 else if (strTableName == "�쳣���ݱ�_�¶�")
		 {
			 g->DrawString(L"�¶��쳣���ݱ�", headerFont, Brushes::Black, left + 230, top);
			 // ��ӡ����(������ɫ,����,12��)
			 top += 60;
			 Drawing::Pen^  tablesPen = gcnew Drawing::Pen(Color::Black);

			 // g->FillRectangle(Brushes::LightGray, Rectangle(left,top,width,30));

			 g->DrawLine(tablesPen, left, top + 30, left + width, top + 30);

			 Drawing::Font^titlesFont = gcnew Drawing::Font(L"����", 12, FontStyle::Bold);

			 g->DrawString(L"���", titlesFont, Brushes::Black, left + 30, top + 5);

			 g->DrawLine(tablesPen, left + 100, top, left + 100, top + 30);          //�зָ���

			 g->DrawString(L"�¶�Ũ��", titlesFont, Brushes::Black, left + 120, top + 5);

			 g->DrawLine(tablesPen, left + 250, top, left + 250, top + 30);

			 g->DrawString(L"�¶�����ʱ��", titlesFont, Brushes::Black, left + 270, top + 5);

			 g->DrawLine(tablesPen, left + 500, top, left + 500, top + 30);

			 g->DrawString(L"�¶ȶ�Ӧ����", titlesFont, Brushes::Black, left + 520, top + 5);


			 // ��ӡҳ��

			 top += 30, height -= 30;

			 Drawing::Font^ tablesFont =

				 gcnew Drawing::Font(L"����", 12, FontStyle::Regular);

			 for each(ListViewItem^ item in this->listView1->Items) {

				 g->DrawString(item->SubItems[0]->Text, tablesFont, Brushes::Black, left + 20, top + 5);      // ���

				 g->DrawLine(tablesPen, left + 100, top, left + 100, top + 30);             //�зָ���

				 g->DrawString(item->SubItems[1]->Text, tablesFont, Brushes::Black, left + 120, top + 5);    // ��������

				 g->DrawLine(tablesPen, left + 250, top, left + 250, top + 30);

				 g->DrawString(item->SubItems[2]->Text, tablesFont, Brushes::Black, left + 270, top + 5);    // ����Ũ��

				 g->DrawLine(tablesPen, left + 500, top, left + 500, top + 30);

				 g->DrawString(item->SubItems[3]->Text, tablesFont, Brushes::Black, left + 520, top + 5);    // ʱ��				

				 g->DrawLine(tablesPen, left, top + 30, left + width, top + 30);

				 top += 30, height -= 30;
			 }
			 e->HasMorePages = false;
		 }
		 else if (strTableName == "�쳣���ݱ�_ʪ��")
		 {
			 g->DrawString(L"ʪ���쳣���ݱ�", headerFont, Brushes::Black, left + 230, top);
			 // ��ӡ����(������ɫ,����,12��)
			 top += 60;
			 Drawing::Pen^  tablesPen = gcnew Drawing::Pen(Color::Black);

			 // g->FillRectangle(Brushes::LightGray, Rectangle(left,top,width,30));

			 g->DrawLine(tablesPen, left, top + 30, left + width, top + 30);

			 Drawing::Font^titlesFont = gcnew Drawing::Font(L"����", 12, FontStyle::Bold);

			 g->DrawString(L"���", titlesFont, Brushes::Black, left + 30, top + 5);

			 g->DrawLine(tablesPen, left + 100, top, left + 100, top + 30);          //�зָ���

			 g->DrawString(L"ʪ��Ũ��", titlesFont, Brushes::Black, left + 120, top + 5);

			 g->DrawLine(tablesPen, left + 250, top, left + 250, top + 30);

			 g->DrawString(L"ʪ������ʱ��", titlesFont, Brushes::Black, left + 270, top + 5);

			 g->DrawLine(tablesPen, left + 500, top, left + 500, top + 30);

			 g->DrawString(L"ʪ�ȶ�Ӧ����", titlesFont, Brushes::Black, left + 520, top + 5);


			 // ��ӡҳ��

			 top += 30, height -= 30;

			 Drawing::Font^ tablesFont =

				 gcnew Drawing::Font(L"����", 12, FontStyle::Regular);

			 for each(ListViewItem^ item in this->listView1->Items) {

				 g->DrawString(item->SubItems[0]->Text, tablesFont, Brushes::Black, left + 20, top + 5);      // ���

				 g->DrawLine(tablesPen, left + 100, top, left + 100, top + 30);             //�зָ���

				 g->DrawString(item->SubItems[1]->Text, tablesFont, Brushes::Black, left + 120, top + 5);    // ��������

				 g->DrawLine(tablesPen, left + 250, top, left + 250, top + 30);

				 g->DrawString(item->SubItems[2]->Text, tablesFont, Brushes::Black, left + 270, top + 5);    // ����Ũ��

				 g->DrawLine(tablesPen, left + 500, top, left + 500, top + 30);

				 g->DrawString(item->SubItems[3]->Text, tablesFont, Brushes::Black, left + 520, top + 5);    // ʱ��				

				 g->DrawLine(tablesPen, left, top + 30, left + width, top + 30);

				 top += 30, height -= 30;
			 }
			 e->HasMorePages = false;
		 }
		else if (strTableName == "��һ�������ݱ�")
		{	 g->DrawString(L"��һ�������ݱ�", headerFont, Brushes::Black, left + 200, top);
		 // ��ӡ����(������ɫ,����,12��)
		 top += 40;
		 Drawing::Pen^  tablesPen = gcnew Drawing::Pen(Color::Black);

		 // g->FillRectangle(Brushes::LightGray, Rectangle(left,top,width,30));

		 g->DrawLine(tablesPen, left, top + 30, left + width, top + 30);

		 Drawing::Font^titlesFont = gcnew Drawing::Font(L"����", 12, FontStyle::Bold);

		 g->DrawString(L"���", titlesFont, Brushes::Black, left + 10, top + 5);

		 g->DrawLine(tablesPen, left + 50, top, left + 50, top + 30);          //�зָ���

		 g->DrawString(L"�ƾ�Ũ��", titlesFont, Brushes::Black, left + 60, top + 5);

		 g->DrawLine(tablesPen, left + 150, top, left + 150, top + 30);

		 g->DrawString(L"PM2.5Ũ��", titlesFont, Brushes::Black, left + 160, top + 5);

		 g->DrawLine(tablesPen, left + 250, top, left + 250, top + 30);

		 g->DrawString(L"�¶�", titlesFont, Brushes::Black, left + 270, top + 5);

		 g->DrawLine(tablesPen, left + 320, top, left + 320, top + 30);

		 g->DrawString(L"ʪ��", titlesFont, Brushes::Black, left + 330, top + 5);

		 g->DrawLine(tablesPen, left + 385, top, left + 385, top + 30);

		 g->DrawString(L"����ʱ��", titlesFont, Brushes::Black, left + 405, top + 5);

		 g->DrawLine(tablesPen, left + 550, top, left + 550, top + 30);

		 g->DrawString(L"��Ӧ����", titlesFont, Brushes::Black, left + 560, top + 5);

		 // ��ӡҳ��

		 top += 30, height -= 30;

		 Drawing::Font^ tablesFont =

			 gcnew Drawing::Font(L"����", 12, FontStyle::Regular);

		 for each(ListViewItem^ item in this->listView1->Items) {

			 g->DrawString(item->SubItems[0]->Text, tablesFont, Brushes::Black, left + 20, top + 5);      // ���

			 g->DrawLine(tablesPen, left + 50, top, left + 50, top + 30);             //�зָ���

			 g->DrawString(item->SubItems[1]->Text, tablesFont, Brushes::Black, left + 70, top + 5);    // ��������

			 g->DrawLine(tablesPen, left + 150, top, left + 150, top + 30);

			 g->DrawString(item->SubItems[2]->Text, tablesFont, Brushes::Black, left + 170, top + 5);    // ����Ũ��

			 g->DrawLine(tablesPen, left + 250, top, left + 250, top + 30);

			 g->DrawString(item->SubItems[3]->Text, tablesFont, Brushes::Black, left + 270, top + 5);    // ʱ��

			 g->DrawLine(tablesPen, left + 320, top, left + 320, top + 30);

			 g->DrawString(item->SubItems[4]->Text, tablesFont, Brushes::Black, left + 330, top + 5);    // ����

			 g->DrawLine(tablesPen, left+385, top , left + 385, top + 30);

			 g->DrawString(item->SubItems[5]->Text, tablesFont, Brushes::Black, left + 390, top + 5);    // ����

			 g->DrawLine(tablesPen, left+550, top, left + 550, top + 30);

			 g->DrawString(item->SubItems[6]->Text, tablesFont, Brushes::Black, left +560, top + 5);    // ����

			 g->DrawLine(tablesPen, left, top + 30, left + width, top + 30);

			 top += 30, height -= 30;
		 }
		 e->HasMorePages = false;
		}
 else if (strTableName == "�ڶ��������ݱ�")
 {
	 g->DrawString(L"�ڶ��������ݱ�", headerFont, Brushes::Black, left + 200, top);
	 // ��ӡ����(������ɫ,����,12��)
	 top += 40;
	 Drawing::Pen^  tablesPen = gcnew Drawing::Pen(Color::Black);

	 // g->FillRectangle(Brushes::LightGray, Rectangle(left,top,width,30));

	 g->DrawLine(tablesPen, left, top + 30, left + width, top + 30);

	 Drawing::Font^titlesFont = gcnew Drawing::Font(L"����", 12, FontStyle::Bold);

	 g->DrawString(L"���", titlesFont, Brushes::Black, left + 10, top + 5);

	 g->DrawLine(tablesPen, left + 50, top, left + 50, top + 30);          //�зָ���

	 g->DrawString(L"�ƾ�Ũ��", titlesFont, Brushes::Black, left + 60, top + 5);

	 g->DrawLine(tablesPen, left + 150, top, left + 150, top + 30);

	 g->DrawString(L"PM2.5Ũ��", titlesFont, Brushes::Black, left + 160, top + 5);

	 g->DrawLine(tablesPen, left + 250, top, left + 250, top + 30);

	 g->DrawString(L"�¶�", titlesFont, Brushes::Black, left + 270, top + 5);

	 g->DrawLine(tablesPen, left + 320, top, left + 320, top + 30);

	 g->DrawString(L"ʪ��", titlesFont, Brushes::Black, left + 330, top + 5);

	 g->DrawLine(tablesPen, left + 385, top, left + 385, top + 30);

	 g->DrawString(L"����ʱ��", titlesFont, Brushes::Black, left + 405, top + 5);

	 g->DrawLine(tablesPen, left + 550, top, left + 550, top + 30);

	 g->DrawString(L"��Ӧ����", titlesFont, Brushes::Black, left + 560, top + 5);

	 // ��ӡҳ��

	 top += 30, height -= 30;

	 Drawing::Font^ tablesFont =

		 gcnew Drawing::Font(L"����", 12, FontStyle::Regular);

	 for each(ListViewItem^ item in this->listView1->Items) {

		 g->DrawString(item->SubItems[0]->Text, tablesFont, Brushes::Black, left + 20, top + 5);      // ���

		 g->DrawLine(tablesPen, left + 50, top, left + 50, top + 30);             //�зָ���

		 g->DrawString(item->SubItems[1]->Text, tablesFont, Brushes::Black, left + 70, top + 5);    // ��������

		 g->DrawLine(tablesPen, left + 150, top, left + 150, top + 30);

		 g->DrawString(item->SubItems[2]->Text, tablesFont, Brushes::Black, left + 170, top + 5);    // ����Ũ��

		 g->DrawLine(tablesPen, left + 250, top, left + 250, top + 30);

		 g->DrawString(item->SubItems[3]->Text, tablesFont, Brushes::Black, left + 270, top + 5);    // ʱ��

		 g->DrawLine(tablesPen, left + 320, top, left + 320, top + 30);

		 g->DrawString(item->SubItems[4]->Text, tablesFont, Brushes::Black, left + 330, top + 5);    // ����

		 g->DrawLine(tablesPen, left + 385, top, left + 385, top + 30);

		 g->DrawString(item->SubItems[5]->Text, tablesFont, Brushes::Black, left + 390, top + 5);    // ����

		 g->DrawLine(tablesPen, left + 550, top, left + 550, top + 30);

		 g->DrawString(item->SubItems[6]->Text, tablesFont, Brushes::Black, left + 560, top + 5);    // ����

		 g->DrawLine(tablesPen, left, top + 30, left + width, top + 30);

		 top += 30, height -= 30;
	 }
	 e->HasMorePages = false;
 }
 else if (strTableName == "�����������ݱ�")
 {
	 g->DrawString(L"�����������ݱ�", headerFont, Brushes::Black, left + 200, top);
	 // ��ӡ����(������ɫ,����,12��)
	 top += 40;
	 Drawing::Pen^  tablesPen = gcnew Drawing::Pen(Color::Black);

	 // g->FillRectangle(Brushes::LightGray, Rectangle(left,top,width,30));

	 g->DrawLine(tablesPen, left, top + 30, left + width, top + 30);

	 Drawing::Font^titlesFont = gcnew Drawing::Font(L"����", 12, FontStyle::Bold);

	 g->DrawString(L"���", titlesFont, Brushes::Black, left + 10, top + 5);

	 g->DrawLine(tablesPen, left + 50, top, left + 50, top + 30);          //�зָ���

	 g->DrawString(L"�ƾ�Ũ��", titlesFont, Brushes::Black, left + 60, top + 5);

	 g->DrawLine(tablesPen, left + 150, top, left + 150, top + 30);

	 g->DrawString(L"PM2.5Ũ��", titlesFont, Brushes::Black, left + 160, top + 5);

	 g->DrawLine(tablesPen, left + 250, top, left + 250, top + 30);

	 g->DrawString(L"�¶�", titlesFont, Brushes::Black, left + 270, top + 5);

	 g->DrawLine(tablesPen, left + 320, top, left + 320, top + 30);

	 g->DrawString(L"ʪ��", titlesFont, Brushes::Black, left + 330, top + 5);

	 g->DrawLine(tablesPen, left + 385, top, left + 385, top + 30);

	 g->DrawString(L"����ʱ��", titlesFont, Brushes::Black, left + 405, top + 5);

	 g->DrawLine(tablesPen, left + 550, top, left + 550, top + 30);

	 g->DrawString(L"��Ӧ����", titlesFont, Brushes::Black, left + 560, top + 5);

	 // ��ӡҳ��

	 top += 30, height -= 30;

	 Drawing::Font^ tablesFont =

		 gcnew Drawing::Font(L"����", 12, FontStyle::Regular);

	 for each(ListViewItem^ item in this->listView1->Items) {

		 g->DrawString(item->SubItems[0]->Text, tablesFont, Brushes::Black, left + 20, top + 5);      // ���

		 g->DrawLine(tablesPen, left + 50, top, left + 50, top + 30);             //�зָ���

		 g->DrawString(item->SubItems[1]->Text, tablesFont, Brushes::Black, left + 70, top + 5);    // ��������

		 g->DrawLine(tablesPen, left + 150, top, left + 150, top + 30);

		 g->DrawString(item->SubItems[2]->Text, tablesFont, Brushes::Black, left + 170, top + 5);    // ����Ũ��

		 g->DrawLine(tablesPen, left + 250, top, left + 250, top + 30);

		 g->DrawString(item->SubItems[3]->Text, tablesFont, Brushes::Black, left + 270, top + 5);    // ʱ��

		 g->DrawLine(tablesPen, left + 320, top, left + 320, top + 30);

		 g->DrawString(item->SubItems[4]->Text, tablesFont, Brushes::Black, left + 330, top + 5);    // ����

		 g->DrawLine(tablesPen, left + 385, top, left + 385, top + 30);

		 g->DrawString(item->SubItems[5]->Text, tablesFont, Brushes::Black, left + 390, top + 5);    // ����

		 g->DrawLine(tablesPen, left + 550, top, left + 550, top + 30);

		 g->DrawString(item->SubItems[6]->Text, tablesFont, Brushes::Black, left + 560, top + 5);    // ����

		 g->DrawLine(tablesPen, left, top + 30, left + width, top + 30);

		 top += 30, height -= 30;
	 }
	 e->HasMorePages = false;
 }
}
//private: String^ strConn;

private: String^ strConn;
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 strConn = String::Format("Provider=Microsoft.Jet.OLEDB.4.0; Data Source=AMCS.mdb");

			 OleDbConnection^ con1 = gcnew OleDbConnection(strConn);

			 con1->Open();    // ������
			 int nIndex = this->comboBox1->SelectedIndex;
		

			 if (nIndex < 0) return;
			 
			 String^ strTableName = this->comboBox1->Items[nIndex]->ToString();			 // ��ȡѡ������ݱ���
			 // ʹ��DataAdapter��DataSet

			 String^ strCmd = String::Format("SELECT * FROM {0}", strTableName);

			//OleDbDataAdapter^ da1 = gcnew OleDbDataAdapter(cmdText, strConn);

			// DataSet^ theSet1 = gcnew DataSet();

	    	// da1->Fill(theSet1, "TestInfo");         // ����ָ��������
			 //this->Text = "�쳣���ݲ�ѯ";

			// String ^strCmd = "SELECT *FROM yichang_data";

			 Data::OleDb::OleDbCommand ^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, this->oleDbConnection1);

			 this->oleDbDataAdapter1->SelectCommand = cmd;

			 oleDbDataAdapter1->Fill(dataSet1, "TestInfo");
			 // ��ȡ���ݱ�

			 oleDbDataAdapter1->Fill(dataSet1, strTableName);

			 DataTable^ table1 = dataSet1->Tables[strTableName];

			 table1->PrimaryKey = gcnew array<DataColumn^>{ table1->Columns[0] };

			 binding1 = gcnew BindingSource(dataSet1, strTableName);
			 DispView(table1);
			 //	 this->dataGridView1->DataSource = dataSet1;

			 //	 this->dataGridView1->DataMember = "TestInfo";
			 //this->dataGridView1->DataSource = theSet1;

			 //this->dataGridView1->DataMember = "Test"; // ָ��Ҫ�򿪵ı�

			 /* ֱ��ʹ�ñ�

			 DataTable^ table = gcnew DataTable;

			 da1->Fill( table );

			 this->dataGridView1->DataSource =table;*/
}


private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {

}
private: System::Void SearchForm_Load(System::Object^  sender, System::EventArgs^  e) {
			
			 //strConn = String::Format("Provider=Microsoft.Jet.OLEDB.4.0; Data Source=AMCS.mdb");
			 //OleDbConnection^ con1 = gcnew OleDbConnection(strConn);
			 //con1->Open();    // ������		
			 //OleDbCommand^odCommand_nongdu = con1->CreateCommand();
			 //OleDbCommand^odCommand_time = con1->CreateCommand();
			 //odCommand_nongdu->CommandText = "select �ƾ�Ũ�� from �쳣���ݱ�_�ƾ�";   //������ȡ C#����Access֮���ж�ȡmdb  
			 //odCommand_time->CommandText = "select �ƾ�����ʱ�� from �쳣���ݱ�_�ƾ�";
			 //OleDbDataReader^ odrReader_nongdu = odCommand_nongdu->ExecuteReader();
			 //OleDbDataReader^ odrReader_time = odCommand_time->ExecuteReader();
			 //array<String^> ^Arr1 = gcnew array<String^>(1000);
			 //array<String^> ^Arr2 = gcnew array<String^>(1000);		 
			 /* ArrayList^ Arr1 = gcnew ArrayList();
			 ArrayList^ Arr2 = gcnew ArrayList();*/
			/* 
			 int im = 0, jm = 0;
			 while (odrReader_nongdu->Read())
			 {
				 Arr1[im] = odrReader_nongdu["�ƾ�Ũ��"]->ToString();
				
				 im++;
				  Arr1->Add(odrReader_nongdu["�ƾ�Ũ��"]->ToString());
				  Arr2->Add(odrReader_time["�ƾ�����ʱ��"]->ToString());
			 }*/
			 //while (odrReader_time->Read())
			 //{
				// Arr2[jm] = odrReader_time["�ƾ�����ʱ��"]->ToString();
				//
				// // Arr1->Add(odrReader_nongdu["�ƾ�Ũ��"]->ToString());
				// //  Arr2->Add(odrReader_time["�ƾ�����ʱ��"]->ToString());
				// jm++;
			 //}
			 /*odrReader_nongdu->Close();
			 odrReader_time->Close();
			 con1->Close();*/

			 //String^ str7 = "SELECT * FROM �쳣���ݱ�_�ƾ�";
			 //this->oleDbDataAdapter1->SelectCommand->CommandText = str7;
			 //DataTable^ dat9 = gcnew DataTable();
			 //this->oleDbDataAdapter1->Fill(dat9);
			 //for (int i = 0; i <= dat9->Rows->Count - 1; i++){
				// Arr2[i] = dat9->Rows[i]->ItemArray[2]->ToString();
			 //}
			 //for (int i = 0; i <= dat9->Rows->Count - 1; i++) {
				// Arr1[i] = dat9->Rows[i]->ItemArray[1]->ToString();
			 //}
			 //int leng = Arr1->Length;
			 //for (int i = 0; i < leng; i++)
			 //{
				// if (Arr1[i] != nullptr&&Arr2[i] != nullptr){
				//	 this->listBox1->Text = Arr1[i];
				//	 chart1->Series["Series1"]->Points->AddXY(Arr2[i], Arr1[i]);
				// }  //��ͼ
			 //}
				 //chart1->Series["Series1"]->Points->AddXY(Arr2, Arr1);
			 //chart1->Series["Series1"]->Points->AddXY(Arr2, Arr1);
			 //chart1->Series["Series1"]->Points->AddXY(Arr2, Arr1);

}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 int nIndex = this->comboBox2->SelectedIndex;
			 if (nIndex < 0) return;
			 String^ strTableName = this->comboBox2->Items[nIndex]->ToString();			 // ��ȡѡ������ݱ���
			 if (strTableName == "�쳣���ݱ�_�ƾ�")
			 {
				 chart1->Series["Series1"]->Points->Clear();
				 chart1->Series["Series1"]->ToolTip = "Ũ��(ppm):#VAL";	
				 this->chart1->Series["Series1"]->LegendText = "�ƾ�";
				 array<String^> ^Arr1 = gcnew array<String^>(1000);
				 array<String^> ^Arr2 = gcnew array<String^>(1000);
				 String^ str7 = "SELECT * FROM �쳣���ݱ�_�ƾ�";
				// str7 += comboBox1->Text;
				 str7 += " WHERE";
				 str7 += " �ƾ�����ʱ��>=";
				 str7 += dateTimePicker1->Value.ToOADate();
				 str7 += " AND �ƾ�����ʱ��<=";
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
					 }  //��ͼ
				 }

			 }
			 else if (strTableName == "�쳣���ݱ�_PM")
			 {
				 chart1->Series["Series1"]->Points->Clear();
				 chart1->Series["Series1"]->ToolTip = "Ũ��(ppm):#VAL";
				 this->chart1->Series["Series1"]->LegendText = "PM2.5";
				 array<String^> ^Arr1 = gcnew array<String^>(1000);
				 array<String^> ^Arr2 = gcnew array<String^>(1000);
				 String^ str7 = "SELECT * FROM �쳣���ݱ�_PM";
				 str7 += " WHERE";
				 str7 += " PM����ʱ��>=";
				 str7 += dateTimePicker1->Value.ToOADate();
				 str7 += " AND PM����ʱ��<=";
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
					 }  //��ͼ
				 }
			 }
			 else if (strTableName == "�쳣���ݱ�_�¶�")
			 {
				 chart1->Series["Series1"]->Points->Clear();
				 this->chart1->Series["Series1"]->LegendText = "�¶�";
				 array<String^> ^Arr1 = gcnew array<String^>(1000);
				 array<String^> ^Arr2 = gcnew array<String^>(1000);
				 String^ str7 = "SELECT * FROM �쳣���ݱ�_�¶�";
				 str7 += " WHERE";
				 str7 += " �¶�����ʱ��>=";
				 str7 += dateTimePicker1->Value.ToOADate();
				 str7 += " AND �¶�����ʱ��<=";
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
					 }  //��ͼ
				 }
			 }
			 else if (strTableName == "�쳣���ݱ�_ʪ��")
			 {
				 chart1->Series["Series1"]->Points->Clear();
				 chart1->Series["Series1"]->ToolTip = "ʪ��(��):#VAL";
				 this->chart1->Series["Series1"]->LegendText = "ʪ��";
				 array<String^> ^Arr1 = gcnew array<String^>(1000);
				 array<String^> ^Arr2 = gcnew array<String^>(1000);
				 String^ str7 = "SELECT * FROM �쳣���ݱ�_ʪ��";
				 str7 += " WHERE";
				 str7 += " ʪ������ʱ��>=";
				 str7 += dateTimePicker1->Value.ToOADate();
				 str7 += " AND ʪ������ʱ��<=";
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
					 }  //��ͼ
				 }
			 }

}
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 int nIndex = this->comboBox2->SelectedIndex;
			 if (nIndex < 0) return;
			 String^ strTableName = this->comboBox2->Items[nIndex]->ToString();			 // ��ȡѡ������ݱ���
			 if (strTableName == "�쳣���ݱ�_�ƾ�")
			 {
				 chart1->Series["Series1"]->Points->Clear();
				 chart1->Series["Series1"]->ToolTip = "Ũ��(ppm):#VAL";
				 this->chart1->Series["Series1"]->LegendText = "�ƾ�";
				 array<String^> ^Arr1 = gcnew array<String^>(1000);
				 array<String^> ^Arr2 = gcnew array<String^>(1000);
				 String^ str7 = "SELECT * FROM �쳣���ݱ�_�ƾ�";
				 // str7 += comboBox1->Text;
				 str7 += " WHERE";
				 str7 += " �ƾ�����ʱ��>=";
				 str7 += dateTimePicker1->Value.ToOADate();
				 str7 += " AND �ƾ�����ʱ��<=";
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
					 }  //��ͼ
				 }

			 }
			 else if (strTableName == "�쳣���ݱ�_PM")
			 {
				 chart1->Series["Series1"]->Points->Clear();
				 chart1->Series["Series1"]->ToolTip = "Ũ��(ppm):#VAL";
				 this->chart1->Series["Series1"]->LegendText = "PM2.5";
				 array<String^> ^Arr1 = gcnew array<String^>(1000);
				 array<String^> ^Arr2 = gcnew array<String^>(1000);
				 String^ str7 = "SELECT * FROM �쳣���ݱ�_PM";
				 str7 += " WHERE";
				 str7 += " PM����ʱ��>=";
				 str7 += dateTimePicker1->Value.ToOADate();
				 str7 += " AND PM����ʱ��<=";
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
					 }  //��ͼ
				 }
			 }
			 else if (strTableName == "�쳣���ݱ�_�¶�")
			 {
				 chart1->Series["Series1"]->Points->Clear();
				 this->chart1->Series["Series1"]->LegendText = "�¶�";
				 array<String^> ^Arr1 = gcnew array<String^>(1000);
				 array<String^> ^Arr2 = gcnew array<String^>(1000);
				 String^ str7 = "SELECT * FROM �쳣���ݱ�_�¶�";
				 str7 += " WHERE";
				 str7 += " �¶�����ʱ��>=";
				 str7 += dateTimePicker1->Value.ToOADate();
				 str7 += " AND �¶�����ʱ��<=";
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
					 }  //��ͼ
				 }
			 }
			 else if (strTableName == "�쳣���ݱ�_ʪ��")
			 {
				 chart1->Series["Series1"]->Points->Clear();
				 chart1->Series["Series1"]->ToolTip = "ʪ��(��):#VAL";
				 this->chart1->Series["Series1"]->LegendText = "ʪ��";
				 array<String^> ^Arr1 = gcnew array<String^>(1000);
				 array<String^> ^Arr2 = gcnew array<String^>(1000);
				 String^ str7 = "SELECT * FROM �쳣���ݱ�_ʪ��";
				 str7 += " WHERE";
				 str7 += " ʪ������ʱ��>=";
				 str7 += dateTimePicker1->Value.ToOADate();
				 str7 += " AND ʪ������ʱ��<=";
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
					 }  //��ͼ
				 }
			 }
}
private: System::Void monthCalendar1_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
}
};
}
