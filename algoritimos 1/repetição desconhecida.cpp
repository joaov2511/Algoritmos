#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
	double x;
	double soma = 0;
	double n = 0;

	cin >> x;
	while(soma <= 10000)
	{
		soma += (x + n) / (n + 1);
		n++;
	}
	cout << fixed << setprecision(2);
	cout << "S = " << soma << endl;
	cout << n << " Repetições" << endl;
}
