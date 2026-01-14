#include <iostream>
 
using namespace std;
 
int main()
{
 	float x;//numeros positivos e negativos
	int n;//total de numeros
	int i;//contador
	int valores;//total de valores positivos

	n = 6;
	valores = 0;
	for(i = 0; i < n; i++)
	{
		cin >> x;//entrada de numeros
		if(x > 0)//sempre que o valor for positivo soma mais um
		{
			valores = valores + 1;
		}
	}
	cout << valores << " valores positivos" << endl;

    return 0;
}