#include <iostream>

inline void imprime_cabecalho() // inline é a funcao que cola o codigo no main quando incluido, ganho desimpenho
{
    std::cout << "*********************" << std::endl;
    std::cout << "*** Jogo da Forca ***" << std::endl;
    std::cout << "*********************" << std::endl;
    std::cout << std::endl;
}