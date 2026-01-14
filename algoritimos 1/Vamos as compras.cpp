#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	//declarando as variáveis
	char nome[20]; //nome do cliente
	int N; //quantidade de morangos
	double total; //valor total da compra
	
	//entrada de variáveis
	cin.getline(nome,20);
	cin >> N;
		
	// fazendo o cálculo
	total =34.90/12.0*N;
	
	//saída de dados
	cout << nome << endl;
	cout << fixed << setprecision(2);
	cout << "R$: " << total << endl; 

	return 0;
}