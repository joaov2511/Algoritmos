#include <iostream>

using namespace std;
int main()
{
	//declaracao de variaveis
	int N[1000];
	int j=0;//variavel do segundo termo do produto
	int w=0;//variavel auxiliar de controle para o vetor
	int z=0;//variavel controle do while
	int n;//numero que sera realizado sua tabuada
	
	//entrada
	cin>>n;
	
	//repeticao
	for(int i=0; i!=11; i++)
	{
		N[i]=n*j;//calculo para a tabuada e sera armazenado no vetor
		j++;//vai acrescentar +1 para o segundo termo
	}
	while(z!=11)//vai repetir ate o segundo termo do produto chega em 10
	{
		cout<<n<<" X "<<z<<" = "<<N[w]<<endl;//saida mostrando a tabuada
		w++;
		z++;//vai acrescentar +1 para o controle
	}
	
	return 0;
}