#include <iostream>

using namespace std;

int main()
{
	//declaracao de variaveis
	int N;//numero de repeticoes
	int i;//numeros inteiros
	int cont;//contador
	int maior=-1;//maior para ser comparado aos inteiros
	
	//entrada
	cin>>N;
	
	//repeticao conhecida
	for(cont=0; cont<N; cont++)
	{
		cin>>i;//entrada dos inteiros
		
		if(i%2==0)//se o inteiro for numero par vai realizar a proxima verificacao
		{
			if(i>maior)//se for maior a variavel "maior" assume o valor do inteiro
			{
				maior=i;
			}
		}
	}
	
	//saida
	cout<<maior<<endl;
	
	return 0;
}