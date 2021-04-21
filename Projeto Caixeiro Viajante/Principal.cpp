#include "Controle.h"
#include<iostream>
using namespace std;
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

int main(array<String^>^arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Controle c;
	c.gerenciarExecucao();

	return 0;
}
