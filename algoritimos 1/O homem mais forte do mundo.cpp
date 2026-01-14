#include <iostream>

using namespace std;

struct dados//struct com os dados dos competidores
{
    char nome[100];//nome do competidor
    int n1;//nota 1
    int n2;//nota 2
    int n3;//nota 3
    int n4;//nota 4
};

int strongest(dados atletas[], int nAtletas)//funcao para saber qual atleta tem maior nota
{
    int maior = 0;//variavel de maior nota sendo iniciada em 0
    int soma[100];//vetor com a soma de das notas dos atletas
    int aux;//variavel auxiliar
    
    for (int i = 0; i < nAtletas; i++)
    {
        soma[i] = atletas[i].n1 + atletas[i].n2 + atletas[i].n3 + atletas[i].n4;//calculoa da soma das notas
        
        if (soma[i] > maior)//se valor da soma ser maior que valor maior, maior vai assumir o valor soma
        {
            maior = soma[i];
            aux = i;
        }
    }
    
    return aux;
}

int main()
{
    int n;//numero de atletas
    dados atletas[100];
    
    cin >> n;//entrada com o numero de atletas
    
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cin.getline(atletas[i].nome, 100);//entrada com nome dos atletas
        
        cin >> atletas[i].n1 >> atletas[i].n2 >> atletas[i].n3 >> atletas[i].n4;//entrada com as notas dos atletas
    }
    
    cout << "Vencedor: " << atletas[strongest(atletas, n)].nome << endl;//saida com o nome do atleta de maior nota
    
    return 0;
}