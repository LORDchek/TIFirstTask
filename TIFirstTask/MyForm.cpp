#include "pch.h"
#include "StartForm.h"
#include "RailwayShifro.h"
#include "VizhenerShifro.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	TIFirstTask::StartForm^ form = gcnew TIFirstTask::StartForm();
	TIFirstTask::RailwayShifro^ form1 = gcnew TIFirstTask::RailwayShifro();
	TIFirstTask::VizhenerShifro^ form2 = gcnew TIFirstTask::VizhenerShifro();
	form->SetRailwayForm(form1);
	form->SetVizhenerForm(form2);
	form2->SetStartForm(form);
	form1->SetStartForm(form);
	Application::Run(form);
}