#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	//declaração de variaveis 
	int x;
	int cont = 0;
	char nome[51];
	
	//entrada de dados 
	cin >> x;
	cin.ignore();
	cin.getline(nome, 51);
	
	//processamento 
	for(int i = 0; i < strlen(nome); i++)
	{
		if (isupper(nome[i]))
		{
			cont++;
		}
	}
	
	//saida de dados 
	cout << cont << endl;
	
	return 0;
}