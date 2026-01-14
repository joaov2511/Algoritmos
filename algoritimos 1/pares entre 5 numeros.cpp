#include <iostream>
 
using namespace std;
 
int main()
{
 	int x;//numeros de entrada
	int i;//contador
	int valores;//valores pares

	valores = 0;
	for(i = 0; i < 5; i++)
	{
		cin >> x;
		if(x%2==0)//se o valor for par soma mais 1
		{
			valores = valores + 1;
		}	
	}
	cout << valores << " valores pares" << endl;
    return 0;
}