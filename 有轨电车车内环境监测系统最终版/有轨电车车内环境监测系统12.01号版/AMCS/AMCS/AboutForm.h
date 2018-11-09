#pragma once

namespace AMCS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// AboutForm 摘要
	/// </summary>
	public ref class AboutForm : public System::Windows::Forms::Form
	{
	public:
		AboutForm(void)
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
		~AboutForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AboutForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox1->CausesValidation = false;
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"黑体", 12));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(363, 122);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 16));
			this->label1->Location = System::Drawing::Point(12, 162);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"设计作者：";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 16));
			this->label2->Location = System::Drawing::Point(145, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(230, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"张紫萱、蔡锐锋、王婧";
			// 
			// AboutForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(387, 207);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"黑体", 9));
			this->ForeColor = System::Drawing::Color::DarkViolet;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AboutForm";
			this->Text = L"关于本系统";
			this->Load += gcnew System::EventHandler(this, &AboutForm::AboutForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AboutForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 textBox1->Text = "面对现代有轨电车迅速发展的现状，为了保证现代有轨电车的运行安全，迫切需要做到对车内的温湿度、空气质量（PM2.5）、异常气体（乙醇）各项环境指标进行有效的实时监测及预警，具有重要的应用价值和广阔的应用前景。";
				 textBox1->Select(0, 0);
	}
	};
}
