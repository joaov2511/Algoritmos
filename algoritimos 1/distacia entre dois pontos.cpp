#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double X1, Y1;
	double X2, Y2;
	double distancia;

	cin >> X1 >> Y1;
	cin >> X2 >> Y2;
	
	cout << fixed << setprecision(4);
	distancia = sqrt((X2 - X1) * (X2 - X1) + (Y2 - Y1) * (Y2 - Y1));
	cout << distancia << endl;

	return 0;
}
