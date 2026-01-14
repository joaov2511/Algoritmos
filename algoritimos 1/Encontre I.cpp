#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int v[50];
	int N; //qtd de valores digitados
	int X; //valor que sera procurado
	int cont = 0;
	
	cin >> N;
	
	for(int i=0; i < N; i++)
	{
		cin >> v[i];
	}
	
	cin >> X;
	
	for(int i=0; i<N; i++)
	{
		if(X == v[i])
			cont ++;
	}
	
	cout << fixed << setprecision(2);
	cout << cont*100.0/N << endl;
	
	return 0;
}