#include <vector>
#include <string>
#include <fstream>
#include <iostream>

void salva_arquivo(std :: vector <std :: string> nova_lista)
{
    std :: ofstream arquivo;
    arquivo.open("palavras.txt");
    if (arquivo.is_open())
    {
        arquivo << nova_lista.size() << std :: endl;

        for (std :: string palavra : nova_lista)
        {
            arquivo << palavra << std :: endl;
        }
        arquivo.close();
    }
    else
    {
        std :: cout << "N�o foi poss�vel acessar o banco de palavras." << std ::endl;
        exit(0);
    }
}