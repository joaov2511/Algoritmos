#include <iostream>
#include <iomanip>

using namespace std;

float media(int notas[], int nAlunos)//fucao com o calculo da media
{
    int i;//variavel controle
    float m;
    
    for(i = 0; i < nAlunos; i++)//vai rodar de acordo com numero de alunos
    {
        m += notas[i];//soma para media de alunos
    }
    return (1.0*m)/nAlunos;//vai retornar no valor da media
}
int nAbaixo(int notas[], int nAlunos, float media)//funcao para identificar os alunos abaixo da media
{
    int menor, cont2 = 0;
     for( int i = 0; i < nAlunos; i++)//vai rodar de acordo com numero de alunos
    {
        if(notas[i] < media)
       {
           notas[i] = nAlunos;
           cont2++;
        }
    }
    return cont2;
}

int nAcima(int notas[], int nAlunos, float media)//funcao para identificar os alunos acima da media
{
    int maior, cont1 = 0;
     for(int i = 0; i < nAlunos; i++)//vai rodar de acordo com numero de alunos
    {
      if(notas[i] > media)
       {
          notas[i] = nAlunos;
          cont1++;
        }
    }
    return cont1;
}
int main() 
{
	//declaracao de variaveis
    int nAlunos, notas[100];
    int num_menor, num_maior;//variaveis que iram assumir o numero de alunos abaixo e acima da media
    float result;//variavel que vai assumir o valor da media
    
    cin >> nAlunos;//entrada com numero de alunos
    
     for(int i = 0; i < nAlunos; i++)
    {
        cin >> notas[i];//entrada com as notas
    }
    
    //chamando a funcao
    result = media(notas, nAlunos);
    num_menor = nAbaixo(notas, nAlunos, result);
    num_maior = nAcima(notas, nAlunos, result);
    
    //saida
    cout << fixed << setprecision(2);//limite de 2 casas decimais
	cout << "Media da turma = " << result << endl;
    cout << "Alunos com nota abaixo da media: " << num_menor << endl;
    cout << "Alunos com nota acima da media: " << num_maior << endl;
    return 0;
}