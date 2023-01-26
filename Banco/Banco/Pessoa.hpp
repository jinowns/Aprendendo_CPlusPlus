#pragma once
#include <string>
#include "Cpf.hpp"

class Pessoa
{
protected:
	Cpf cpf;
	std::string nome;

	Pessoa(std:: string nome, Cpf cpf);
private:
	void nomeValido();
};