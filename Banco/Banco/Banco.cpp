#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Pessoa.hpp"

using namespace std;

int main()
{
	Cpf cpf1("123.456.789-10");
	Pessoa pessoa1 ("Ael", cpf1);
	Conta conta1 ("12345", titular1);

	Cpf cpf2("109.876.543-21");
	Titular titular2 ("Lucas", cpf2);
	Conta conta2 ("12345", titular2);

	Cpf cpf3("222.123.456-10");
	Titular titular3 ("Mario",cpf3);
	Conta conta3 ("12345", titular3);
	conta1.depositar(500);
	conta1.sacar(400);

	cout << "Saldo Disponivel: " << conta1.retornaSaldo() << endl;
	cout <<	"Numero da Conta " << Conta::retornaContConta() << endl;

	return 0;
}