#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//variaveis
	char nome[50];
	double sf;//salario fixo
	double ve;//venda efetuada
	double s;//salario final
	
	//entrada
	cin.getline(nome, 50);
	cin>>sf;
	cin>>ve;
	
	//calculo
	s=sf+(0.15*ve);
	
	//saida
	cout<<fixed<<setprecision(2);
	cout<<"TOTAL = R$ "<<s<<endl;
	
	return 0;
}