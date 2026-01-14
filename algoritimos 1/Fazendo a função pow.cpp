#include <iostream>

using namespace std;

long long int exponencial(int x, int y)
{
	int i;//contador
	long long int f = 1;//iniciar com 1

	for(i = 1; i <= y; i++)
	{
		f = f * x; //funcao pow
	}
	return f;
}
int main()
{
	int x, y;

	long long int e;

	//entrada
	cin >> x >> y;

	e = exponencial(x, y);

	//saida
	cout << e << endl;

	return 0;
}
