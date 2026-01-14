#include <iostream>
#include <cmath>

using namespace std;

int calc_a(int x)//funcao com o calculo da variavel B
{
	int a;
	a = 2 * pow(x, 2) + 3 * x - 1;
	return a;//retorna com o resultado de A
}

int calc_b(int x)//funcao com o calculo da variavel B
{
	int b;
	b = pow(x, 3);
	return b;//retorna com o resultado de B
}

int calc_c(int y)//funcao com o calculo da variavel C
{
	int c;
	c = pow(y, 3);
	return c;//retorna com o resultado de C
}

int main()
{
	int a, b, c, x, y;//declaracao de variavel
	
	cin >> x >> y;//entrada dos inteiros
	
	//chamando as funcoes
	a = calc_a(x);
	b = calc_b(x);
	c = calc_c(y);
	
	//saida
	cout<<"a = " << a << endl;
	cout<<"b = " << b << endl;
	cout<<"c = " << c << endl;
	
	return 0;
}
