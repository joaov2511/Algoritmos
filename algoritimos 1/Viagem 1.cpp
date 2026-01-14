#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declarando as variáveis
	float t; //tempo
	float vm; //velocidade média
	float kml=12; // kilometros por litro
	float l; //litros
	
	//entrada de variáveis
	cin >> t;
	cin >> vm;
	
	// fazendo o cálculo
	l= (t * vm) /kml;
	
	//saída de dados
	cout << fixed << setprecision (3);
	cout << l << " litro(s) " << endl;
	
	return 0;
}