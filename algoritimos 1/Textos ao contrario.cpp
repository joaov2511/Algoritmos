#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	//declaração de variaveis 
	char t[51];
	char temp;
	
	//entrada de dados 
	cin.getline(t, 51);
	
	//processamento de dados 
	for(int i = 0, j = strlen(t) - 1; i < j; i++, j--)
	{
		temp = t[i];
		t[i] = t[j];
		t[j] = temp;
	}
	
	//saida de dados
	cout << t << endl;
	
	return 0;
}