#include <iostream>

using namespace std;

int main()
{
	//declaracao de variaveis
	int n;//variavel controle
	int idade;//variavel com a idade de cada jogador
	char nome[50];//variavel com o nome de cada jogador
	
	//entrada
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cin.ignore();
		cin.getline(nome, 50);//nome do jogador
		cin>>idade;//idade do jogador
		if(idade>=18)//se o jogador for maior de 18 anos seu nome sera mostrado
		{
			cout<<nome<<" "<<idade<<endl;
		}
	}
	return 0;
}