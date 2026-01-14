#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main()
{
 	int T;
	int V;
	float gasto;
	float distancia;
	
	cin>>T;
	cin>>V;
	
	distancia=T*V;
	gasto=distancia/12;
	cout<<fixed<<setprecision(3);
	cout<<gasto<<endl;

    return 0;
}