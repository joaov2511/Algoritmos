#include <iostream>

using namespace std;

int main()
{
	int N;
	int P;
	int i;
	int s;
	int A = 0;
	int B;//N-P
	int fat = 1;
	int fat2 = 1;

	cin >> N >> P;

	if(N <= 0 || P <= 0 || P > N)
	{
		cout << "Erro de entrada" << endl;
	}

	else
	{
		for(i = N; i >= 1; i--)
		{
			fat = fat * i;
		}
		B = N - P;
		for(s = B; s >= 1; s--)
		{
			fat2 = fat2 * s;
		}
		A = fat / fat2;
		cout << A << endl;
	}

	return 0;
}
