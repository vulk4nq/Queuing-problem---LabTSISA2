#pragma once

namespace LabTSISA2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void);

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tb1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ tbout;
	private: System::Windows::Forms::TextBox^ tb2;
	private: System::Windows::Forms::TextBox^ tb3;
	private: System::Windows::Forms::TextBox^ tb4;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tb1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->tbout = (gcnew System::Windows::Forms::TextBox());
			this->tb2 = (gcnew System::Windows::Forms::TextBox());
			this->tb3 = (gcnew System::Windows::Forms::TextBox());
			this->tb4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tb1
			// 
			this->tb1->Location = System::Drawing::Point(186, 45);
			this->tb1->Name = L"tb1";
			this->tb1->Size = System::Drawing::Size(100, 26);
			this->tb1->TabIndex = 1;
			this->tb1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tb1->UseWaitCursor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(207, 280);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(302, 61);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Решить задачу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::BtnCl);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(40, 106);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(302, 153);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"Решить задачу организации очереди с учетом дополнительных условий для своего вари"
				L"анта, используя С++. Дополнительное условие: Посетитель t1 не может быть первым "
				L"и не может быть последним.";
			// 
			// tbout
			// 
			this->tbout->Location = System::Drawing::Point(423, 106);
			this->tbout->Multiline = true;
			this->tbout->Name = L"tbout";
			this->tbout->Size = System::Drawing::Size(302, 153);
			this->tbout->TabIndex = 4;
			// 
			// tb2
			// 
			this->tb2->Location = System::Drawing::Point(292, 45);
			this->tb2->Name = L"tb2";
			this->tb2->Size = System::Drawing::Size(100, 26);
			this->tb2->TabIndex = 5;
			this->tb2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tb3
			// 
			this->tb3->Location = System::Drawing::Point(398, 45);
			this->tb3->Name = L"tb3";
			this->tb3->Size = System::Drawing::Size(100, 26);
			this->tb3->TabIndex = 6;
			this->tb3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tb4
			// 
			this->tb4->Location = System::Drawing::Point(504, 45);
			this->tb4->Name = L"tb4";
			this->tb4->Size = System::Drawing::Size(100, 26);
			this->tb4->TabIndex = 7;
			this->tb4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(224, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"t1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(336, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 20);
			this->label2->TabIndex = 9;
			this->label2->Text = L"t2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(440, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"t3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(543, 19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 20);
			this->label4->TabIndex = 11;
			this->label4->Text = L"t4";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(767, 350);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tb4);
			this->Controls->Add(this->tb3);
			this->Controls->Add(this->tb2);
			this->Controls->Add(this->tbout);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tb1);
			this->Name = L"MyForm";
			this->Text = L"Лабораторная работа №2: Организация очереди";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void BtnCl(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
