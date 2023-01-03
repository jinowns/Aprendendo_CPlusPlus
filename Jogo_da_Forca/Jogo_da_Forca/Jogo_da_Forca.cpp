#include <iostream>
#include <string> // biblioteca de string
using namespace std;

const string PALAVRA_SECRETA = "TESTE";

bool letra_existe(char chute) 
{
	for (char letra : PALAVRA_SECRETA)
	{
		if (chute == letra)
		{
			return true;
		}	
	}
	return false;

	//O for a cima é melhor que esse a baixo, pois não preciso declarar o 'i' como inteiro, eu já uso a propria palavra para fazer o for
	/*for (int i = 0; i < PALAVRA_SECRETA.size(); i++)
	{
		if (chute == PALAVRA_SECRETA[i])
		{
			return true;
		}
	}
	return false;*/
}

int main() 
{
	bool nao_acertou = true;
	bool nao_enforcou = true;

	
	while (nao_acertou || nao_enforcou) 
	{
		char chute;
		cin >> chute;
		if (letra_existe(chute)) 
		{
			cout << "Você acertou! Seu chute está na palavra." << endl;
		}
		else 
		{
			cout << "Você errou! Seu chute não está na palavra." << endl;
		}
	}
}