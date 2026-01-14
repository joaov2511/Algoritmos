#include <iostream>

using namespace std;

int main()
{
	//variaveis
	int n;//quantidade de numero de vezes que ira rodar
	int num;//numeros pra comparar
	int nmp = 0; //numero maior positivo
	int i;//contador

	//entrada
	cin >> n;

	for(i = 0; i < n; i++)
	{
		cin >> num;
		if(num >= 0)
		{
			if(num % 2 == 0)
			{
				if(nmp < num)
				{
					nmp = num;
				}
			}
		}
	}
	//saida
	cout << nmp << endl;

	return 0;
}
