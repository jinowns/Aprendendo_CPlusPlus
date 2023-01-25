#pragma once
#include <string>

class Cpf
{
public:
	Cpf(std::string cpf);
private:
	std::string cpf;
	void cpfValido();
};