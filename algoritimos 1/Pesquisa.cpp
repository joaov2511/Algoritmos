#include <iostream>

using namespace std;
int main()
{
	//declaracao de variaveis
	int x;//numero que sera pesquisado
	int j=0;//contador do for
	int i=0;//contador do vetor
	float N[100];//vetor para armazenar varios numeros
	
	//entrada
	cin>>N[0];//etrada do primeiro numero do vetos
	
	//repeticao
	while(N[i]!=0)//vai repetir enquanto o numero for diferente de 0
	{
		j++;
		i++;
		cin>>N[i];
	}
	cin>>x;//entrada do numero que sera pesquisado
	for(i=0; i<j; i++)//for para encontrar o numero dentro do vetor
	{
		if(N[i]==x)//caso o numero seja encontrado
		{
			cout<<"Elemento "<<x<< " encontrado na posicao "<<i<<endl;
			return 0;
		}
	}
	
	cout<<"Elemento "<<x<<" nao foi encontrado "<<endl;//caso nao encontre o numero no vetor
	
	return 0;
}