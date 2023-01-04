#include <iostream>
#include <string> // biblioteca de string
#include <map>
#include <vector>
#include <fstream> //biblioteca de arquivos
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

bool nao_acertou()
{
	for (char letra : PALAVRA_SECRETA)
	{
		if (!chutou[letra])
		{
			return true;
		}
	}
	return false;
}

bool nao_enforcou()
{
	return chutes_errados.size() < 5;//.size está retornando o tamanho do valor 
}

void imprime_cabecalho()
{
	cout << "*********************" << endl;
	cout << "*** Jogo da Forca ***" << endl;
	cout << "*********************" << endl;
	cout << endl;
}

void imprime_erros()
{
	std::cout << "Chutes Errados: ";
	for (char letra : chutes_errados)
	{
		std::cout << letra << " ";
	}
	std::cout << endl;
}

void imprime_palavra()
{
	for (char letra : PALAVRA_SECRETA)
	{
		if (chutou[letra])
		{
			std::cout << letra << "";
		}
		else
		{
			std::cout << "_ ";
		}
	}
	std::cout << endl;
}

void chuta()
{
	char chute;
	std::cin >> chute;
	chutou[chute] = true;

	if (letra_existe(chute))
	{
		std::cout << "Você acertou! Seu chute esta na palavra." << endl;
	}
	else
	{
		std::cout << "Você errou! Seu chute nao esta na palavra." << endl;
		chutes_errados.push_back(chute);//push_back joga para a utima posicao do vetor
	}
}

void le_arquivo()
{
	ifstream arquivo;
	arquivo.open("./bancos_palavras.txt");

	int quantidade_palavras;
	arquivo >> quantidade_palavras;

	cout << "O arquivo possui " << quantidade_palavras << " palavras." << endl;

	for (int i=0; i < quantidade_palavras; i++)
	{
		string palavra_lida;
		arquivo >> palavra_lida;
		cout << "Na linha " << i << " : " << endl;
	}
}

int main() 
{
	imprime_cabecalho();
	
	while (nao_acertou() && nao_enforcou())
	{
		imprime_erros();

		imprime_palavra();

		chuta();		
	}

	cout << "Fim de jogo!" << endl;
	cout << "A palavra secreta era: " << PALAVRA_SECRETA << endl;
	if (nao_acertou()) 
	{
		cout << "Você perdeu! Tente novamente!" << endl;
	}
	else 
	{
		cout << "Parabéns! Você acertou a palavra secreta!" << endl;
	}
}