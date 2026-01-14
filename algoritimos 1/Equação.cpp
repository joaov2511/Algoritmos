#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	//variaveis
	int x;//valor digitado
	double s;//resultado da operação
	
	//entrada de dados
	cin>>x;
	
	//calculo da equação
	s=(pow(x,3)-pow(x,2))*sqrt(x);
	
	//saida com 2 casas decimais
	cout<<fixed<<setprecision(2);
	cout<<s<<endl;
	
	return 0;
}