#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//variaveis
	double nf;//numero do funcionario
	double vph;//valor por hora
	double h;//horas trabalhadas
	double vf;//valor final
	
	//entrada
	cin>>nf;
	cin>>h;
	cin>>vph;
	
	//calculo
	vf=vph*h;
	
	//saida
	cout<<"NUMBER = "<<nf<<endl;
	cout<<fixed<<setprecision(2);
	cout<<"SALARY = U$ "<<vf<<endl;
	
	return 0;
}