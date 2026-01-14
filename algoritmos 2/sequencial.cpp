#include <iostream>

using namespace std;

int pesquisaSequencial(int vetor[], int tamanho, int valor)
{
	for (int i = 0; i < tamanho; i++)
	{
		if (vetor[i] == valor)//caso o valor da posicao do vetor seja igual ao valor retorna em 'i'
		{
			return i;
		}
	}
	return -1;//retorna em -1
}

int main()
{
	const int tamanhoMaximo = 100;//o vetor tera o valor 100
	int vetor[tamanhoMaximo];//vetor com o tamanho maximo
	int num;
	int tamanhoAtual = 0;

	// Leitura dos valores inteiros até encontrar o número -1
	while (true)
	{
		cin >> num;
		if (num == -1 || tamanhoAtual >= tamanhoMaximo)
		{
			break;
		}
		vetor[tamanhoAtual] = num;
		tamanhoAtual++;
	}

	int x;//variavel x com o numero que sera buscado
	
	cin >> x;// leitura do valor de x

	//realiza a pesquisa sequencial
	int posicao = pesquisaSequencial(vetor, tamanhoAtual, x);//pesquisa sequencial com o valor de x

	//saida de acordo com o resultado da pesquisa
	if (posicao != -1)//caso o numero seja encontrado
	{
		cout << x << " encontrado na posicao " << posicao << endl;
	}
	else//caso nao seja encontrado
	{
		cout << x << " nao encontrado" << endl;
	}

	return 0;
}