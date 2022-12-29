#include <iostream> //bibliote do cout (cout = printf)
using namespace std; // enves de toda vez precisar colocar srd::conut ou srd::endl, não preciso colocar srd::

int main()
{
	cout << "**************************************" << endl;//endl é a mesma coisa do \n
	cout << "*  Bem-Vindo ao jogo da adivinhacao  *" << endl;
	cout << "**************************************" << endl;
	
	cout << "Modo Facil(1) || Modo Medio(2) || Modo Dificil (3)" << endl;
	int modo;
	int tentativas;
	bool acabou;
	bool acertou;
	double pontos = 1000;
	double pontos_perdidos = 0;
	const int NUMERO_SECRETO = 100;//const é um tipo de variavel que nunca muda seu valor ao longo do tempo da execusão do programa

	cin >> modo;//cin faz a leitura igual o scanf ou leia.
	switch (modo)
	{
		case 1:
			tentativas = 10;
			break;
		case 2:
			tentativas = 5;
			break;
		case 3:
			tentativas = 3;
			break;
		default:
			cout << "Modo Indefinido" << endl;
			cout << "Você tem apenas uma tentativa !" << endl;
			tentativas = 1;
	}

	do
	{
		int chute = 0;
		bool maior = chute > NUMERO_SECRETO;
		cout << "Tentativas Restantes " << tentativas << endl;
		cout << "Chuta um numero: " << endl;
		cin >> chute;//escaniando uma variavel
		acertou = chute == NUMERO_SECRETO; // variavel do tipo bool é de booleano, criando ela dessa forma fica mais facil se ler o "IF"
		pontos_perdidos = abs (pontos - chute) / 2.0;
		pontos -= pontos_perdidos;
		
		if (acertou)
		{
			cout << "Parabéns você acertou o Número secreto !!" << endl;
			cout << "Sua Pontuação" << pontos << endl;
		}
		else if (maior)
		{
			cout << "Seu Chute foi maior" << endl;
		}
		else
		{
			cout << "Seu Chute foi Menor" << endl;
		}
		tentativas--;
		acabou = tentativas == 0;
	} while (!acabou || acertou);
	

}
