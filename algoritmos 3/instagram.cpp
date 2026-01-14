#include <iostream>
#include <string>
#include <iomanip>
#include <string>
#include <list>

using namespace std;

int main()
{
	string nomes[10];//string para os nomes dos usuarios
	bool matriz_adj[10][10];
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			matriz_adj[i][j] = false;
		}
	}
	int i = 0, j = 0;
	int vertices = 0;//variavel com o numero de usuarios
	cin >> vertices;//entrada com o numero de usuarios
	for(int i = 0; i < vertices; i++)
	{
		getline(cin >> ws, nomes[i]);//entrada com os nomes dos usuarios
	}

	for(int i = 0; i < vertices; i++)
	{
		cin >> j;//numero que indica quem o usuario segue
		while(j != -1)//vai se repitir enquanto for diferente de -1
		{
			matriz_adj[i][j] = true;
			cin >> j;
		}
	}
	int aux;//variavel para a busca desejada
	cin >> aux;//entrada da busca
	for(int i = 0; i < vertices; i++)
	{
		if(matriz_adj[i][aux] != false)//sera executado caso for diferente de falso
		{
			cout << nomes[i] << endl;//saida com os usuarios em comum
		}

	}
	return 0;
}
