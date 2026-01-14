#include <iostream>

using namespace std;

int main()
{
	char mat[10][10];//variavel da matriz
	int m;//numero de coluna
	int n;//numero de linha
	int i;//contador do primeiro for
	int j;//contador do segundo for

	cin >> m >> n;//entrada de linha e coluna
	
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			cin >> mat[i][j];//entrada dos termos da matriz
		}
	}
	for(j = 0; j < n; j++)
	{
		for(i = 0; i < m; i++)
		{
			cout << mat[i][j];//saida 
		}
	}

	return 0;
}
