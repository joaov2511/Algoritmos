#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	//declarando as variáveis
	double X; //dólar
	double Y; //libra
	double Z; //euro
	double resultado1; // conversão para dólar
	double resultado2; // conversão para libra
	double resultado3; // conversão para euro
	
	//entrada de variáveis
	cin >> X >> Y >> Z;
	
	// fazendo o cálculo
	resultado1= X/4.04;
	resultado2= Y/5.32;
	resultado3= Z/4.60;
	
	//saída de dados
	cout << fixed << setprecision(2);
	cout << "Dolar: " << resultado1 << endl;
	cout << "Libra: " << resultado2 << endl;
	cout << "Euro: " << resultado3 << endl;
	
	return 0;
}