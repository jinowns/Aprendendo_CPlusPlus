#include "Cpf.hpp"
#include <iostream>

Cpf::Cpf(std::string cpf):
	cpf(cpf)
{
	cpfValido();
}

void Cpf::cpfValido()
{
	if (cpf.size() < 10)
	{
		std::cout << cpf <<"CPF invalido" << std::endl;
		exit(2);
	}
}