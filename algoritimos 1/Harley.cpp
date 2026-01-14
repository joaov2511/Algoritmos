#include <iostream>

using namespace std;

int main()
{
	//variavel
	double m1;
	double m2;
	double m3;
	double v1;
	double v2;
	double v3;
	
	//entrada
	cin>>m1;
	cin>>m2;
	cin>>m3;
	
	//calculo
	v1=(10*m1)-(4/3*(m1));
	v2=(10*m2)-(4/3*(m2));
	v3=(10*m3)-(4/3*(m3));
	
	//condição
	if(v1>v2 && v1>v3)
	{
		cout<<"Moto 1"<<endl;
	}
	else if(v2>v1 && v2>v3)
	{
		cout<<"Moto 2"<<endl;
	}
	else
	{
		cout<<"Moto 3"<<endl;
	}
	
	return 0;
}