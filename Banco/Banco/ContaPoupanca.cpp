#include "ContaPoupanca.hpp"
#include <iostream>

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular) :
	Conta(numero, titular)
{

}
float ContaPoupanca::taxaDeSaque() const
{
	std::cout << "Chamando m�todo sacar da conta poupan�a" << std::endl;

	return 0.03;
}