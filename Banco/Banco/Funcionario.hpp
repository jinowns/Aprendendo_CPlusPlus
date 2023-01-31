#pragma once
#include "Pessoa.hpp"
class Funcionario : public Pessoa
{
private:
	float salario;
protected:
	Funcionario (Pessoa pessoa);
	std::string recuperaNome() const;
	float recuperaSalario() const;
	virtual float bonificacao() const = 0;//const = 0 faz com que essa classe vire virtual, n�o � mais possivel fazer um objeto com ela, apenas com as classe filhas
};

