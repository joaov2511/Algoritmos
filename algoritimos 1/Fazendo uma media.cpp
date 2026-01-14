#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	//variaveis
	int n;
	double aux1;//variaveis auxiliares
	double aux2;//variaveis auxiliares
	double media;
	aux1=0;
	aux2=0;
	
	//entrada
	cin>>n;
	
	cout<<fixed<<setprecision(2);
	//repeticao
	while(n>=0)
	{
		aux1=aux1+n;
		if(n>=0)
			aux2=aux2+1;
		cin>>n;
	}
	media=aux1/aux2;
	//saida
	cout<<media<<endl;
	
	return 0;
}