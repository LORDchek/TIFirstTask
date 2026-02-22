#pragma once
#include <msclr\marshal_cppstd.h>
#include <vector>

namespace TIFirstTask {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для RailwayShifro
	/// </summary>
	public ref class RailwayShifro : public System::Windows::Forms::Form
	{
	public:
		RailwayShifro(void)
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
		~RailwayShifro()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnShifro;
	private: System::Windows::Forms::Button^ btnUnshifro;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

		   System::Windows::Forms::Form^ startForm;
	public:
		void SetStartForm(System::Windows::Forms::Form^ form) { startForm = form; }
	protected:


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnShifro = (gcnew System::Windows::Forms::Button());
			this->btnUnshifro = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(177, 132);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(177, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(177, 184);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(177, 20);
			this->textBox2->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(347, 230);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 41);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Ввод исходной строки из файла";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RailwayShifro::button2_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(177, 72);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(36, 20);
			this->numericUpDown1->TabIndex = 4;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(46, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Ключ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(-20, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(191, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Исходная строка";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(-17, 184);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Результат";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(30, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(416, 50);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Шифрование методом \"железнодорожной изгороди\"";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnShifro
			// 
			this->btnShifro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnShifro->Location = System::Drawing::Point(49, 230);
			this->btnShifro->Name = L"btnShifro";
			this->btnShifro->Size = System::Drawing::Size(127, 41);
			this->btnShifro->TabIndex = 9;
			this->btnShifro->Text = L"Зашифровать";
			this->btnShifro->UseVisualStyleBackColor = true;
			this->btnShifro->Click += gcnew System::EventHandler(this, &RailwayShifro::btnShifro_Click);
			// 
			// btnUnshifro
			// 
			this->btnUnshifro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnUnshifro->Location = System::Drawing::Point(198, 230);
			this->btnUnshifro->Name = L"btnUnshifro";
			this->btnUnshifro->Size = System::Drawing::Size(127, 41);
			this->btnUnshifro->TabIndex = 10;
			this->btnUnshifro->Text = L"Расшифровать";
			this->btnUnshifro->UseVisualStyleBackColor = true;
			this->btnUnshifro->Click += gcnew System::EventHandler(this, &RailwayShifro::btnUnshifro_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(391, 169);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 46);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Сохранить в файл";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RailwayShifro::button1_Click);
			// 
			// RailwayShifro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(503, 287);
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
			this->Name = L"RailwayShifro";
			this->Text = L"RailwayShifro";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion 
	int maxInt(std::vector<int> nums) {
		int max = 0;
		for (int i = 0; i < nums.size(); i++)
			if (nums[i] > max) max = nums[i];
		return max;
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->Title = L"Выберите файл";
		openFileDialog1->Filter = L"Текстовые файлы (*.txt)|*.txt";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			StreamReader^ reader = gcnew StreamReader(openFileDialog1->FileName);
			String^ str = reader->ReadLine();
			reader->Close();
			if (str) {
				textBox1->Text = str;
			}
		}
	}
	private: System::Void btnShifro_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string str = msclr::interop::marshal_as<std::string>(textBox1->Text);
		int key = (int)numericUpDown1->Value;
		std::string shifroText = "";

		if (key == 1 || key >= str.size()) {
			shifroText = str;
		}
		else {
			int k = 2 * key;
			for (int j = 0; j < str.size(); ) {
				shifroText += str[j];
				j += k - 2;
			}
			
			for (int i = 1; i < key - 1; i++) {
				int step1 = k - 2 - 2 * i;
				int step2 = k - step1 - 2;
				int stepCount = 0;
				for (int j = i; j < str.size(); ) {
					shifroText += str[j];
					j += (stepCount % 2 == 0) ? step1 : step2;
					stepCount++;
				}
			}

			for (int j = key - 1; j < str.size(); ) {
				char c = str[j];
				shifroText += str[j];
				j += k - 2;
			}
		}

		textBox2->Text = msclr::interop::marshal_as<System::String^>(shifroText);
	}
	private: System::Void btnUnshifro_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string str = msclr::interop::marshal_as<std::string>(textBox1->Text);
		int key = (int)numericUpDown1->Value;
		std::string unshifroText = "";
		if (key == 1 || key >= str.size()) {
			unshifroText = str;
		}
		else {
			int period = 2 * key - 2;
			int size = str.size();

			// Создаем вектор для хранения позиций каждого символа в строках
			std::vector<std::vector<int>> rows(key);
			int idx = 0;

			// Определяем, сколько символов попадет в каждую строку
			// Верхняя и нижняя строки получают по одному символу за период
			int fullCycles = size / period;
			int remainder = size % period;

			// Верхняя строка
			rows[0].resize(fullCycles + (remainder > 0 ? 1 : 0));

			// Средние строки
			for (int i = 1; i < key - 1; i++) {
				rows[i].resize(fullCycles * 2 + (remainder > i ? 1 : 0) + (remainder > period - i ? 1 : 0));
			}

			// Нижняя строка
			rows[key - 1].resize(fullCycles + (remainder >= key ? 1 : 0));

			// Заполняем строки символами из зашифрованного текста
			for (int i = 0; i < key; i++) {
				for (int j = 0; j < rows[i].size(); j++) {
					rows[i][j] = str[idx++];
				}
			}

			// Восстанавливаем исходный текст
			for (int i = 0; i < size; i++) {
				int row = i % period;
				if (row >= key) {
					row = period - row;
				}

				int col = i / period;
				if (row > 0 && row < key - 1) {
					if (col * 2 + 1 < rows[row].size() && (i % period) > row) {
						col = col * 2 + 1;
					}
					else {
						col = col * 2;
					}
				}

				unshifroText += rows[row][col];
			}
		}
		textBox2->Text = msclr::interop::marshal_as<System::String^>(unshifroText);
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->Title = L"Сохранить файл";
	saveFileDialog1->Filter = L"Текстовые файлы (*.txt)|*.txt";
	saveFileDialog1->DefaultExt = L"txt";

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try {
			StreamWriter^ writer = gcnew StreamWriter(saveFileDialog1->FileName);

			writer->Write(textBox2->Text);
			writer->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(L"Ошибка при сохранении файла: " + ex->Message,
				L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
};
}
