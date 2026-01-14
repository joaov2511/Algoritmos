#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//variaveis
	double quant;//quantidade
	double prod;//prduto
	double vp;//valor do produto
	double total;//total a pagar
	
	cin>>prod;
	cin>>quant;
	
	//caso produto 1
	if(prod==1)
	{
		vp=4.00;
	}
	//caso produto 2
	else if(prod==2)
	{
		vp=4.50;
	}
	//caso produto 3
	else if(prod==3)
	{
		vp=5.00;
	}
	//caso produto 4
	else if(prod==4)
	{
		vp=2.00;
	}
	//caso produto 5
	else if(prod==5)
	{
		vp=1.50;
	}
	
	//calculo do total
	total=quant*vp;
	
	//saida
	cout<<fixed<<setprecision(2);
	cout<<"Total: R$ "<<total<<endl;
	
	return 0;
}