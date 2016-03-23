#pragma once
#include "TPolinom.h";
namespace PolinomFormApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	TPolinom Polinom;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox5;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button1->Location = System::Drawing::Point(537, 335);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Вывести полином";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.25F));
			this->textBox1->Location = System::Drawing::Point(113, 79);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(67, 44);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.25F));
			this->label1->Location = System::Drawing::Point(68, 129);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 38);
			this->label1->TabIndex = 2;
			this->label1->Text = L"X";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.25F));
			this->label2->Location = System::Drawing::Point(68, 179);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 38);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Y";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.25F));
			this->textBox2->Location = System::Drawing::Point(113, 129);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(67, 44);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.25F));
			this->textBox3->Location = System::Drawing::Point(113, 182);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(67, 44);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.25F));
			this->label3->Location = System::Drawing::Point(70, 229);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 38);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Z";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.25F));
			this->textBox4->Location = System::Drawing::Point(113, 229);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(67, 44);
			this->textBox4->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button2->Location = System::Drawing::Point(240, 156);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 44);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Добавить моном";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.25F));
			this->label4->Location = System::Drawing::Point(12, 79);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 38);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Coeff";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.25F));
			this->textBox5->Location = System::Drawing::Point(12, 335);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(519, 44);
			this->textBox5->TabIndex = 10;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 442);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimumSize = System::Drawing::Size(640, 480);
			this->Name = L"Form1";
			this->Text = L"Polinoms";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 String^ s = Convert::ToString(Polinom.pCurrent->vaue.coeff);
				 s+="X" Convert::ToString(static_cast<int>(Polinom.pCurrent->value.power)/100);
				 s+="Y" Convert::ToString(static_cast<int>(Polinom.pCurrent->value.power)%100/10)
				 textBox5->Text=
			 }
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 double Coeff = Convert::ToDouble(textBox1->Text);
			 int XYZ[3];
			 XYZ[0] = (int)Convert::ToDouble(textBox2->Text);
			 XYZ[1] = (int)Convert::ToDouble(textBox3->Text);
			 XYZ[2]	= (int)Convert::ToDouble(textBox4->Text);
			 if ((XYZ[0]>9||XYZ[1]>9||XYZ[2]>9)||(XYZ[0]<0||XYZ[1]<0||XYZ[2]<0))
			 {
			 }
			 else
			 {
				 TMonom tmp;
				 tmp.coeff = Coeff;
				 tmp.power = XYZ[0]*100+XYZ[1]*10+XYZ[2];
				 Polinom.insFirst(tmp);
			 }
		 }
};
}

