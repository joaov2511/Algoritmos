#include <iostream>

using namespace std;
int main()
{
	//variaveis
	int n;
	int aux;//variavel auxiliar
	aux=0;
	
	//entrada
	cin>>n;
	
	//repeticao
	while(n!=-1)
	{
		aux=aux+n;
		cin>>n;
	}
	//saida
	cout<<aux<<endl;
	
	return 0;
}