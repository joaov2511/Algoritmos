#include <iostream>

using namespace std;

void fatorial(int *x)
{
	int i;//contador
	int fat = 1;//inicial do fatorial
	
	for(i = *x; i >= 1; i--)
		fat = fat * i;//calculo
	
	//saida
	cout << fat << endl;
}
int main()
{
	int x;//numero fatorado
	
	cin >> x;//saida
	
	fatorial(&x);
	return 0;
}