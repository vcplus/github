#pragma once
using namespace System::IO::Ports;
namespace AMCS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// SerialDlg 摘要
	/// </summary>
	public ref class SerialDlg : public System::Windows::Forms::Form
	{
	public:
		SerialDlg(void)
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
		~SerialDlg()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	public: System::Windows::Forms::ComboBox^  comboBox1;
	public: System::Windows::Forms::ComboBox^  comboBox2;
	public: System::Windows::Forms::ComboBox^  comboBox3;
	public: System::Windows::Forms::ComboBox^  comboBox4;



	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  SerialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ BaudrateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  databitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  stopbitToolStripMenuItem;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SerialDlg::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->SerialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->BaudrateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->databitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stopbitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 32);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"串口";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 74);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"波特率";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 121);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 12);
			this->label3->TabIndex = 2;
			this->label3->Text = L"数据位";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 162);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 12);
			this->label4->TabIndex = 3;
			this->label4->Text = L"停止位";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(46, 213);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(48, 32);
			this->button1->TabIndex = 4;
			this->button1->Text = L"确定";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SerialDlg::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(119, 213);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 32);
			this->button2->TabIndex = 5;
			this->button2->Text = L"取消";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SerialDlg::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(79, 30);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(92, 20);
			this->comboBox1->TabIndex = 6;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->SerialToolStripMenuItem,
					this->BaudrateToolStripMenuItem, this->databitToolStripMenuItem, this->stopbitToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(113, 92);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &SerialDlg::On_Opening);
			// 
			// SerialToolStripMenuItem
			// 
			this->SerialToolStripMenuItem->Name = L"SerialToolStripMenuItem";
			this->SerialToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->SerialToolStripMenuItem->Text = L"串口";
			this->SerialToolStripMenuItem->Click += gcnew System::EventHandler(this, &SerialDlg::serialToolStripMenuItem_Click);
			// 
			// BaudrateToolStripMenuItem
			// 
			this->BaudrateToolStripMenuItem->Name = L"BaudrateToolStripMenuItem";
			this->BaudrateToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->BaudrateToolStripMenuItem->Text = L"波特率";
			this->BaudrateToolStripMenuItem->Click += gcnew System::EventHandler(this, &SerialDlg::baToolStripMenuItem_Click);
			// 
			// databitToolStripMenuItem
			// 
			this->databitToolStripMenuItem->Name = L"databitToolStripMenuItem";
			this->databitToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->databitToolStripMenuItem->Text = L"数据位";
			this->databitToolStripMenuItem->Click += gcnew System::EventHandler(this, &SerialDlg::dataToolStripMenuItem_Click);
			// 
			// stopbitToolStripMenuItem
			// 
			this->stopbitToolStripMenuItem->Name = L"stopbitToolStripMenuItem";
			this->stopbitToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->stopbitToolStripMenuItem->Text = L"停止位";
			this->stopbitToolStripMenuItem->Click += gcnew System::EventHandler(this, &SerialDlg::stopbitToolStripMenuItem_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->ContextMenuStrip = this->contextMenuStrip1;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"9600" });
			this->comboBox2->Location = System::Drawing::Point(79, 68);
			this->comboBox2->Margin = System::Windows::Forms::Padding(2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(92, 20);
			this->comboBox2->TabIndex = 7;
			this->comboBox2->Text = L"9600";
			// 
			// comboBox3
			// 
			this->comboBox3->ContextMenuStrip = this->contextMenuStrip1;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"8" });
			this->comboBox3->Location = System::Drawing::Point(79, 114);
			this->comboBox3->Margin = System::Windows::Forms::Padding(2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(92, 20);
			this->comboBox3->TabIndex = 8;
			this->comboBox3->Text = L"8";
			// 
			// comboBox4
			// 
			this->comboBox4->ContextMenuStrip = this->contextMenuStrip1;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"1" });
			this->comboBox4->Location = System::Drawing::Point(79, 155);
			this->comboBox4->Margin = System::Windows::Forms::Padding(2);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(92, 20);
			this->comboBox4->TabIndex = 9;
			this->comboBox4->Text = L"1";
			// 
			// SerialDlg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(232, 298);
			this->ContextMenuStrip = this->contextMenuStrip1;
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"SerialDlg";
			this->Text = L"串口设置";
			this->Load += gcnew System::EventHandler(this, &SerialDlg::SerialDlg_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SerialDlg::On_MouseDown);
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:static SerialPort ^com = gcnew SerialPort();
			   public:static bool serialopen;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 /*String ^str = "串口参数设置为：";
				 str = str + "\n串口：" + this->comboBox1->Text;
				 str = str + "\n波特率：" + this->comboBox2->Text;
				 str = str + "\n数据位：" + this->comboBox3->Text;
				 str = str + "\n停止位：" + this->comboBox4->Text;
				 MessageBox::Show(str, "串口参数设置");*/
				 com->PortName = this->comboBox1->Text->Trim();
				 com->BaudRate = Single::Parse(this->comboBox2->Text->Trim());
				 com->Open();
				 this->Close();
	}
private: System::Void buToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void On_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 // 判断是否右击鼠标
			 if (e->Button == System::Windows::Forms::MouseButtons::Right)
			 {
				 this->contextMenuStrip1->Show(this, e->Location);
			 }
}
private: System::Void On_Opening(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 for (int i = 0; i<contextMenuStrip1->Items->Count; i++)
				 contextMenuStrip1->Items[i]->Enabled = true;
			 if (contextMenuStrip1->SourceControl == this->comboBox1)
				 contextMenuStrip1->Items[0]->Enabled = false;
			 if (contextMenuStrip1->SourceControl == this->comboBox2)
				 contextMenuStrip1->Items[1]->Enabled = false;
			 if (contextMenuStrip1->SourceControl == this->comboBox3)
				 contextMenuStrip1->Items[2]->Enabled = false;
			 if (contextMenuStrip1->SourceControl == this->comboBox4)
				 contextMenuStrip1->Items[3]->Enabled = false;
}
private: System::Void serialToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show(L"显示串口参数");
}
private: System::Void baToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show(L"显示波特率参数");
}
private: System::Void dataToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show(L"显示数据位参数");
}
private: System::Void stopbitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show(L"显示停止位参数");
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
private: System::Void serial(System::Object^  sender, System::EventArgs^  e) {
					  com->PortName = this->comboBox1->Text->Trim();
 }
private: System::Void baudrate(System::Object^  sender, System::EventArgs^  e) {
			 com->BaudRate = Single::Parse(this->comboBox2->Text->Trim());
}
private: System::Void SerialDlg_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
