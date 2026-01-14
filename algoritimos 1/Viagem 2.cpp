#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declarando as variáveis
	int X; //quantidade de notas
	int Y; // de quantos reais é a nota
	int C; // quantidade de chocolates
	float P; // preço do chocolate
	float S; // quanto de dinheiro vai sobrar
	
	//entrada de variáveis
	cin >> X >> Y >> C >> P;
	
	// fazendo o cálculo
	S= X*Y- C*P;
	
	//saída de dados
	cout << fixed << setprecision(2);
	cout << "R$ " << S << endl;
	
	return 0;
}