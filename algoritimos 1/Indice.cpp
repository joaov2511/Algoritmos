#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	//variaveis
	double idade;
	double Ind;
	char nome[20];
	
	//lendo variaveis
	cin>>idade;
	cin.ignore();
	cin.getline(nome, 20);
	
	//calculando
	Ind=(idade*1/42)-(idade-3);
	
	//saida
	cout<<fixed<<setprecision(4);
	cout<<"Ind = "<<Ind<<endl;
	
	return 0;
}