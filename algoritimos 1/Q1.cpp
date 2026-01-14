#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	//variaveis
	double x1, x2, y1, y2, z1, z2;
	double x, y, z;
	double AB;
	
	//entrada
	cin>>x1>>y1>>z1;
	cin>>x2>>y2>>z2;
	
	//calculo
	x=x2-x1;
	y=y2-y1;
	z=z2-z1;
	AB=sqrt((pow(x,2))+pow(y,2)+pow(z,2));
	
	//saida
	cout<<fixed<<setprecision(3);
	cout<<AB<<endl;
	
	return 0;
}