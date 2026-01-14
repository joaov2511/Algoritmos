#include <iostream>

using namespace std;
int main()
{
	//variaveis
	int n;
	int i;
	int fat=1;
	
	//entrada
	cin>>n;
	
	//repeticao
	for(i=n; i>=1; i--)
		fat=fat*i;
	
	//saida
	cout<<fat<<endl;
	
	return 0;
}