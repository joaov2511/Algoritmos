#include <iostream>

using namespace std;

int main()
{
	int mat1[10][10];//variavel da matriz 1
	int mat2[10][10];//variavel da matriz 2
	int mat3[10][10];//variavel da matriz 3
	int m;//numero de colunas
	int n;//numero de linhas
	int i;//variavel de controle do for
	int j;//variavel de controle do segundo for

	cin >> n >> m;//entrada de linhas e colunas

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			cin >> mat1[i][j];//entrada da matriz 1
		}
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			cin >> mat2[i][j];//entrada da matriz 2
		}
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			mat3[i][j] = mat1[i][j] + mat2[i][j];//calculo da matriz 3
		}
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			cout << mat3[i][j] << " ";//saida da matriz 3
		}
		cout << endl;
	}


	return 0;
}
