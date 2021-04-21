#ifndef ControleH
#define ControleH

#include <iostream>
using namespace std;
#include <string>
#include"TelaBemVindo.h"
#include "InterfaceUsuario.h"
#include"TelaMenu.h"


class Controle
{

private:

public:
	Controle();
	~Controle();
	void gerenciarExecucao(void);
};

#endif;