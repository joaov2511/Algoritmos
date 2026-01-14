#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int m;//numero de macas
	double p;//pagamento
	
	//entrada
	cin>>m;
	
	//decisao
	if(m>=12)
	{
		p=m*0.25;
	}
	else
	{
		p=m*0.3;
	}
	
	//saida
	cout<<fixed<<setprecision(2);
	cout<<"R$ "<<p<<endl;
	return 0;
}