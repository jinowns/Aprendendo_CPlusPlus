#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"

using namespace std;

int main()
{
	Titular titular1 ("123.456.789-10", "Adriel");
	Conta conta1 ("12345", titular1);

	Titular titular2 ("223.456.789-10", "Lucas");
	Conta conta2 ("12345", titular2);

	Titular titular3 ("Mario", "323.456.789-10");
	Conta conta3 ("12345", titular3);
	conta1.depositar(500);
	conta1.sacar(400);

	conta1.retornaSaldo();

	cout << "Saldo Disponivel: " << conta1.retornaSaldo() << " Numedo da Conta " << Conta::retornaContConta() << endl;

	return 0;
}