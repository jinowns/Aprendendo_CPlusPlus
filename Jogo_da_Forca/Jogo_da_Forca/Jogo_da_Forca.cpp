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

	//O for a cima � melhor que esse a baixo, pois n�o preciso declarar o 'i' como inteiro, eu j� uso a propria palavra para fazer o for
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
			cout << "Voc� acertou! Seu chute est� na palavra." << endl;
		}
		else 
		{
			cout << "Voc� errou! Seu chute n�o est� na palavra." << endl;
		}
	}
}