#include <vector>

std :: vector<char> chutes_errados;//Vector é um vetor com tamanho dinamico conforme é aloca uma nova informacao

bool nao_enforcou() 
{
    return chutes_errados.size() < 5;//.size est� retornando o tamanho do valor 
}