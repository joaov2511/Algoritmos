#include <iostream>

using namespace std;

int main()
{
	//variaveis
	double preco;//preco dos produtos
	int pm = 0; //produto maior que 10

	//repticao
	while(preco != 0)
	{
		//entrada
		cin >> preco;
		//comparacao
		if(preco != 0)
		{
			if(preco < 10)
			{
				pm = pm + 1;
			}
		}
	}
	//saida
	cout << pm << " produtos custam menos que R$ 10,00" << endl;

	return 0;
}
