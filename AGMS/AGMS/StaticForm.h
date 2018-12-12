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
	/// StaticForm 摘要
	/// </summary>
	public ref class StaticForm : public System::Windows::Forms::Form
	{
	public:
		StaticForm(void)
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
		~StaticForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	protected:
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;






	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::GroupBox^  groupBox2;


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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(514, 63);
			this->listView1->Margin = System::Windows::Forms::Padding(2);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(620, 317);
			this->listView1->TabIndex = 8;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"异常数据表_温度", L"异常数据表_湿度", L"异常数据表_振荡度", L"异常数据表_有毒气体" });
			this->comboBox1->Location = System::Drawing::Point(879, 29);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 20);
			this->comboBox1->TabIndex = 9;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &StaticForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(724, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 16);
			this->label1->TabIndex = 10;
			this->label1->Text = L"选择异常数据类型";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Yellow;
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->dateTimePicker2);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Green;
			this->groupBox1->Location = System::Drawing::Point(53, 63);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(441, 152);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"选择查询时间范围";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 83);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 19);
			this->label2->TabIndex = 3;
			this->label2->Text = L"结束时间";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 23);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"开始时间";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"yyyy/MM/dd HH:mm:ss";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(62, 104);
			this->dateTimePicker2->Margin = System::Windows::Forms::Padding(2);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(294, 28);
			this->dateTimePicker2->TabIndex = 1;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy/MM/dd HH:mm:ss";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(62, 44);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(294, 28);
			this->dateTimePicker1->TabIndex = 0;
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand1;
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(364, 334);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 21);
			this->textBox1->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(170, 310);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 16);
			this->label4->TabIndex = 13;
			this->label4->Text = L" ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(273, 334);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 16);
			this->label5->TabIndex = 14;
			this->label5->Text = L"异常数据有";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(470, 334);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(24, 16);
			this->label6->TabIndex = 15;
			this->label6->Text = L"条";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(47, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 23);
			this->button1->TabIndex = 16;
			this->button1->Text = L"打印预览";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StaticForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(199, 29);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 17;
			this->button2->Text = L"打印";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &StaticForm::button2_Click);
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &StaticForm::printDocument1_PrintPage);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Location = System::Drawing::Point(53, 238);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(304, 69);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"报表生成";
			// 
			// StaticForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1182, 410);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->listView1);
			this->Name = L"StaticForm";
			this->Text = L"异常数据";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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

					 listView1->Columns->Add(col->Caption, 120);

	}
			 private: String^ strConn;
					  //public:int num;
					  //OleDbDataAdapter^oleDbDataAdapter1 = gcnew OleDbDataAdapter();
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 strConn = String::Format("Provider=Microsoft.Jet.OLEDB.4.0; Data Source=AGMS.mdb");

				 OleDbConnection^ con1 = gcnew OleDbConnection(strConn);

				 con1->Open();    // 打开连接
				 int nIndex = this->comboBox1->SelectedIndex;


				 if (nIndex < 0) return;

				 String^ strTableName = this->comboBox1->Items[nIndex]->ToString();			 // 获取选择的数据表名

				 // 使用DataAdapter和DataSet
				 String^ strCmd;
				 switch (nIndex)
				 {
				 case 0:			 
					 strCmd = String::Format("SELECT * FROM {0} WHERE 温度日期时间>={1} AND 温度日期时间<={2}", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());
					 this->label4->Text = "温度";
					 break;
				 case 1:
					 strCmd = String::Format("SELECT * FROM {0} WHERE 湿度日期时间>={1} AND 湿度日期时间<={2}", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());
					 this->label4->Text = "湿度";
					 break;
				 case 2:
					 strCmd = String::Format("SELECT * FROM {0} WHERE 振荡度日期时间>={1} AND 振荡度日期时间<={2}", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());
					 this->label4->Text = "振荡度";
					 break;
				 case 3:
					 strCmd = String::Format("SELECT * FROM {0} WHERE 有毒气体日期时间>={1} AND 有毒气体日期时间<={2}", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());
					 this->label4->Text = "有毒气体";
					 break;

				 }
	
				 this->listView1->Columns->Clear();

				 this->listView1->Items->Clear();
				 //this->textBox1->Text = " ";



				 System::Data::OleDb::OleDbCommand ^ cmd = gcnew System::Data::OleDb::OleDbCommand(strCmd, con1);

				 this->oleDbDataAdapter1->SelectCommand = cmd;

				 System::Data::DataSet^  dataSet = gcnew DataSet();

				 oleDbDataAdapter1->Fill(dataSet, "TestInfo");
				 // 获取数据表
				 oleDbDataAdapter1->Fill(dataSet, strTableName);
				 DataTable^ table1 = dataSet->Tables[strTableName];
				 table1->PrimaryKey = gcnew array<DataColumn^>{ table1->Columns[0] };
				 binding1 = gcnew BindingSource(dataSet, strTableName);
				 DispView(table1);
				 int i;
				 this->textBox1->Text = this->listView1->Items->Count.ToString();
				 //this->listView1->AutoResizeColumn(5, ColumnHeaderAutoResizeStyle::ColumnContent);
	}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 PrintPreviewDialog^ previewDlg = gcnew PrintPreviewDialog(); // 打印预览对话框

			 previewDlg->Document = this->printDocument1;         //设置打印文档对象

			 previewDlg->ShowDialog();                                      // 显示打印预览对话框
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 PrintDialog^ printDlg = gcnew PrintDialog();                   //打印对话框

			 printDlg->Document = this->printDocument1;            //设置打印文档

			 if (printDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)

				 this->printDocument1->Print();                               //开始打印
}

private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
			 Graphics^ g = e->Graphics;

			 int left = e->MarginBounds.Left;                   // 左上角X位置

			 int top = e->MarginBounds.Top;                   // 左上角Y位置

			 int width = e->MarginBounds.Width;                 //有效区域宽度

			 int height = e->MarginBounds.Height;             // 有效区域高度

			 // 打印页头(宋体,26号)

			 Drawing::Font^ headerFont =

				 gcnew Drawing::Font(L"宋体", 20, FontStyle::Regular);

			 g->DrawString(L"中通快递运输异常报表", headerFont, Brushes::Black, left + 150, top);

			 // 打印标题(背景灰色,宋体,12号)

			 top += 60;

			 Drawing::Pen^  tablesPen = gcnew Drawing::Pen(Color::Black);

			// g->FillRectangle(Brushes::LightGray, Rectangle(left, top, width, 30));
			 g->DrawImage(gcnew Bitmap("..\\Debug\\1.jpg") , 650, -15 , 160, top + 10);
			 g->DrawLine(tablesPen, left, top + 30, left + width, top + 30);

			 Drawing::Font^titlesFont = gcnew Drawing::Font(L"宋体", 12, FontStyle::Bold);

			 g->DrawString(L"ID", titlesFont, Brushes::Black, left + 40, top + 5);

			 g->DrawLine(tablesPen, left + 120, top, left + 120, top + 30);          //列分隔线

			 g->DrawString(L"温度", titlesFont, Brushes::Black, left + 150, top + 5);

			 g->DrawLine(tablesPen, left + 220, top, left + 220, top + 30);

			 g->DrawString(L"温度日期时间", titlesFont, Brushes::Black, left + 290, top + 5);

			 g->DrawLine(tablesPen, left + 440, top, left + 440, top + 30);

			 g->DrawString(L"车辆", titlesFont, Brushes::Black, left + 480, top + 5);

			 //g->DrawLine(tablesPen, left + 430, top, left + 430, top + 30);

			 //g->DrawString(L"成绩3", titlesFont, Brushes::Black, left + 450, top + 5);

			 // 打印页表

			 top += 30, height -= 30;

			 Drawing::Font^ tablesFont =

				 gcnew Drawing::Font(L"宋体", 12, FontStyle::Regular);

			 for each(ListViewItem^ item in this->listView1->Items) {

				 g->DrawString(item->SubItems[0]->Text, tablesFont, Brushes::Black, left + 30, top + 5);      // 学号

				 g->DrawLine(tablesPen, left + 120, top, left + 120, top + 30);             //列分隔线

				 g->DrawString(item->SubItems[1]->Text, tablesFont, Brushes::Black, left + 150, top + 5);    // 姓名

				 g->DrawLine(tablesPen, left + 220, top, left + 220, top + 30);

				 g->DrawString(item->SubItems[2]->Text, tablesFont, Brushes::Black, left + 260, top + 5);    // 成绩1

				 g->DrawLine(tablesPen, left + 440, top, left + 440, top + 30);

				 g->DrawString(item->SubItems[3]->Text, tablesFont, Brushes::Black, left + 480, top + 5);    // 成绩2

				// g->DrawLine(tablesPen, left + 620, top, left + 650, top + 30);

				 //g->DrawString(item->SubItems[4]->Text, tablesFont, Brushes::Black, left + 460, top + 5);    // 成绩3

				 //g->DrawLine(tablesPen, left, top + 30, left + width, top + 30);

				 top += 30, height -= 30;

			 }

			 e->HasMorePages = false;
}
};
}
