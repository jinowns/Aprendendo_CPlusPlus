#include <iostream>
#include <vector>

extern std :: vector <char> chutes_errados;//Vector é um vetor com tamanho dinamico conforme é aloca um uma nova informacao

void imprime_erros() 
{
   std :: cout << "Chutes errados: ";
    for (char letra : chutes_errados) 
    {
       std :: cout << letra << " ";
    }
    std :: cout << std :: endl;
}