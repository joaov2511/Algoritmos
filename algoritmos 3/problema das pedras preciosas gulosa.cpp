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

int main()
{
	setlocale(LC_ALL, "Portuguese");
	// Cria um struct de pedras
	Stone stones[5] =
	{
		{ "diamante", 0.455, 263, 500 },
		{ "esmeralda", 0.521, 127, 410 },
		{ "topazio", 0.857, 254, 320 },
		{ "rubi", 0.065, 134, 315 },
		{ "jade", 0.012, 111, 280 }
	};

	// criar variavel para pegar o maior valor;
	int valor = 0;
	double tamanho = 0;
	int peso = 0;
	
	// repetição para pegar o valor mais apetitoso 
	for(int i = 0; i < 5; i++)
	{
		if(tamanho + stones[i].volume <= 1 && peso + stones[i].weight <= 400)
		{
			valor = stones[i].price + valor;
			tamanho = stones[i].volume + tamanho;
			peso = stones[i].weight + peso;
		}
	}

	// Imprime o valor total das pedras no carrinho
	cout << "O valor total das pedras no carrinho é " << valor << endl;

	return 0;
}
// O(n)