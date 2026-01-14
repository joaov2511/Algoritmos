#include <iostream>

using namespace std;

int primo(int x)
{
	int i;
	int soma = 0;

	for(i = 1; i <= x; i++)
	{
		if(x % i == 0)
		{
			soma++;
		}
	}
	return soma;
}
int main()
{
	int x;
	int pri;
	
	cin >> x;
	
	pri = primo(x);
	
	if(pri != 2)
		cout << "Not" << endl;
	else
	{
		cout << "Primo" << endl;
	}
	
	return 0;
}
