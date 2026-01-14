#include <iostream>

using namespace std;

bool buscaBinaria(int lista[], int tamanho, int alvo)//funcao com a busca dos ids
{
	int esquerda = 0;
	int direita = tamanho - 1;

	while (esquerda <= direita)//vai se repetir enquanto o valor de esquerda for menor ou igual ao valor da direita
	{
		int meio = esquerda + (direita - esquerda) / 2;//encontrar o valor de meio

		if (lista[meio] == alvo)//se o valor armazenado no vetor for igual ao numero alvo tera o retorno verdadeiro
		{
			return true;
		}
		else if (lista[meio] < alvo)//caso valor do vetor seja menor que o alvo esquerda vai assumir o valor de meio+1
		{
			esquerda = meio + 1;
		}
		else//caso o valor do vetor seja maior que o alvo direita vai assumir o valor de meio-1
		{
			direita = meio - 1;
		}
	}

	return false;//retorna em falso
}

int main()
{
	int idsAutorizadas[20]; //tamanho máximo de 20 ids autorizadas
	int entrada;//entrada com a listadas ids
	int tamanho = 0;

	//ler a lista de ids autorizadas
	cin >> entrada;
	while (entrada != -1)//vai se repetir enquanto entrada for diferente de -1
	{
		idsAutorizadas[tamanho] = entrada;//idsAutorizadas vao assumir o valor de entrada
		tamanho++;//tamanho vai ser encrementada a cada id adicionada na lista
		cin >> entrada;//entrada das id na lista
	}

	//ordenar a lista de ids autorizadas manualmente (bubblesort)
	for (int i = 0; i < tamanho - 1; i++)//vai repetir enquanto o valor do tamanho seja menor q i
	{
		for (int j = 0; j < tamanho - i - 1; j++)//vai repetir enquanto o valor do tamanho seja menor q j
		{
			if (idsAutorizadas[j] > idsAutorizadas[j + 1])
			{
				int temp = idsAutorizadas[j];
				idsAutorizadas[j] = idsAutorizadas[j + 1];
				idsAutorizadas[j + 1] = temp;
			}
		}
	}

	//ler a id que deseja verificar
	int idVerificar;
	cin >> idVerificar;

	//verificar se a id tem acesso ou não
	if (buscaBinaria(idsAutorizadas, tamanho, idVerificar))//caso for encontrado o numero
	{
		cout << "Possui acesso" << endl;
	}
	else//caso nao seja encontrado o numero
	{
		cout << "Nao possui acesso" << endl;
	}

	return 0;
}
