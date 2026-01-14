#include <iostream>

using namespace std;

int main()
{
  //declaração de variaveis
   int j;//variavel controle do primeiro laço for
   int i = 0;//variavel controle segundo laço for
   int n;//variavel do numero de corredores
   int PC;//variavel para a posicao dos corredores
   double MT = 999;//variavel para achar o menor o tempo entre os corredores
   double vetor[1000];//vetor com os tempos de cada corredor
   double tempo;//variavel para a entrada do tempos

   //entrada de dados:
   cin >> tempo;//entrada com os tempos
   while(tempo != -1)//vai se repetir ate que seja digitado -1
   {
       vetor[i] = tempo;//armazenamento dos tempos
       i++;
       cin >> tempo;//entrada com os tempos
   }

   n = i;//numero de repeticoes do for

  //saida
  cout << "Classificacao: " << endl;

   for(j = 0; j < n; j++)
   {
        for(i = 0; i < n; i++)
   {
       if(vetor[i] < MT)//caso o tempo armazenado no vetor seja menor que o menor tempo atual 
       {
           MT = vetor[i];//menor tempo assumira o valor do tempo do vetor
           PC = i;//posicao do corredor assumira o valor da posicao for
       }
   }
       cout << PC << endl;//saida com a posicao dos corredores
       vetor[PC] = 999;
       MT = 999;
   }

    return 0;
}