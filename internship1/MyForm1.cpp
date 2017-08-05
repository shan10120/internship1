#include "MyForm1.h"

using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void _Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	internship1::MyForm1 form;
	Application::Run(%form);


}

