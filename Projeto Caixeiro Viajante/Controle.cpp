#include "Controle.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

Controle::Controle()
{
}

Controle::~Controle()
{

}
void Controle::gerenciarExecucao(void)
{
	ProjetoCaixeiroViajante::InterfaceUsuario iu;//chamar com mesmo nome projeto
	iu.ShowDialog();

	ProjetoCaixeiroViajante:: TelaMenu tm;
	tm.ShowDialog();

}