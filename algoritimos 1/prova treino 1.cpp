#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	//declaracao de variaveis
	double x;
	double y;
	
	//entrada
	cin>>x;
	
	y=sqrt(1/(1+pow(x,2)));
	
	//saida
	cout<<fixed<<setprecision(4);//limitacao de 4 casas decimais
	cout<<"y = "<<y<<endl;
	
	return 0;
}