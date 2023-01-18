#include <iostream>
#include <string>

using namespace std;

struct Conta
{
	string numeroConta;
	string cpf;
	string nomeTitular;
	float saldo;

	void sacar(float valorASacar)
	{
		if (valorASacar <= 0)
		{
			cout << "Valor Invalido" << endl;
			return;
		}
		if (valorASacar > saldo)
		{
			cout << "Saldo Insuficiente" << endl;
			return;
		}

		saldo -= valorASacar;
	}

	void depositar(float valorADepositar)
	{
		if (valorADepositar <= 0)
		{
			cout << "Valor Invalido" << endl;
			return;
		}
		saldo += valorADepositar;
	}
};

int main()
{
	Conta conta1;
	conta1.numeroConta = "6425";
	conta1.cpf = "666.666.666-66";
	conta1.nomeTitular = "Adriel Silvestrini";
	conta1.saldo = 100;

	conta1.sacar(100);
	conta1.depositar(1000);

	cout << conta1.saldo << endl;
}