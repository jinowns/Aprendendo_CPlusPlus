#include "Funcionario.hpp"

Funcionario::Funcionario(Pessoa pessoa):
	Pessoa(cpf,nome),
	salario(salario)
{

}
std::string Funcionario::recuperaNome() const
{
	return nome;
}
float Funcionario::recuperaSalario() const
{
	return salario;
}
