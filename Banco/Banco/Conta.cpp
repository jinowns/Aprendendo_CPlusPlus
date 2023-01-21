#include "Conta.hpp"
#include <iostream>

Conta::Conta(std::string numeroConta, std::string nomeTitular, std::string cpf)
	:numeroConta(numeroConta), 
	nomeTitular(nomeTitular), 
	cpf(cpf), 
	saldo(0) //contruindo o objeto
{
}
//poderia ser igual a baixo o metodo do construtor
/*Conta::Conta(std::string numeroConta, std::string nomeTitular, std::string cpf)
{
	this->numeroConta = numeroConta;
	this->nomeTitular = nomeTitular;
	this->cpf = cpf;
	this->saldo = 0;
}*/

void Conta::sacar(float valorASacar)
{
	if (valorASacar <= 0)
	{
		std::cout << "Valor Invalido" << std::endl;
		return;
	}
	if (valorASacar > saldo)
	{
		std::cout << "Saldo Insuficiente" << std::endl;
		return;
	}

	saldo -= valorASacar;
}

void Conta::depositar(float valorADepositar)
{
	if (valorADepositar <= 0)
	{
		std::cout << "Valor Invalido" << std::endl;
		return;
	}
	saldo += valorADepositar;
}

float Conta::retornaSaldo() const
{
	return this->saldo;
}