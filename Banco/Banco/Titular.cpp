#include "Titular.hpp"
#include <iostream>

Titular::Titular(std::string cpf, std::string nome)
	:cpf(cpf), 
	 nome(nome)
{
	nomeValido();
	cpfValido();
}

void Titular::nomeValido()
{
	if (nome.size() < 4)
	{
		std::cout << "Nome muito curto" << std::endl;
		exit(1);
	}
}
void Titular::cpfValido()
{
	if (cpf.size() < 10)
	{
		std::cout << "CPF invalido" << std::endl;
		exit(2);
	}
}

std::string Titular::retornaNome()
{
	return this->nome;
}

std::string Titular::retornaCpf()
{
	return this->cpf;
}