#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double i;//numeros inteiros
	double media;//media dos elementos
	double s=0;//soma dos inteiros
	double div=0;//divisao da media
	
	//entrada
	cin>>i;
	
	while(i!=0)//vai repetir ate a variavel "i" ser igual a 0
	{
		s=i+s;
		div++;
		cin>>i;
	}
	
	media=s/div;//calculo da media
	
	//saida
	cout<<fixed<<setprecision(2);//limite de 2 casas decimais
	cout<<media<<endl;
	
	return 0;
}