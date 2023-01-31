#include "Caixa.hpp"

Caixa::Caixa(Cpf cpf, std::string nome, float salario) : 
	Funcionario(cpf, nome, salario)
{

}
float Caixa::bonificacao() const 
{
	recuperaSalario() * 0.1;
}