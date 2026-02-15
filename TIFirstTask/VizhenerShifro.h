#pragma once

namespace TIFirstTask {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ VizhenerShifro
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~VizhenerShifro()
		{
			if (components)
			{
				delete components;
			}
		}

		   System::Windows::Forms::Form^ startForm;
	public:
		void SetStartForm(System::Windows::Forms::Form^ form) { startForm = form; }
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
			this->SuspendLayout();
			// 
			// VizhenerShifro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Name = L"VizhenerShifro";
			this->Text = L"VizhenerShifro";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
