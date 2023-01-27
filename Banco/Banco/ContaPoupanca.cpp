#include "ContaPoupanca.hpp"
#include <iostream>

ContaPoupanca::ContaPoupanca(Conta conta) :
	Conta(conta),
	saldo(0)
{

}
void sacar(float valorASacar)
{
	if (valorASacar <= 0)
	{
		std::cout << "Valor Invalido" << std::endl;
		return;
	}

	float tarifaDeSaque = valorASacar * 0.03;
	float valorDoSaque = valorDoSaque + tarifaDeSaque;

	if (valorDoSaque > saldo)
	{
		std::cout << "Saldo Insuficiente" << std::endl;
		return;
	}

	saldo -= valorASacar;
}