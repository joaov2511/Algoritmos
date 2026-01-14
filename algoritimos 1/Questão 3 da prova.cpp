#include <iostream>

using namespace std;
int main()
{
	int N; //quantidade de valores que seram lidos
	int i;
	int nImpares;
	int nPares;
	int nPositivos;
	int nNegativos;
	int aux;//valor auxiliar para leitura
	
 	 nImpares=0;
  	  nPares=0;
	 nPositivos=0;
	 nNegativos=0;
	
	cin>>N;
	for(i=0; i<N; i++)
	{
		cin>>aux;
		if(aux%2==0)
			nPares=nPares+1;
		else
			nImpares=nImpares+1;
		if(aux>=0)
			nPositivos=nPositivos+1;
		else
			nNegativos=nNegativos+1;
	}
			cout<<nPares<<"numeros pares"<<endl;
		cout<<nImpares<<"numeros impares"<<endl;
		cout<<nPositivos<<"numeros positivos"<<endl;
		cout<<nNegativos<<"numeros negativos"<<endl;
	
	return 0;
}