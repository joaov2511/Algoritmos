#include <iostream>

using namespace std;

int main()
{
	int mat[10][10];//variavel da matriz
	int m;//numero de colunas
	int n;//numero de linhas
	int i;//variavel de controle do for
	int j;//segunda variavel de controle do for

	cin >> n >> m;//entrada com numero de linhas e colunas

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			cin >> mat[i][j];//entrada com os valores da matriz
		}
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			cout<<mat[i][j]<<" ";//saida com os valores da matriz
		}
		cout<<"\n";
	}

	return 0;
}
