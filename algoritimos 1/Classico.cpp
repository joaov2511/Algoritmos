#include <iostream>

using namespace std;

int main()
{
	//variaveis
	double x, y; //valores do cálculo
	char op; //operacao que o usuario escolher

	cin >> x >> y;
	cin >> op;

	//casos possiveis
	switch(op)
	{
	case '+':
		cout << x + y << endl;
		break;
	case '-':
		cout << x - y << endl;
		break;
	case '*':
		cout << x * y << endl;
		break;
	case '/':
		cout << x / y << endl;
		break;
	}
	//divisao impossivel
	if(y == 0)
	{
		cout << "Impossivel" << endl;
	}
	return 0;
}
