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
	/// AnalyseForm 摘要
	/// </summary>
	public ref class AnalyseForm : public System::Windows::Forms::Form
	{
	public:
		AnalyseForm(void)
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
		~AnalyseForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter2;
	private: System::Data::OleDb::OleDbCommand^  oleDbCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbCommand2;
	private: System::Data::OleDb::OleDbCommand^  oleDbCommand3;
	private: System::Data::OleDb::OleDbCommand^  oleDbCommand4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label9;

	protected:

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
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->oleDbDataAdapter2 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbCommand2 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbCommand3 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbCommand4 = (gcnew System::Data::OleDb::OleDbCommand());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
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
			this->textBox1->Location = System::Drawing::Point(82, 121);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 21);
			this->textBox1->TabIndex = 1;
			// 
			// oleDbDataAdapter2
			// 
			this->oleDbDataAdapter2->DeleteCommand = this->oleDbCommand1;
			this->oleDbDataAdapter2->InsertCommand = this->oleDbCommand2;
			this->oleDbDataAdapter2->SelectCommand = this->oleDbCommand3;
			this->oleDbDataAdapter2->UpdateCommand = this->oleDbCommand4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(82, 43);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 21);
			this->textBox2->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 12);
			this->label1->TabIndex = 4;
			this->label1->Text = L"2-10度有 ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(188, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 12);
			this->label2->TabIndex = 5;
			this->label2->Text = L"个数据";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(188, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 12);
			this->label3->TabIndex = 6;
			this->label3->Text = L"个数据";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 124);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 12);
			this->label4->TabIndex = 7;
			this->label4->Text = L"30-50度有 ";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(26, 47);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(255, 184);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"温度分析";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(21, 85);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 12);
			this->label5->TabIndex = 9;
			this->label5->Text = L"低温条件占总异常数目";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(152, 82);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(48, 21);
			this->textBox3->TabIndex = 8;
			// 
			// listView1
			// 
			this->listView1->Enabled = false;
			this->listView1->Location = System::Drawing::Point(178, 241);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(8, 8);
			this->listView1->TabIndex = 9;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// listView2
			// 
			this->listView2->Enabled = false;
			this->listView2->Location = System::Drawing::Point(77, 241);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(8, 8);
			this->listView2->TabIndex = 10;
			this->listView2->UseCompatibleStateImageBehavior = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(206, 85);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(11, 12);
			this->label6->TabIndex = 10;
			this->label6->Text = L"%";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(206, 157);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(11, 12);
			this->label7->TabIndex = 13;
			this->label7->Text = L"%";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(21, 157);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(125, 12);
			this->label8->TabIndex = 12;
			this->label8->Text = L"高温条件占总异常数目";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(152, 154);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(48, 21);
			this->textBox4->TabIndex = 11;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"温度分析" });
			this->comboBox1->Location = System::Drawing::Point(122, 12);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 20);
			this->comboBox1->TabIndex = 11;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(53, 15);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(53, 12);
			this->label9->TabIndex = 12;
			this->label9->Text = L"类型查询";
			// 
			// AnalyseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(326, 237);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"AnalyseForm";
			this->Text = L"历史数据分析";
			this->Load += gcnew System::EventHandler(this, &AnalyseForm::AnalyseForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
					 private: System::Void DispView0(DataTable^ table)

					 {

								  this->listView2->Columns->Clear();

								  this->listView2->Items->Clear();

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

									  listView2->Items->Add(item);

								  }

								  // 创建ListView列表头

								  for each (DataColumn^ col in table->Columns)

									  listView2->Columns->Add(col->Caption, 120);

					 }
	   private: BindingSource^ binding1;
private: BindingSource^ binding2;
	private: String^ strConn;
	private: System::Void AnalyseForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 strConn = String::Format("Provider=Microsoft.Jet.OLEDB.4.0; Data Source=AGMS.mdb");

				 OleDbConnection^ con1 = gcnew OleDbConnection(strConn);

				 con1->Open();    // 打开连接
				//int nIndex = this->comboBox1->SelectedIndex;


				 //if (nIndex < 0) return;

				 String^ strTableName = "异常数据表_温度";      //this->comboBox1->Items[nIndex]->ToString();			 // 获取选择的数据表名

				 // 使用DataAdapter和DataSet
				 String^ strCmd1;
				 String^ strCmd2;
				 strCmd1 = String::Format("SELECT * FROM {0} WHERE 温度>={1} AND 温度<={2}", strTableName, 30, 50);
				 strCmd2 = String::Format("SELECT * FROM {0} WHERE 温度>={1} AND 温度<={2}", strTableName, 2, 10);
				 System::Data::OleDb::OleDbCommand ^ cmd = gcnew System::Data::OleDb::OleDbCommand(strCmd1, con1);
				 System::Data::OleDb::OleDbCommand ^ cmd2 = gcnew System::Data::OleDb::OleDbCommand(strCmd2, con1);

				 this->oleDbDataAdapter1->SelectCommand = cmd;
				 this->oleDbDataAdapter2->SelectCommand = cmd2;

				 System::Data::DataSet^  dataSet = gcnew DataSet();
				 System::Data::DataSet^  dataSet0 = gcnew DataSet();

				 oleDbDataAdapter1->Fill(dataSet, "TestInfo");
				 oleDbDataAdapter2->Fill(dataSet0, "TestInfo");
				 // 获取数据表
				 oleDbDataAdapter1->Fill(dataSet, strTableName);
				 oleDbDataAdapter2->Fill(dataSet0, strTableName);
				 DataTable^ table1 = dataSet->Tables[strTableName];
				 DataTable^ table2 = dataSet0->Tables[strTableName];
				 table1->PrimaryKey = gcnew array<DataColumn^>{ table1->Columns[0] };
				 table2->PrimaryKey = gcnew array<DataColumn^>{ table2->Columns[0] };
				 binding1 = gcnew BindingSource(dataSet, strTableName);
				 binding2 = gcnew BindingSource(dataSet0, strTableName);
				 DispView(table1);
				 DispView0(table2);
				 this->textBox1->Text = this->listView1->Items->Count.ToString();
				 this->textBox2->Text = this->listView2->Items->Count.ToString();
				 this->textBox3->Text = (Double(this->listView2->Items->Count)*100/500).ToString();
				 this->textBox4->Text = (Double(this->listView1->Items->Count) * 100 / 500).ToString();
	}
	};
}
