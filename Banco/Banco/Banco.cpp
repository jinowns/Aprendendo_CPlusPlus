#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Pessoa.hpp"
#include "Caixa.hpp"
#include "Funcionario.hpp"
#include "Gerente.hpp"
#include "ContaPoupanca.hpp"

using namespace std;

int main()
{
	Cpf cpf1("123.456.789-10");
	Titular titular1 (cpf1, "Adriel");
	ContaPoupanca contaP ("12345", titular1);

	/*Cpf cpf2("109.876.543-21");
	Titular titular2 ("Lucas", cpf2);
	Conta conta2 ("12345", titular2);

	Cpf cpf3("222.123.456-10");
	Titular titular3 ("Mario",cpf3);
	Conta conta3 ("12345", titular3);*/
	contaP.depositar(500);

	cout << "Saldo Disponivel: " << contaP.retornaSaldo() << endl;
	cout <<	"Numero da Conta " << Conta::retornaContConta() << endl;

	return 0;
}