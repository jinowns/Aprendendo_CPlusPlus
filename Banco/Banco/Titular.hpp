#pragma once
#include <string>
#include "Cpf.hpp"

class Titular
{
public:
	Titular(std::string nome, Cpf cpf);
private:
	Cpf cpf;
	std::string nome;
	void nomeValido();
};

