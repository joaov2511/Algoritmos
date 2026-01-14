#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	//declaracao de variavel
	double imc;//indice de massa corporal
	double p;//peso em kg
	double h;//altura em metros
	
	//entrada 
	cin>>p;
	cin>>h;
	
	imc=p/pow(h,2);//calculo do peso dividido pela altura ao quadrado
	
	if(imc<18.5)//se o imc abaixo de 18.5 sera abaixo do peso
	{
		cout<<"Baixo peso"<<endl;
	}
	else if(imc>=18.6 && imc<25)//se o imc for maior ou igual a 18.5 e menor a 25
	{
		cout<<"Normal"<<endl;
	}
	else if(imc>=25.1 && imc<30)//se o imc for maior ou igual a 25 e maior a 30
	{
		cout<<"Sobrepeso"<<endl;
	}
	else //se o imc for maior ou igual a 30
	{
     	(imc>=30.1);
	
		cout<<"Obeso"<<endl;
	}
	
	return 0;
}