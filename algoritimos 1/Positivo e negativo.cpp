#include <iostream>

using namespace std;

int sinal(int n)//funcao pra determinar se eh positivo ou negativo
{
	int i;
	if(n>0)//caso seja positivo
	{
		i=1;
	}
	else if(n<0)//caso seja negativo
	{
		i=-1;
	}
	else//caso seja 0
	{
		i=0;
	}
	return i;
}
int main()
{
	int n;//variavel com o numero que sera analisado
	
	cin>>n;//entrada da variavel com os numeros
	
	if(sinal(n)==1)//saida com o caso positivo
		cout<<"Positivo"<<endl;
	
	else if(sinal(n)==-1)//saida com o caso negativo
		cout<<"Negativo"<<endl;
	
	else if(sinal(n)==0)//saida do caso 0
		cout<<"Zero"<<endl;
	
	return 0;
}