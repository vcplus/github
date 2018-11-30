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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			this->groupBox1->SuspendLayout();
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
			this->groupBox1->Location = System::Drawing::Point(33, 27);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(334, 357);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"选择查询时间范围";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &HistorySearch::groupBox1_Enter);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 206);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 19);
			this->label2->TabIndex = 3;
			this->label2->Text = L"结束时间";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 41);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 19);
			this->label1->TabIndex = 2;
			this->label1->Text = L"开始时间";
			this->label1->Click += gcnew System::EventHandler(this, &HistorySearch::label1_Click);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"yyyy/MM/dd HH:mm:ss";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(27, 256);
			this->dateTimePicker2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(211, 28);
			this->dateTimePicker2->TabIndex = 1;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy/MM/dd HH:mm:ss";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(27, 90);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(206, 28);
			this->dateTimePicker1->TabIndex = 0;
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(418, 68);
			this->listView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(797, 411);
			this->listView1->TabIndex = 7;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->AutoResizeColumns(ColumnHeaderAutoResizeStyle::ColumnContent);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(468, 27);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 12);
			this->label4->TabIndex = 5;
			this->label4->Text = L"历史数据表";
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1号车数据表", L"2号车数据表", L"3号车数据表" });
			this->comboBox2->Location = System::Drawing::Point(713, 27);
			this->comboBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(134, 24);
			this->comboBox2->TabIndex = 8;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &HistorySearch::comboBox2_SelectedIndexChanged);
			// 
			// HistorySearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1299, 562);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"HistorySearch";
			this->Text = L"历史查询";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
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
		 OleDbDataAdapter^oleDbDataAdapter1 = gcnew OleDbDataAdapter();
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	strConn = String::Format("Provider=Microsoft.Jet.OLEDB.4.0; Data Source=AGMS.mdb");

	OleDbConnection^ con1 = gcnew OleDbConnection(strConn);
	
	con1->Open();    // 打开连接
	int nIndex = this->comboBox2->SelectedIndex;


	if (nIndex < 0) return;

	String^ strTableName = this->comboBox2->Items[nIndex]->ToString();			 // 获取选择的数据表名
	// 使用DataAdapter和DataSet

	String^ strCmd = String::Format("SELECT * FROM {0} WHERE 日期时间>={1} AND 日期时间<={2}", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());

	//OleDbDataAdapter^ da1 = gcnew OleDbDataAdapter(cmdText, strConn);

	// DataSet^ theSet1 = gcnew DataSet();

	// da1->Fill(theSet1, "TestInfo");         // 重新指定表名称
	//this->Text = "异常数据查询";

	// String ^strCmd = "SELECT *FROM yichang_data";
	this->listView1->Columns->Clear();

	this->listView1->Items->Clear();



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

};
}
