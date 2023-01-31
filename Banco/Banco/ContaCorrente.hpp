#pragma once
#include "Conta.hpp"

class ContaCorrente final : public Conta
{
	ContaCorrente(std::string numero, Titular titular);
	
};