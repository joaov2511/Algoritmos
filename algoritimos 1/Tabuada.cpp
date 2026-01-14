#include <iostream>

using namespace std;

void tabuada()
{
	int i;//numeros variaveis da tabuada
	int n;
	
	//entrada
	cin >> n;//numeros fixos da tabuada

	//repeticao
	for(i = 1; i <= 10; i++)
	{
		cout << n << " x " << i << " = " << (n * i) << endl;//saida e calculo
	}
}
int main()
{
	tabuada();
	
	return 0;
}
