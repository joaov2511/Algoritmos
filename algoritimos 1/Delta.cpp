#include <iostream>
#include <cmath>

using namespace std;

float calc_delta(float a, float b, float c)//funcao com o calculo de delta
{
	int d;//variavel de delta
	
	d=pow(b, 2)-4*a*c;//calculo do delta
	
	return d;//retorna com valor d
}
int main()
{
	int a, b, c, d;//declaracao de variaveis
	
	cin>>a>>b>>c;//entrada 
	
	d=calc_delta(a,b,c);//chamando a funcao
	
	cout<<"delta = "<<d<<endl;//saida
	
	return 0;
}