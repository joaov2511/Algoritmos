#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	//declaração de variaveis
	char a[51];
	char b[51];

	//entrada de dados 
	cin >> a >> b;

	//processamento de dados 
	if (strcmp(a, b) == 0)
	{
		for(int i = 0; i < strlen(a); i++)
		{
			if (isalpha(a[i]))
			{
				cout << a[i];
			}
		}
		
		cout << endl;
	}
	
	else
	{
		cout << "Nao sao iguais!" << endl;
	}
	
	return 0;
}