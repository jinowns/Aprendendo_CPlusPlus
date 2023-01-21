#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

int main()
{
	Conta conta1 ("12345", "Adriel", "123.456.789 - 10");
	conta1.depositar(500);
	conta1.sacar(400);

	conta1.retornaSaldo();

	cout << "Saldo Disponivel: " << conta1.retornaSaldo() << endl;

	return 0;
}