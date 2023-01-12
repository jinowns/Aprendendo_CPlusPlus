#include "nao_acertou.hpp"


bool nao_acertou(std::string &palavra_secreta, const std::map <char, bool> &chutou)
{
    for (char letra : palavra_secreta) 
    {
        if (chutou.find(letra) == chutou.end() || !chutou.at(letra)) 
        {
            return true;
        }
    }
    return false;

    //O forma cima � melhor que esse a baixo, pois n�o preciso declarar o 'i' como inteiro, eu j� uso a propria palavra para fazer o for
    /*for (int i = 0; i < palavra_secreta.size(); i++)
    {
        if (chute == palavra_secreta[i])
        {
            return true;
        }
    }
    return false;*/
}