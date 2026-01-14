#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c; //coeficientes da equacao
	double delta;
	double x1, x2; //raizes da equacao

	//ler os 3 coeficientes da equacao
	cin >> a >> b >> c;

	//calculo de delta
	delta = pow(b, 2) - 4 * a * c;

	//testa o delta para ver as raizes
	if(delta < 0 || a == 0)
	{
		cout << "Impossivel calcular" << endl;
	}
	else
	{
		if(delta == 0)
		{
			x1 = -b / (2 * a);
			x2 = x1;
		}
		else if(delta > 0)
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
		}
		cout << fixed << setprecision(5);
		cout << "R1 = " << x1 << endl;
		cout << "R2 = " << x2 << endl;
	}
	return 0;
}
