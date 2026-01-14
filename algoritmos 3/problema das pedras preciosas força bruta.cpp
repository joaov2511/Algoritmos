#include <iostream>
#include <iomanip>

using namespace std;

struct Stone
{
	string name;
	double volume;
	double weight;
	double price;
};

// Cria uma função para calcular o valor total das pedras no carrinho
double valor_total(Stone stones[], int n)
{
	// Cria uma variável para armazenar o valor total
	double valor = 0;

	// Percorre todas as pedras
	for (int i = 0; i < n; i++)
	{
		// Verifica se a pedra cabe no carrinho
		if (stones[i].volume <= 1 && stones[i].weight <= 400)
		{
			// Adiciona o valor da pedra ao valor total
			valor += stones[i].price;
		}
	}

	// Retorna o valor total
	return valor;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	// Cria um vetor de pedras
	Stone stones[] =
	{
		{ "diamante", 0.455, 263, 500 },
		{ "esmeralda", 0.521, 127, 410 },
		{ "topazio", 0.857, 254, 320 },
		{ "rubi", 0.065, 134, 315 },
		{ "jade", 0.012, 111, 280 }
	};

	// Imprime o valor total das pedras no carrinho
	cout << "O valor total das pedras no carrinho é " << valor_total(stones, 5) << endl;

	return 0;
}
// O(n)