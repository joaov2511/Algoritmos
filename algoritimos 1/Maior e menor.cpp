#include <iostream>

using namespace std;
int main()
{
	int n;
	int x;
	int maior;
	int menor;
	int i;

	cin >> n;
	cin >> x;
	maior = x;
	menor = x;

	for(i = 1; i < n; i++)
	{
		cin >> x;
		if(x > maior)
			maior = x;
		if(x < menor)
			menor = x;
	}
	cout << "Maior = " << maior << endl;
	cout << "Menor = " << menor << endl;

	return 0;
}
