#include "StudentLogin.h"
#include "TeacherLogin.h"
#include "AdministratorLogin.h"
#include "AdminDashboard.h"
#include "TeacherDashboard.h"
#include "StudentDashboard.h"
#include "WelcomePage.h"
#include <windows.h>


using namespace System;
using namespace System::Windows::Forms;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project4::WelcomePage form;
	Application::Run(% form);
	return 0;
}

