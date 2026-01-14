#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	//variaveis
	int x;
	int y;
	double resultado;
	char opcao;
	
	//entrada
	cin >> opcao >> x >> y;
    
    //decisão
    switch (opcao)
    {
		case '+':
			resultado= y*y + 2;
			break;
		case '-':
			resultado= x - y;
			break;
		case '*':
			resultado= 2 * (x-y);
			break;
		case '/':
			resultado= (double) x/5;
			break;
	}
	//saida
	cout << fixed << setprecision(1);
	cout << resultado << endl;
	
	return 0;
}