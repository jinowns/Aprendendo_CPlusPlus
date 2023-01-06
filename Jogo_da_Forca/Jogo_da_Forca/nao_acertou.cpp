#include <string> // biblioteca de string
#include <map>

std :: string palavra_secreta;
std :: map <char, bool> chutou;

bool nao_acertou() 
{
    for (char letra : palavra_secreta) 
    {
        if (!chutou[letra]) 
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