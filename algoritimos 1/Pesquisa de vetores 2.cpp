#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	// declaração das variáveis
	int n, x, i, v[50], aux = 0; // aux = quantas vezes x aparece no vetor
	float pr; // porcentagem

	cin >> n; // entrada da quantidade de elementos

	for (i = 0; i < n; i++)
		cin >> v[i]; // entrada dos elementos do vetor

	cin >> x; // entrada do valor de x

	for (i = 0; i < n; i++)
	{
		if (v[i] == x) // se o valor do vetor for igual a x
			aux++; // acrescenta 1 à aux
	}

	pr = (100.00 * aux) / n; // cálculo da porcentagem

	// saída de dados
	cout << fixed << setprecision(2);
	cout << pr;

	return 0;
}