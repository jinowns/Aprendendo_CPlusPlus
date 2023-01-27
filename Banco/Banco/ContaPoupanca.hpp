#pragma once
#include "Conta.hpp"

class ContaPoupanca : public Conta
{
public:
	ContaPoupanca(Conta conta);
	void sacar(float valorASacar);

private:
	float saldo;
};

