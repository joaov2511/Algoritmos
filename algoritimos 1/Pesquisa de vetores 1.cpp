#include <iostream>

using namespace std;

int main()
{
  //Declaração de variaveis:
   
   int i;//Variavel de iterações para o laço de repetição
   float vet[5];//Declaração do vetor
   float achar;//Variavel para achar numeros do veto iguais  zero
   
	//Entrada
    cout << "Entre com os valores do vetor" << endl;

    for(i = 0; i < 5; i++)
    {
        cin >> vet[i];
    }
    
  //Saida
  
	//Varredura do vetor para achar em que posição estão o(s) numeros iguais a zero
    for(i = 0; i < 5; i++)                          
        if(vet[i] == 0)
        {
            achar = i;
            cout << "0 nas posicoes: " << achar << endl;
        }
        
  //Condição usada caso não haja posições do vetor iguais a zero
        if(achar != 0)
        {
             cout << "Vetor sem numeros iguais a 0!" << endl;
        }

    return 0;
}