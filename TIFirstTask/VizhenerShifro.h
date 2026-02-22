#pragma once

namespace TIFirstTask {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для VizhenerShifro
	/// </summary>
	public ref class VizhenerShifro : public System::Windows::Forms::Form
	{
	public:
		VizhenerShifro(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			startForm = nullptr;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~VizhenerShifro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ btnUnshifro;
	private: System::Windows::Forms::Button^ btnShifro;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

		   System::Windows::Forms::Form^ startForm;
	public:
		void SetStartForm(System::Windows::Forms::Form^ form) { startForm = form; }
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnUnshifro = (gcnew System::Windows::Forms::Button());
			this->btnShifro = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(387, 199);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 46);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Сохранить в файл";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// btnUnshifro
			// 
			this->btnUnshifro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnUnshifro->Location = System::Drawing::Point(194, 260);
			this->btnUnshifro->Name = L"btnUnshifro";
			this->btnUnshifro->Size = System::Drawing::Size(127, 41);
			this->btnUnshifro->TabIndex = 21;
			this->btnUnshifro->Text = L"Расшифровать";
			this->btnUnshifro->UseVisualStyleBackColor = true;
			// 
			// btnShifro
			// 
			this->btnShifro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnShifro->Location = System::Drawing::Point(45, 260);
			this->btnShifro->Name = L"btnShifro";
			this->btnShifro->Size = System::Drawing::Size(127, 41);
			this->btnShifro->TabIndex = 20;
			this->btnShifro->Text = L"Зашифровать";
			this->btnShifro->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(25, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(416, 50);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Шифрование методом Виженера с прогрессивным ключом";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(-21, 214);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 20);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Результат";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(-24, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(191, 20);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Исходная строка";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(42, 102);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 20);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Ключ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(173, 102);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(36, 20);
			this->numericUpDown1->TabIndex = 15;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(343, 260);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 41);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Ввод исходной строки из файла";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(173, 214);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(177, 20);
			this->textBox2->TabIndex = 13;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(173, 162);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(177, 20);
			this->textBox1->TabIndex = 12;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// VizhenerShifro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(501, 316);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnUnshifro);
			this->Controls->Add(this->btnShifro);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"VizhenerShifro";
			this->Text = L"VizhenerShifro";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
