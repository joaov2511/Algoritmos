#include <iostream>
#include <cstring>

using namespace std;
int main ()
{
	//declaracao de variaveis
	char palavra1[20];//palavra 1
	char palavra2[20];//palavra 2
	char palavra3[20];//palavra 3

	//entrada das palavras
	cin.getline(palavra1, 20);
	cin.getline(palavra2, 20);
	cin.getline(palavra3, 20);

	if (strcmp(palavra1, palavra2) < 0 && strcmp(palavra1, palavra3) < 0 && strcmp(palavra2, palavra3) < 0) //caso da ordem seja palavra1 palavra2 palavra3
		cout << palavra1 << " " << palavra2 << " " << palavra3 << endl;

	else if (strcmp(palavra1, palavra3) < 0 && strcmp(palavra1, palavra2) < 0 && strcmp(palavra3, palavra2) < 0) //caso da ordem seja palavra1 palavra3 palavra2
		cout << palavra1 << " " << palavra3 << " " << palavra2 << endl;

	else if (strcmp(palavra2, palavra1) < 0 && strcmp(palavra2, palavra3) < 0 && strcmp(palavra1, palavra3) < 0) //caso da ordem seja palavra2 palavra1 palavra3
		cout << palavra2 << " " << palavra1 << " " << palavra3 << endl;

	else if (strcmp(palavra2, palavra3) < 0 && strcmp(palavra2, palavra1) < 0 && strcmp(palavra1, palavra3) < 0) //caso da ordem seja palavra2 palavra3 palavra1
		cout << palavra2 << " " << palavra3 << " " << palavra1 << endl;

	else if (strcmp(palavra3, palavra1) < 0 && strcmp(palavra2, palavra3) < 0 && strcmp(palavra2, palavra1) < 0) //caso da ordem seja palavra3 palavra1 palavra2
		cout << palavra3 << " " << palavra1 << " " << palavra2 << endl;

	else if (strcmp(palavra3, palavra2) < 0 && strcmp(palavra3, palavra1) < 0 && strcmp(palavra2, palavra1) < 0) //caso da ordem seja palavra3 palavra2 palavra1
		cout << palavra3 << " " << palavra2 << " " << palavra1 << endl;

	return 0;
}
