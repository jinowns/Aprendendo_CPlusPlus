#include <iostream> //bibliote do cout (cout = printf)
using namespace std; // enves de toda vez precisar colocar srd::conut ou srd::endl, n�o preciso colocar srd::

int main()
{
	cout << "**************************************" << endl;//endl � a mesma coisa do \n
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

	const int NUMERO_SECRETO = 6425;//const � um tipo de variavel que nunca muda seu valor ao longo do tempo da execus�o do programa

	do
	{
		int chute = 0;


		cout << "Chuta um numero: " << endl;
		cin >> chute;//escaniando uma variavel

		bool acertou = chute == NUMERO_SECRETO; // variavel do tipo bool � de booleano, criando ela em uma linha j� � feito um "if"
		bool maior = chute > NUMERO_SECRETO;
		
		if (acertou)
		{
			cout << "Parab�ns voc� acertou o N�mero secreto !!" << endl;
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
