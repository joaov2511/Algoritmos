#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char cidade[50];
	
	cin.getline(cidade, 50);
	
	if(strcmp(cidade, "61")==0)
	{
		cout<<"Brasilia"<<endl;
	}
	else if(strcmp(cidade, "71")==0)
	{
		cout<<"Salvador"<<endl;
	}
	else if(strcmp(cidade, "11")==0)
	{
		cout<<"Sao Paulo"<<endl;
	}
	else if(strcmp(cidade, "21")==0)
	{
		cout<<"Rio de Janeiro"<<endl;
	}
	else if(strcmp(cidade, "32")==0)
	{
		cout<<"Juiz de Fora"<<endl;
	}
	else if(strcmp(cidade, "19")==0)
	{
		cout<<"Campinas"<<endl;
	}
	else if(strcmp(cidade, "27")==0)
	{
		cout<<"Vitoria"<<endl;
	}
	else if(strcmp(cidade, "31")==0)
	{
		cout<<"Belo Horizonte"<<endl;
	}
	else
	{
		cout<<"DDD nao cadastrado"<<endl;
	}
	
	return 0;
}