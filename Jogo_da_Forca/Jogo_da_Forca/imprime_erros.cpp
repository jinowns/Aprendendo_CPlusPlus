#include <iostream>
#include <vector>

std :: vector <char> chutes_errados;//Vector � um vetor com tamanho dinamico conforme � alocaum uma nova informacao

void imprime_erros() 
{
   std :: cout << "Chutes errados: ";
    for (char letra : chutes_errados) {
       std :: cout << letra << " ";
    }
    std :: cout << std :: endl;
}