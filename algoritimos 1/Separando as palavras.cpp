#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	char palavra [200];//variavel para palavras
	
	cin.getline (palavra,200);//entrada de palavra
	
	cout << palavra << endl;//saida com as palavras separadas por linhas
	
	return 0;
}