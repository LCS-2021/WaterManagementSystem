#include "Administrator.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	WaterManagementSystem::Administrator frm;
	Application::Run(% frm);
}

