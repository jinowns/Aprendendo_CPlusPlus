#pragma once
#include <string>
#include "Titular.hpp"

class Conta
{
protected:
	float saldo;
private:
	std::string numeroConta;
	Titular titular;
	
	static int contConta; // static vira uma variavel da classe e não do objeto
public:
	//Conta() = delete;removendo contrutor padrao
	Conta(std:: string numeroConta, Titular titular);
	virtual ~Conta();
	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	float retornaSaldo() const;
	static int retornaContConta();
	virtual float taxaDeSaque() const = 0;
};