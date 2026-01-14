#include <iostream>
#include <iomanip>

using namespace std;

//funcao
double converte(double x)
{
	double y;
	
	y=x*1.60934;//calculo de convercao de mph pra kmph
	
	return y;//retornar no resultado de y
}
int main()
{
	//variaveis
	double mph; 
	double kmph;
	
	//entrada dos valores em mph
	cin>>mph;
	
	//igualando kmph pelo valor de coversao
	kmph=converte(mph);
	
	//saida
	cout<<fixed<<setprecision(1);
	cout<<kmph;
	
	return 0;
}