#include <iostream>
#include <cstring>

using namespace std;

struct dado//sruct com os dados dos jedi
{
	char nome[50];//variavel com o nome do jedi
	int base;//variavel da base em q o jedi esta
};
int main()
{
	dado jedi[10];
	int n;//numero de jedi cadastrados
	int i;//contador do for
	int base;//variavel para assumir o valor da base onde o jedi esta
	char procura[50];//busca pelo jedi na sua base atual
	int cont = 0;//contador da busca
	
	cin >> n;//entrada com o numero de jedi para cadastrar
	
	for(i = 0; i < n; i++)
	{
		cin.ignore();
		cin.getline(jedi[i].nome, 50);//entrada com nome do jedi
		cin >> jedi[i].base;//entrada com a base do jedi
	}
	
	cin.ignore();
	cin.getline(procura, 50);//entrada com a busca do jedi pela base
	
	for(i = 0; i < n; i++)
	{
		if(strcmp(jedi[i].nome, procura) == 0)//se o resultado da comparacao for 0 o jedi sera encontrado e contador da busca mudara o valor
		{
			base = jedi[i].base;
			cont++;
		}
	}
	if(cont == 0)//se o contador continuar 0 o jedi nao foi encontrado
	{
		cout << "Este cavaleiro nao esta cadastrado" << endl;
	}
	else//caso do jedi ser encontrado
		cout << "Este cavaleiro esta na base: " << base << endl;
	return 0;
}
