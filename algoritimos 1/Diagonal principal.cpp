#include<iostream>

using namespace std;

int main()
{
	int D[3][3];//matriz
	int i = 0, j = 0;//contadores
	int soma1 = 0;//soma da diagonal
	int prod1 = 1; //produto
	int tamanho;//tamanho dae matriz
	int x = 3;

	cin  >> tamanho;

	for(i = 0; i < tamanho; i++)
	{
		x--;
		for(j = 0; j <  tamanho; j++)
		{
			cin >> D[i][j];
		}
		soma1 = soma1 + D[i][i];
		prod1 = prod1 * D[i][i];

	}
	cout << "Soma: " << soma1 << endl;
	cout << "Produto: " << prod1 << endl;

}
