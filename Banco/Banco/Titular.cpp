#include "Titular.hpp"
#include <iostream>

Titular::Titular( std::string nome, Cpf cpf)
	:nome(nome),
	 cpf(cpf)
{
	nomeValido();
}

void Titular::nomeValido()
{
	if (nome.size() < 4)
	{
		std::cout << nome << "Nome muito curto" << std::endl;
		exit(1);
	}
}
