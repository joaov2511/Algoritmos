#include <iostream>

using namespace std;

int main()
{
	//variaveis
	char nome[50];
	char nome2[50];
	int idade;
	int idade2;
	
	//entrada
	cin.getline(nome, 50);
	cin>>idade;
	cin.ignore();
	cin.getline(nome2, 50);
	cin>>idade2;
	
	//condição
	if(idade>idade2)
	{
		cout<<nome;
	}
	else if(idade2>idade)
	{
		cout<<nome2;
	}
	else
	{
		cout<<"Idades iguais";
	}
	
	return 0;
}