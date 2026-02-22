#pragma once
#include <msclr\marshal_cppstd.h>
#include <string>
#include <map>

namespace TIFirstTask {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// ?????? ??? VizhenerShifro
	/// </summary>
	public ref class VizhenerShifro : public System::Windows::Forms::Form
	{
	public:
		VizhenerShifro(void)
		{
			InitializeComponent();
			//
			//TODO: ???????? ??? ????????????
			//
			startForm = nullptr;
		}

	protected:
		/// <summary>
		/// ?????????? ??? ???????????? ???????.
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

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::TextBox^ textBox3;

		   System::Windows::Forms::Form^ startForm;
	public:
		void SetStartForm(System::Windows::Forms::Form^ form) { startForm = form; }
	protected:

	private:
		/// <summary>
		/// ???????????? ?????????? ????????????.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ????????? ????? ??? ????????? ???????????? ? ?? ????????? 
		/// ?????????? ????? ?????? ? ??????? ????????? ????.
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
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
			this->button1->Click += gcnew System::EventHandler(this, &VizhenerShifro::button1_Click);
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
			this->btnUnshifro->Click += gcnew System::EventHandler(this, &VizhenerShifro::btnUnshifro_Click);
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
			this->btnShifro->Click += gcnew System::EventHandler(this, &VizhenerShifro::btnShifro_Click);
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
			this->button2->Click += gcnew System::EventHandler(this, &VizhenerShifro::button2_Click);
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
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(173, 102);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(177, 20);
			this->textBox3->TabIndex = 23;
			// 
			// VizhenerShifro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(501, 316);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnUnshifro);
			this->Controls->Add(this->btnShifro);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"VizhenerShifro";
			this->Text = L"VizhenerShifro";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	std::string convertString(std::string input) {
		std::string result = "";

		static const std::map<char, char> lowerToUpper = {
			{'а', 'А'}, {'б', 'Б'}, {'в', 'В'}, {'г', 'Г'}, {'д', 'Д'},
			{'е', 'Е'}, {'ё', 'Ё'}, {'ж', 'Ж'}, {'з', 'З'}, {'и', 'И'},
			{'й', 'Й'}, {'к', 'К'}, {'л', 'Л'}, {'м', 'М'}, {'н', 'Н'},
			{'о', 'О'}, {'п', 'П'}, {'р', 'Р'}, {'с', 'С'}, {'т', 'Т'},
			{'у', 'У'}, {'ф', 'Ф'}, {'х', 'Х'}, {'ц', 'Ц'}, {'ч', 'Ч'},
			{'ш', 'Ш'}, {'щ', 'Щ'}, {'ъ', 'Ъ'}, {'ы', 'Ы'}, {'ь', 'Ь'},
			{'э', 'Э'}, {'ю', 'Ю'}, {'я', 'Я'}
		};

		for (char& c : input) {
			auto it = lowerToUpper.find(c);
			if (it != lowerToUpper.end()) {
				c = it->second;
			}
		}

		for (char ch : input) {
			if ((ch >= 'А' && ch <= 'Я') || ch == 'Ё') {
				result += ch;
			}
		}

		return result;
	}

	int char_to_index(char c) {
		if (c >= 'А' && c <= 'Е') {
			return c - 'А';
		}
		if (c == 'Ё') {
			return 6; 
		}
		if (c >= 'Ж' && c <= 'Я') {
			return c - 'А' + 1; 
		}
	}

	char index_to_char(int index) {
		if (index >= 0 && index <= 5) {
			return 'А' + index;  
		}
		if (index == 6) {
			return 'Ё'; 
		}
		if (index >= 7 && index <= 32) {
			return 'А' + index - 1;
		}
	}

private: System::Void btnShifro_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string text1 = msclr::interop::marshal_as<std::string>(textBox1->Text);
	std::string str = convertString(text1);
	std::string text2 = msclr::interop::marshal_as<std::string>(textBox3->Text);
	std::string key = convertString(text2);
	if (key != "") {
		std::string shifroText;
		int key_pos = 0;

		for (size_t i = 0; i < str.length(); i++) {
			char text_char = str[i];
			char key_char = key[key_pos % key.length()];

			int text_index = char_to_index(text_char);
			int key_index = char_to_index(key_char);

			int shift = key_index + (key_pos / key.length());

			int encrypted_index = (text_index + shift) % 33;
			char encrypted_char = index_to_char(encrypted_index);

			shifroText += encrypted_char;
			key_pos++;
		}
		textBox2->Text = msclr::interop::marshal_as<System::String^>(shifroText);
	}
	else {
		System::Windows::Forms::MessageBox::Show("Ошибка! ключ не может быть пустым или не иметь символов из кириллицы!");
	}
}
private: System::Void btnUnshifro_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string text1 = msclr::interop::marshal_as<std::string>(textBox1->Text);
	std::string str = convertString(text1);
	std::string text2 = msclr::interop::marshal_as<std::string>(textBox3->Text);
	std::string key = convertString(text2);
	if (key != "") {
		std::string unshifroText;
		int key_pos = 0;

		for (size_t i = 0; i < str.length(); i++) {
			char enc_char = str[i];
			char key_char = key[key_pos % key.length()];

			int enc_index = char_to_index(enc_char);
			int key_index = char_to_index(key_char);

			int shift = key_index + (key_pos / key.length());

			int decrypted_index = (enc_index - shift + 33) % 33;
			char decrypted_char = index_to_char(decrypted_index);

			unshifroText += decrypted_char;
			key_pos++;
		}

		textBox2->Text = msclr::interop::marshal_as<System::String^>(unshifroText);
	}
	else {
		System::Windows::Forms::MessageBox::Show("Ошибка! ключ не может быть пустым или не иметь символов из кириллицы!");
	}
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
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->Title = L"Сохранить файл";
	saveFileDialog1->Filter = L"Текстовые файлы (*.txt)|*.txt";
	saveFileDialog1->DefaultExt = L"txt";

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		StreamWriter^ writer = gcnew StreamWriter(saveFileDialog1->FileName);
		writer->Write(textBox2->Text);
		writer->Close();
	}
}
};
}
