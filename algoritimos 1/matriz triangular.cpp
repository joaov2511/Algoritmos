#include <iostream>

using namespace std;

int main()
{
	int mat[10][10];
	int n;
	bool triangularSuperior = 1;
	bool triangularInferior = true;

	cin >> n;

	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin >> mat[i][j];

	// verifica se é triangular superior
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if(j > i && mat[i][j] != 0)
				triangularSuperior = 0;

	// verifica se é triangular inferior
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if(i > j && mat[i][j] != 0)
				triangularInferior = false;

	if((triangularSuperior) || (triangularInferior))
		cout << "Triangular" << endl;
	else
		cout << "Nao triangular" << endl;

	return 0;
}