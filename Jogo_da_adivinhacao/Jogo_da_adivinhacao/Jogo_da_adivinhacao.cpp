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
	bool acabou = tentativas = 0;
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
			cout << "Fim de Jogo" << endl;
	}

	const int NUMERO_SECRETO = 6425;//const é um tipo de variavel que nunca muda seu valor ao longo do tempo da execusão do programa

	do
	{
		int chute = 0;


		cout << "Chuta um numero: " << endl;
		cin >> chute;//escaniando uma variavel

		bool acertou = chute == NUMERO_SECRETO; // variavel do tipo bool é de booleano, criando ela em uma linha já é feito um "if"
		bool maior = chute > NUMERO_SECRETO;
		
		if (acertou)
		{
			cout << "Parabéns você acertou o Número secreto !!" << endl;
		}
		else if (maior)
		{
			cout << "Seu Chute foi maior" << endl;
		}
		else
		{
			cout << "Seu Chute foi Menor" << endl;
		}
		//tentativas--;
	} while (acabou);
	

	
}
