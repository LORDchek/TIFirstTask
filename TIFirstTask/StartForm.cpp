#include "pch.h"
#include "StartForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	TIFirstTask::StartForm^ form = gcnew TIFirstTask::StartForm();
	Application::Run(form);
} 