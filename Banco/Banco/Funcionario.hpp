#pragma once
#include "Pessoa.hpp"
class Funcionario : public Pessoa
{
private:
	float salario;
protected:
	Funcionario (Cpf cpf, std::string nome, float salario);
	std::string recuperaNome() const;
	float recuperaSalario() const;
	virtual float bonificacao() const = 0;//const = 0 faz com que essa classe vire virtual, não é mais possivel fazer um objeto com ela, apenas com as classe filhas
};

