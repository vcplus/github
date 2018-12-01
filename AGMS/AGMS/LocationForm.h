#pragma once
#include"valuechange.h"
namespace AGMS {
	using namespace System;
	using namespace System::IO;
	using namespace System::Collections::Generic;
	using namespace System::ComponentModel;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace System::Windows::Forms;



	/// <summary>
	/// LocationForm 摘要
	/// </summary>
	public ref class LocationForm : public System::Windows::Forms::Form
	{
	public:
		LocationForm(void)
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
		~LocationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	public: static System::Windows::Forms::TextBox^  textBox2;
	private:
	public: static System::Windows::Forms::TextBox^  textBox1;
	public: static System::Windows::Forms::WebBrowser^  webBrowser1;

	private:





	private: System::Windows::Forms::Button^  button1;
	public: static System::Windows::Forms::ComboBox^  comboBox1;
	private:
	private: System::Windows::Forms::Timer^  timer1;
	public:
	private: System::ComponentModel::IContainer^  components;

	public:
	private:
	protected:

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
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->button1);
			this->splitContainer1->Panel1->Controls->Add(this->comboBox1);
			this->splitContainer1->Panel1->Controls->Add(this->label3);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Controls->Add(this->textBox2);
			this->splitContainer1->Panel1->Controls->Add(this->textBox1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->splitContainer1->Panel2->Controls->Add(this->webBrowser1);
			this->splitContainer1->Panel2->Cursor = System::Windows::Forms::Cursors::Cross;
			this->splitContainer1->Size = System::Drawing::Size(910, 496);
			this->splitContainer1->SplitterDistance = 302;
			this->splitContainer1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(184, 369);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"确定";
			this->button1->UseVisualStyleBackColor = true;
			//this->button1->Click += gcnew System::EventHandler(this, &LocationForm::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1号车辆", L"2号车辆", L"3号车辆" });
			this->comboBox1->Location = System::Drawing::Point(107, 89);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 20);
			this->comboBox1->TabIndex = 3;
			//this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &LocationForm::comboBox1_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(25, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"车牌号";
			this->label3->Click += gcnew System::EventHandler(this, &LocationForm::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(41, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"经度";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(41, 231);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"纬度";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(107, 232);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 21);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(107, 182);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 21);
			this->textBox1->TabIndex = 1;
			// 
			// webBrowser1
			// 
			this->webBrowser1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->webBrowser1->Location = System::Drawing::Point(0, 0);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(604, 496);
			this->webBrowser1->TabIndex = 0;
			this->webBrowser1->DocumentCompleted += gcnew System::Windows::Forms::WebBrowserDocumentCompletedEventHandler(this, &LocationForm::webBrowser1_DocumentCompleted_1);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &LocationForm::timer1_Tick);
			// 
			// LocationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(910, 496);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"LocationForm";
			this->Text = L"车辆位置";
			this->Load += gcnew System::EventHandler(this, &LocationForm::LocationForm_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void LocationForm_Load(System::Object^  sender, System::EventArgs^  e) {

				 //this->webBrowser1->ScriptErrorsSuppressed = true;
				 //String^path = Path::Combine(Application::StartupPath, "MapPage.html");
				 //this->webBrowser1->Navigate(path);
				 this->webBrowser1->Url = gcnew Uri(Path::Combine(Application::StartupPath, "MapPage.htm"));
				 // Point point = gcnew Point();


	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void webBrowser1_DocumentCompleted(System::Object^  sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^  e) {
				 //array<float>^ sample2 = gcnew array<float>{121.504, 39.212};
				 //this->webBrowser1->Navigate("setLocation", { 121.504, 39.212 });
	}
	private: System::Void webBrowser1_DocumentCompleted_1(System::Object^  sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^  e) {
	}

			
	/*private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 // AGMS::Form1^ form1 = gcnew  Form1();
				 int index = this->comboBox1->SelectedIndex;
				 double m, n;
				 switch (index)
				 {
				 case 0:
					 m =Double::Parse(valuechange::经度1) ;
					 n = Double::Parse(valuechange::纬度1);
					 break;
				 case 1:
					 m = Double::Parse(valuechange::经度2);
					 n = Double::Parse(valuechange::纬度2);
					 break;
				 case 2:
					 m = Double::Parse(valuechange::经度3);
					 n = Double::Parse(valuechange::纬度3);
					 
					 break;
				 }
			 this->textBox1->Text = m.ToString();
			 this->textBox2->Text = n.ToString();				 
			 array<System::Object^>^a = gcnew array<System::Object^>{m, n};
			this->webBrowser1->Document->InvokeScript("setLocation", a);
	}*/
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 //Locationchange();
}
private: System::Void Locationchange() {
			 /*if (this->comboBox1->Items->Count > 0)
			 {
				 int index = this->comboBox1->SelectedIndex;
				 double m, n;
				 switch (index)
				 {
				 case 0:
					 m = Double::Parse(valuechange::经度1);
					 n = Double::Parse(valuechange::纬度1);
					 break;
				 case 1:
					 m = Double::Parse(valuechange::经度2);
					 n = Double::Parse(valuechange::纬度2);
					 break;
				 case 2:
					 m = Double::Parse(valuechange::经度3);
					 n = Double::Parse(valuechange::纬度3);

					 break;
				 }
				 this->textBox1->Text = m.ToString();
				 this->textBox2->Text = n.ToString();
				 array<System::Object^>^a = gcnew array<System::Object^>{m, n};
				 this->webBrowser1->Document->InvokeScript("setLocation", a);
			 }*/
}
};
}
