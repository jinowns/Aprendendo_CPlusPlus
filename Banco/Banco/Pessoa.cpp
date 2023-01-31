#include "Pessoa.hpp"
#include <iostream>

Pessoa::Pessoa(Cpf cpf, std::string nome):
	cpf(cpf),
	nome(nome)
{
	nomeValido();
}
void Pessoa::nomeValido()
{
	if (nome.size() < 4)
	{
		std::cout << nome << " Nome muito curto" << std::endl;
		exit(1);
	}
}