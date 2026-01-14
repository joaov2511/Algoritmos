#include <iostream>

using namespace std;

void fatorial(int *x)
{
	int i;
	int fat = 1;
	
	for(i = *x; i >= 1; i--)
		fat = fat * i;
		
	cout << fat << endl;
}

int main()
{
	int x;
	
	cin >> x;
	
	fatorial(&x);
	
	return 0;
}