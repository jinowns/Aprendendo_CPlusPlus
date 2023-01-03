#include <iostream> //biblioteca do cout (cout = printf)
using namespace std; // enves de toda vez precisar colocar srd::conut ou srd::endl, não preciso colocar srd::
#include <ctime>//biblioteca de hora 

int main()
{
	cout << "**************************************" << endl;//endl é a mesma coisa do \n
	cout << "*  Bem-Vindo ao jogo da adivinhacao  *" << endl;
	cout << "**************************************" << endl;
	
	int modo;
	int tentativas;
	bool acabou;
	bool acertou;
	double pontos = 1000;
	double pontos_perdidos = 0;
	srand(time(NULL));//srand S de seed(semente em ingles) rand de randomico
	const int NUMERO_SECRETO = rand() % 100;//const é um tipo de variavel que nunca muda seu valor ao longo do tempo da execusão do programa  // % traz a sobre da divisao
	cout << NUMERO_SECRETO << endl;

	cout << "Modo Facil(1) || Modo Medio(2) || Modo Dificil (3)" << endl;
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
		cout << "Tentativas Restantes " << tentativas << endl;
		cout << "Chuta um numero: " << endl;
		cin >> chute;//escaniando uma variavel
		bool maior = chute > NUMERO_SECRETO;
		acertou = chute == NUMERO_SECRETO; // variavel do tipo bool é de booleano, criando ela dessa forma fica mais facil se ler o "IF"
		
		if (acertou)
		{
			cout << "Parabens voce acertou o Numero secreto !!" << endl;
			cout.precision(2);//precision server para dizer quantas casa eu quero para formatar para exibir um numero double
			cout << fixed;//usado para a exibição dos numeros não sair em notacao cientifica
			cout << "Sua Pontuacao " << pontos << endl;
			break;
		}
		else if (maior)
		{
			cout << "Seu Chute foi maior" << endl;
		}
		else
		{
			cout << "Seu Chute foi Menor" << endl;
		}

		if (!acertou)
		{
			pontos_perdidos = abs(chute -pontos) / 2.0;
			pontos -= pontos_perdidos;
		}
		
		tentativas--;
		acabou = tentativas == 0;
	} while (!acabou || acertou);
	

}
