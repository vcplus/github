#pragma once

namespace AGMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	//using namespace System::Drawing::Printing
	//using namespace System::Drawing::Drawing2D
	/// <summary>
	/// CreatingForm ժҪ
	/// </summary>
	public ref class CreatingForm : public System::Windows::Forms::Form
	{
	public:
		CreatingForm(void)
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
		~CreatingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PageSetupDialog^  pageSetupDialog1;
	protected:
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
	private: System::Windows::Forms::PrintDialog^  printDialog1;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::ComboBox^  comboBox1;







	protected:

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CreatingForm::typeid));
			this->pageSetupDialog1 = (gcnew System::Windows::Forms::PageSetupDialog());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &CreatingForm::printDocument1_PrintPage);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(61, 244);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreatingForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(299, 244);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CreatingForm::button2_Click);
			// 
			// listView1
			// 
			this->listView1->Location = System::Drawing::Point(471, 24);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(400, 276);
			this->listView1->TabIndex = 2;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand1;
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Yellow;
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->dateTimePicker2);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Green;
			this->groupBox1->Location = System::Drawing::Point(32, 49);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(405, 148);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ѡ���ѯʱ�䷶Χ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 83);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 19);
			this->label2->TabIndex = 3;
			this->label2->Text = L"����ʱ��";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 23);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"��ʼʱ��";
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
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"�쳣���ݱ�_�¶�", L"�쳣���ݱ�_ʪ��", L"�쳣���ݱ�_�񵴶�", L"�쳣���ݱ�_�ж�����" });
			this->comboBox1->Location = System::Drawing::Point(183, 12);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(153, 20);
			this->comboBox1->TabIndex = 13;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &CreatingForm::comboBox1_SelectedIndexChanged);
			// 
			// CreatingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(896, 324);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"CreatingForm";
			this->Text = L"CreatingForm";
			this->Load += gcnew System::EventHandler(this, &CreatingForm::CreatingForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

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

					 listView1->Columns->Add(col->Caption, 120);

	}
			 private: String^ strConn;
					  //public:int num;
					  //OleDbDataAdapter^oleDbDataAdapter1 = gcnew OleDbDataAdapter();
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 strConn = String::Format("Provider=Microsoft.Jet.OLEDB.4.0; Data Source=AGMS.mdb");

				 OleDbConnection^ con1 = gcnew OleDbConnection(strConn);

				 con1->Open();    // ������
				 int nIndex = this->comboBox1->SelectedIndex;


				 if (nIndex < 0) return;

				 String^ strTableName = this->comboBox1->Items[nIndex]->ToString();			 // ��ȡѡ������ݱ���

				 // ʹ��DataAdapter��DataSet
				 String^ strCmd;
				 switch (nIndex)
				 {
				 case 0:
					 strCmd = String::Format("SELECT * FROM {0} WHERE �¶�����ʱ��>={1} AND �¶�����ʱ��<={2}", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());
					 //this->label4->Text = "�¶�";
					 break;
				 case 1:
					 strCmd = String::Format("SELECT * FROM {0} WHERE ʪ������ʱ��>={1} AND ʪ������ʱ��<={2}", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());
					 //this->label4->Text = "ʪ��";
					 break;
				 case 2:
					 strCmd = String::Format("SELECT * FROM {0} WHERE �񵴶�����ʱ��>={1} AND �񵴶�����ʱ��<={2}", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());
					 //this->label4->Text = "�񵴶�";
					 break;
				 case 3:
					 strCmd = String::Format("SELECT * FROM {0} WHERE �ж���������ʱ��>={1} AND �ж���������ʱ��<={2}", strTableName, dateTimePicker1->Value.ToOADate(), dateTimePicker2->Value.ToOADate());
					 //this->label4->Text = "�ж�����";
					 break;

				 }

				 this->listView1->Columns->Clear();

				 this->listView1->Items->Clear();
				 //this->textBox1->Text = " ";



				 System::Data::OleDb::OleDbCommand ^ cmd = gcnew System::Data::OleDb::OleDbCommand(strCmd, con1);

				 this->oleDbDataAdapter1->SelectCommand = cmd;

				 System::Data::DataSet^  dataSet = gcnew DataSet();

				 oleDbDataAdapter1->Fill(dataSet, "TestInfo");
				 // ��ȡ���ݱ�
				 oleDbDataAdapter1->Fill(dataSet, strTableName);
				 DataTable^ table1 = dataSet->Tables[strTableName];
				 table1->PrimaryKey = gcnew array<DataColumn^>{ table1->Columns[0] };
				 binding1 = gcnew BindingSource(dataSet, strTableName);
				 DispView(table1);
				 int i;
				 //this->textBox1->Text = this->listView1->Items->Count.ToString();
				 //this->listView1->AutoResizeColumn(5, ColumnHeaderAutoResizeStyle::ColumnContent);
	}
	private: System::Void CreatingForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 //this->reportViewer1->RefreshReport();
				// this->reportViewer1->RefreshReport();
				 //this->reportViewer1->RefreshReport();
	}
	private: System::Void reportViewer1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 PrintPreviewDialog^ previewDlg = gcnew PrintPreviewDialog(); // ��ӡԤ���Ի���

				 previewDlg->Document = this->printDocument1;         //���ô�ӡ�ĵ�����

				 previewDlg->ShowDialog();                                      // ��ʾ��ӡԤ���Ի���
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
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

			 g->DrawString(L"ѧ���ɼ���", headerFont, Brushes::Black, left + 230, top);

			 // ��ӡ����(������ɫ,����,12��)

			 top += 60;

			 Drawing::Pen^  tablesPen = gcnew Drawing::Pen(Color::Black);

			// g->FillRectangle(Brushes::LightGray, Rectangle(left, top, width, 30));

			 g->DrawLine(tablesPen, left, top + 30, left + width, top + 30);

			 Drawing::Font^titlesFont = gcnew Drawing::Font(L"����", 12, FontStyle::Bold);

			 g->DrawString(L"ѧ��", titlesFont, Brushes::Black, left + 40, top + 5);

			 g->DrawLine(tablesPen, left + 120, top, left + 120, top + 30);          //�зָ���

			 g->DrawString(L"����", titlesFont, Brushes::Black, left + 160, top + 5);

			 g->DrawLine(tablesPen, left + 240, top, left + 240, top + 30);

			 g->DrawString(L"�ɼ�1", titlesFont, Brushes::Black, left + 260, top + 5);

			 g->DrawLine(tablesPen, left + 335, top, left + 335, top + 30);

			 g->DrawString(L"�ɼ�2", titlesFont, Brushes::Black, left + 355, top + 5);

			 g->DrawLine(tablesPen, left + 430, top, left + 430, top + 30);

			 g->DrawString(L"�ɼ�3", titlesFont, Brushes::Black, left + 450, top + 5);

			 // ��ӡҳ��

			 top += 30, height -= 30;

			 Drawing::Font^ tablesFont =

				 gcnew Drawing::Font(L"����", 12, FontStyle::Regular);

			 for each(ListViewItem^ item in this->listView1->Items) {

				 g->DrawString(item->SubItems[0]->Text, tablesFont, Brushes::Black, left + 30, top + 5);      // ѧ��

				 g->DrawLine(tablesPen, left + 120, top, left + 120, top + 30);             //�зָ���

				 g->DrawString(item->SubItems[1]->Text, tablesFont, Brushes::Black, left + 150, top + 5);    // ����

				 g->DrawLine(tablesPen, left + 240, top, left + 240, top + 30);

				 g->DrawString(item->SubItems[2]->Text, tablesFont, Brushes::Black, left + 270, top + 5);    // �ɼ�1

				 g->DrawLine(tablesPen, left + 335, top, left + 335, top + 30);

				 g->DrawString(item->SubItems[3]->Text, tablesFont, Brushes::Black, left + 365, top + 5);    // �ɼ�2

				 g->DrawLine(tablesPen, left + 430, top, left + 430, top + 30);

				 g->DrawString(item->SubItems[4]->Text, tablesFont, Brushes::Black, left + 460, top + 5);    // �ɼ�3

				 g->DrawLine(tablesPen, left, top + 30, left + width, top + 30);

				 top += 30, height -= 30;

			 }

			 e->HasMorePages = false;
}
};
}
