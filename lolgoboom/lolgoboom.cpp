#include "lolgoboom.h"
#include <Windows.h>
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
    Application::SetCompatibleTextRenderingDefault(false);
    lolgoboom::lolgoboom form;
    Application::Run(% form);
}

