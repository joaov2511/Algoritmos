#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    char nomearq[100];//nome do arquivo
    ofstream arq;//handle para escrever o arquivo
    ifstream arq2;//handle para ler o arquivo
    int i = 0;//grava a posicao dos elementos
    int j;//variavel controle do for para a saida
    float n[100];//vetor com os numeros reais
    int ctr;//controle
    float nReais;//numeros reais que seram armazenados no arquivo

    //lendo nome do arquivo
    cin.getline(nomearq, 100);

    //entrada com numeros reais para o arquivo
    cin >> nReais;
    while (nReais != 0)
    {
        n[i] = nReais;
        i++;
        cin >> nReais;
    }

    ctr = i;

    //passando as informacoes para o arquivo
    arq.open(nomearq, ofstream::out);

    for (i = 0; i < ctr; i++)
    {
        arq << n[i] << endl;
    }

    //fechando o arquivo
    arq.close();

    // recebendo informacoes do arquivo
    arq2.open(nomearq, ifstream::in);

    i = 0;

    while(!arq2.eof())
    {
        arq2 >> n[i];
        i++;
    }

    //saida
    cout << fixed << setprecision(2);//limite de 2 casas decimais
    for (j = 0; j < i; j++)
    {
        cout << n[j] << endl;
    }

    //fechando o arquivo
    arq2.close();

    return 0;
}