#include "Administrator.h"
//#include <string>
#include <random>
#include <time.h>
#include <ctime>
#include <stdio.h>
#include <cstring>



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

