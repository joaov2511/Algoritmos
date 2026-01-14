#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() 
{
 	double A;
	double B;
	double C;
	double ATR;//Triângulo Retângulo
	double AC;//Círculo
	double AT;//Trapézio
	double AQ;//Quadrado
	double AR;//Retângulo

	//entradas
	cin >> A;
	cin >> B;
	cin >> C;

	//calculos
	ATR = (A * C) / 2;
	AC = pow(C, 2) * 3.14159;
	AT = (A + B) * C / 2;
	AQ = B * B;
	AR = A * B;
	cout << fixed << setprecision(3);

	//saidas
	cout << "TRIANGULO: " << ATR << endl;
	cout << "CIRCULO: " << AC << endl;
	cout << "TRAPEZIO: " << AT << endl;
	cout << "QUADRADO: " << AQ << endl;
	cout << "RETANGULO: " << AR << endl;

 
    return 0;
}