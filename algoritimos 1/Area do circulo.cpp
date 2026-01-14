#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	//variaveis
	double r;//raio
	double pi;
	double a;//area
	
	//entrada
	cin>>r;
	pi=3.14159;
	
	//calculo
	a=(pi*pow(r,2));
	
	//saida
	cout<<fixed<<setprecision(4);
	cout<<"A="<<a<<endl;
	
	return 0;
}