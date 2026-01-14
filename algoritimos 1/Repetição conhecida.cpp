#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//variaveis
	double N=0;
	double soma=0;
	double x;
	
	//entrada
	cin>>x;
	
	while(N!=x)
	{
		N++;//acrescimo para N
		soma+=1/N;//calculo
	}
	//saida
	cout<<fixed<<setprecision(4);
	cout<<soma<<endl;
	
	return 0;
}