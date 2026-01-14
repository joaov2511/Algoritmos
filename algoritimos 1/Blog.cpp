#include <iostream>

using namespace std;

int main ()
{
	//variaveis
	char codigo;
	
	//entrada
	cin >> codigo;
	
	//decisão
	switch (codigo)
	{
		case 'a':
			cout << "Africa";
			break;
		case 'b':
			cout << "America";
			break;
		case 'c':
			cout << "Antartida";
			break;
		case 'd':
			cout << "Asia";
			break;
		case 'e':
			cout << "Europa";
			break;
		case 'f':
			cout << "Oceania";
			break;
		default:
			cout << "Opcao invalida!";
	}
	
	return 0;
}