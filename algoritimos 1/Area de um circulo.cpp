#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	//variaveis
	float r;//raio
	float pi;
	float a;//area
	
	//entrada
	cin>>r;
	pi=3.14159;
	
	//calculo
	a=(pi*pow(r,2));
	
	//saida
	cout<<fixed<<setprecision(3);
	cout<<"AREA= "<<a<<endl;
	
	return 0;
}