#include <iostream>
#include <string> // biblioteca de string
#include <map>
#include <vector>
using namespace std;

const string PALAVRA_SECRETA = "TESTE";
map<char, bool> chutou;
vector<char> chutes_errados;//Vector é um vetor com tamanho dinamico conforme é alocaum uma nova informacao

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
	cout << PALAVRA_SECRETA << endl;

	bool nao_acertou = true;
	bool nao_enforcou = true;

	
	while (nao_acertou && nao_enforcou) 
	{
		cout << "Chutes Errados: ";
		for (char letra : chutes_errados)
		{
			cout << letra << " ";
		}
		cout << endl;

		for(char letra : PALAVRA_SECRETA)
		{ 
			if (chutou[letra])
			{
				cout << letra << "";
			}
			else
			{
				cout << "_ ";
			}
		}
		cout << endl;

		char chute;
		cin >> chute;
		chutou[chute] = true;

		if (letra_existe(chute)) 
		{
			cout << "Você acertou! Seu chute esta na palavra." << endl;
		}
		else 
		{
			cout << "Você errou! Seu chute nao esta na palavra." << endl;
			chutes_errados.push_back(chute);//push_back joga para a utima posicao do vetor
		}
	}
}