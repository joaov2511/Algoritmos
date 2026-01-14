#include <iostream>

using namespace std;

int main()
{
	int N;

	cin >> N;

	int x[N];
	int menor;
	int maior;
	int parametro;
	int pm, pn; //pm =Posicao maior, pn = posicao menor
	int j = 1; //Contador para posicao

	for(int i = 0; i < N; i++)
	{
		cin >> x[i];
		maior = x[0];
		menor = x[0];
		
	}
	for(int i = 0; i < N; i++)
	{
		if(x[i] > maior)
		{
			maior = x[i];
			pm = i;
		}
		if(x[i] < menor)
		{
			menor = x[i];
			pn = i;
		}
	

	}
	cout << "Pos Menor: " << pn << endl;
	cout << "Valor Menor: " << menor << endl;
	cout << "Pos Maior: " << pm << endl;
	cout << "Valor Maior: " << maior << endl;


	return 0;
}