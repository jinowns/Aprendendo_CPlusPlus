#pragma once
#include <string>

class Titular
{
public:
	Titular(std::string cpf, std::string nome);
	std::string retornaNome();
	std::string retornaCpf();
private:
	std::string nome;
	std::string cpf;
	void nomeValido();
	void cpfValido();
};

