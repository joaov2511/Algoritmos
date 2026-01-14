#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char p1[100];//caracteristica 1 do animal
    char p2[100];//caracteristica 2 do animal
    char p3[100];//caracteristica 3 do animal
    char resposta[100];//resposta final

    cin >> p1 >> p2 >> p3;//entrada com as caracteristicas do animal

    if(strcmp(p1, "vertebrado") == 0)//caso seja vertebrado
    {
        if(strcmp(p2, "ave") == 0)//caso seja uma ave
        {
            if(strcmp(p3, "carnivoro") == 0)//caso seja carnivoro
                strcpy(resposta, "aguia");
            else//caso seja onivoro
                strcpy(resposta, "pomba");
        }
        else//caso seja mamifero
        {
            if(strcmp(p3, "onivoro") == 0)//caso seja onivoro
                strcpy(resposta, "homem");
            else//caso seja herbivoro
                strcpy(resposta, "vaca");
        }
    }
    else//caso seja invertebrado
    {
        if(strcmp(p2, "inseto") == 0)//caso seja inseto
        {
            if(strcmp(p3, "hematofago") == 0)//caso seja hematofago
                strcpy(resposta, "pulga");
            else//caso seja herbivoro
                strcpy(resposta, "lagarta");
        }
        else//caso seja aneliedo
        {
            if(strcmp(p3, "hematofago") == 0)//caso seja hematofago
                strcpy(resposta, "sanguessuga");
            else//caso seja onivoro
                strcpy(resposta, "minhoca");
        }
    }
    
    //saida
    cout << resposta << endl;
    return 0;
}