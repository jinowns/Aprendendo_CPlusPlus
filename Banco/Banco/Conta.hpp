#pragma once
#include <string>

class Conta
{
private:	
	std::string numeroConta;
	std::string nomeTitular;
	std::string cpf;
	float saldo;

public:
	//Conta() = delete;removendo contrutor padrao
	Conta(std:: string numeroConta, std::string nomeTitular, std::string cpf);
	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	float retornaSaldo() const;
};