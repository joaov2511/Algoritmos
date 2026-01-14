#include <iostream>

using namespace std;
int main()
{
	//declaracao de variaveis
	int N;//numero de pessoas que votarao
	int voto[1000];//variavel com os votos
	int i;//variavel controle
	int votacao=0;//variavel com o resultado da votacao
	
	//entrada
	cin>>N;//entrada com o numero de pessoas para a votacao
	
	//repeticao
	for(i=0; i<N; i++)
	{
		cin>>voto[i];//voto
		votacao=votacao+voto[i];//contagem da votacao
	}
	
	//decisao
	if(votacao>0)//caso a maioria tenha gostado
	{
		cout<<"A maioria gostou"<<endl;
	}
	else if(votacao<0)//caso a maioria nao tenha gostado
	{
		cout<<"A maioria nao gostou"<<endl;
	}
	else//caso de empate
	{
		cout<<"Deu empate"<<endl;
	}
	
	return 0;
}