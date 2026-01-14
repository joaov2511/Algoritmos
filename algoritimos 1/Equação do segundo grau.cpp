#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float calc_delta(float a, float b, float c)//funcao para o calculo de delta
{
	int d;//variavel de delta
	
	d = pow(b, 2) - 4 * a * c;
	
	return d;//vai retornar na variavel d
}

int calc_raizes(float a, float b, float c, float &x1, float &x2)//funcao para o calculo das raizes
{
	int d;
	
	d = calc_delta(a, b, c);
	
	if(d >= 0)//caso delta seja maior ou igual a 0 possui raizes
	{
		x1 = (-b - sqrt(d)) / (2 * a);
		x2 = (-b + sqrt(d)) / (2 * a);
		return 0;
	}
	else//caso nao possua raizes reais
	{
		return 1;
	}
}
int main()
{
	int a, b, c, d;//termos da equacao do segundo grau
	float x1, x2;//variavel com as raizes resultantes
	int real;
	
	cin >> a >> b >> c;//entrada das variaveis
	
	//chamando as funcoes
	d = calc_delta(a, b, c);
	real = calc_raizes(a, b, c, x1, x2);
	
	//saida
	if(real == 1)//caso nao tenha raizes reais
	{
		cout << "Nao ha raizes reais" << endl;
	}
	else if(x1 == x2)//caso as raizes sejam iguais
	{
		cout << "X = " << x1 << endl;
	}
	else//caso tenha 2 raizes
	{
		cout << fixed << setprecision(2);//limite de 2 casas decimais
		cout << "X1 = " << x1 << endl;
		cout << "X2 = " << x2 << endl;
	}
	return 0;
}
