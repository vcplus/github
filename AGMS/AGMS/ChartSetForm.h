#pragma once

namespace AGMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ChartSetForm 摘要
	/// </summary>
	public ref class ChartSetForm : public System::Windows::Forms::Form
	{
	public:
		ChartSetForm(void)
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
		~ChartSetForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(27, 22);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(209, 169);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"温度显示";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(103, 97);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(72, 21);
			this->textBox2->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(103, 61);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(72, 21);
			this->textBox1->TabIndex = 0;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"红色", L"深红色", L"橙色", L"黄色", L"浅黄色", L"绿色", L"浅绿色",
					L"深绿色", L"蓝色", L"浅蓝色", L"深蓝色", L"紫色", L"淡紫色", L"黑色", L"白色"
			});
			this->comboBox1->Location = System::Drawing::Point(103, 27);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(72, 20);
			this->comboBox1->TabIndex = 0;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 12);
			this->label4->TabIndex = 5;
			this->label4->Text = L"y轴最大值";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(23, 64);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 12);
			this->label3->TabIndex = 4;
			this->label3->Text = L"y轴最小值";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 12);
			this->label2->TabIndex = 3;
			this->label2->Text = L"背景颜色";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->comboBox2);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Location = System::Drawing::Point(320, 22);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(209, 169);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"湿度显示";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(108, 97);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(72, 21);
			this->textBox3->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(108, 61);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(72, 21);
			this->textBox4->TabIndex = 7;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"红色", L"深红色", L"橙色", L"黄色", L"浅黄色", L"绿色", L"浅绿色",
					L"深绿色", L"蓝色", L"浅蓝色", L"深蓝色", L"紫色", L"淡紫色", L"黑色", L"白色"
			});
			this->comboBox2->Location = System::Drawing::Point(108, 27);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(72, 20);
			this->comboBox2->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 100);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 12);
			this->label5->TabIndex = 11;
			this->label5->Text = L"y轴最大值";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(28, 64);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 12);
			this->label6->TabIndex = 10;
			this->label6->Text = L"y轴最小值";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(28, 30);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 12);
			this->label7->TabIndex = 9;
			this->label7->Text = L"背景颜色";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->comboBox3);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Location = System::Drawing::Point(27, 216);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(209, 169);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"振荡度显示";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(103, 109);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(72, 21);
			this->textBox5->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(103, 73);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(72, 21);
			this->textBox6->TabIndex = 7;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"红色", L"深红色", L"橙色", L"黄色", L"浅黄色", L"绿色", L"浅绿色",
					L"深绿色", L"蓝色", L"浅蓝色", L"深蓝色", L"紫色", L"淡紫色", L"黑色", L"白色"
			});
			this->comboBox3->Location = System::Drawing::Point(103, 39);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(72, 20);
			this->comboBox3->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(23, 112);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 12);
			this->label8->TabIndex = 11;
			this->label8->Text = L"y轴最大值";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(23, 76);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(59, 12);
			this->label9->TabIndex = 10;
			this->label9->Text = L"y轴最小值";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(23, 42);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 12);
			this->label10->TabIndex = 9;
			this->label10->Text = L"背景颜色";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox7);
			this->groupBox4->Controls->Add(this->textBox8);
			this->groupBox4->Controls->Add(this->comboBox4);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Location = System::Drawing::Point(320, 216);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(209, 169);
			this->groupBox4->TabIndex = 0;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"有害气体显示";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(114, 109);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(72, 21);
			this->textBox7->TabIndex = 12;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(114, 73);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(72, 21);
			this->textBox8->TabIndex = 7;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"红色", L"深红色", L"橙色", L"黄色", L"浅黄色", L"绿色", L"浅绿色",
					L"深绿色", L"蓝色", L"浅蓝色", L"深蓝色", L"紫色", L"淡紫色", L"黑色", L"白色"
			});
			this->comboBox4->Location = System::Drawing::Point(114, 39);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(72, 20);
			this->comboBox4->TabIndex = 8;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(34, 112);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(59, 12);
			this->label11->TabIndex = 11;
			this->label11->Text = L"y轴最大值";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(34, 76);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(59, 12);
			this->label12->TabIndex = 10;
			this->label12->Text = L"y轴最小值";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(34, 42);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 12);
			this->label13->TabIndex = 9;
			this->label13->Text = L"背景颜色";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(286, 401);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 31);
			this->button1->TabIndex = 1;
			this->button1->Text = L"确定";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ChartSetForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(385, 401);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 31);
			this->button2->TabIndex = 1;
			this->button2->Text = L"清除";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(484, 401);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 31);
			this->button3->TabIndex = 1;
			this->button3->Text = L"退出";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// ChartSetForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(588, 446);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"ChartSetForm";
			this->Text = L"图像基本设置";
			this->Load += gcnew System::EventHandler(this, &ChartSetForm::ChartSetForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public:float tempx;
	public:float tempy;
	public:int tempcolor;
	public:float humidx;
	public:float humidy;
	public:int humidcolor;
	public:float shakex;
	public:float shakey;
	public:int shakecolor;
	public:float Fx;
	public:float Fy;
	public:int Fcolor;
	private: System::Void ChartSetForm_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 tempx = float::Parse(this->textBox1->Text);
				 tempy = float::Parse(this->textBox2->Text);
				 tempcolor = this->comboBox1->SelectedIndex;
				 humidx = float::Parse(this->textBox4->Text);
				 humidy = float::Parse(this->textBox3->Text);
				 humidcolor = this->comboBox2->SelectedIndex;
				 shakex = float::Parse(this->textBox6->Text);
				 shakey = float::Parse(this->textBox5->Text);
				 shakecolor = this->comboBox3->SelectedIndex;
				 Fx = float::Parse(this->textBox8->Text);
				 Fy = float::Parse(this->textBox7->Text);
				 Fcolor = this->comboBox4->SelectedIndex;
				 this->DialogResult = Windows::Forms::DialogResult::OK;
				 this->Close();
	}
	};
}
