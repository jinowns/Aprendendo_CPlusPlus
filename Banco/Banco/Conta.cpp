#include "Conta.hpp"
#include <iostream>

int Conta::contConta = 0;//inicializado id com 0

//Contrutor do objeto
Conta::Conta(std::string numeroConta,Titular titular)
   :numeroConta(numeroConta), 
	titular(titular),
	saldo(0)
{
	contConta++;
}
//poderia ser igual a baixo o metodo do construtor, porem isso ia fazer uma copia de variavel
/*Conta::Conta(std::string numeroConta, std::string nomeTitular, std::string cpf)
{
	this->numeroConta = numeroConta;
	this->nomeTitular = nomeTitular;
	this->cpf = cpf;
	this->saldo = 0;
}*/

//Destrutor do objeto
Conta::~Conta()//~ para destruir o objeto
{
	contConta--;
}

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

//get e set
float Conta::retornaSaldo() const
{
	return this->saldo;
}

int Conta::retornaContConta()
{
	return Conta::contConta;
}