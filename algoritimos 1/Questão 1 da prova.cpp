#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double x, lambda;
	double res; //resultado da conta

		   cin >> x;
		   cin >> lambda;

	res = lambda * exp(-lambda * x);

	cout << fixed << setprecision(4);
	cout << res << endl;

	return 0;
}
