#include "Pessoa.hpp"
#include <iostream>

Pessoa::Pessoa(std::string nome, Cpf cpf)
	:nome(nome),
	 cpf(cpf)
{
	nomeValido();
}
void Pessoa::nomeValido()
{
	if (nome.size() < 4)
	{
		std::cout << nome << "Nome muito curto" << std::endl;
		exit(1);
	}
}