#pragma once
#include <string>
#include "Titular.hpp"

class Conta
{
protected:
	std::string numeroConta;
	Titular titular;
	float saldo;
	static int contConta; // static vira uma variavel da classe e não do objeto
public:
	//Conta() = delete;removendo contrutor padrao
	Conta(std:: string numeroConta, Titular titular);
	virtual ~Conta();
	virtual void sacar(float valorASacar);
	void depositar(float valorADepositar);
	float retornaSaldo() const;
	static int retornaContConta();
};