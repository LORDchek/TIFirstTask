#pragma once

namespace TIFirstTask {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ RailwayShifro
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~RailwayShifro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
		   System::Windows::Forms::Form^ startForm;
	public:
		void SetStartForm(System::Windows::Forms::Form^ form) { startForm = form; }
	protected:


	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(81, 41);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 90);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RailwayShifro::button1_Click);
			// 
			// RailwayShifro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Name = L"RailwayShifro";
			this->Text = L"RailwayShifro";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &RailwayShifro::RailwayShifro_FormClosing);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (startForm) {
			startForm->Show();
			this->Hide();
		}
	}

	private: System::Void RailwayShifro_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		startForm->Show();
	}
	};
}
