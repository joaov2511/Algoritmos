#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	//declaracao de variaveis
	int x[50];//primeiro termo do calculo
	int y[50];//segundo termo do calculo
	int n;//numero dos casos que serao realizados
	double aux;//variavel auxiliar com resultado do calculo
	int i;//variavel controle do vetor
	char sinal[10];//sinal da operacao

	//entrada
	cin >> n;
	
	//repeticao
	for(i = 0; i < n; i++)
	{
		cin >> x[i];//entrada do primeiro termo
	}
	for(i = 0; i < n; i++)
	{
		cin >> y[i];//entrada do segundo termo
	}
	for(i = 0; i < n; i++)
	{
		cin >> sinal[i];//entrada do sinal
		switch(sinal[i])
		{
		case '+'://caso sinal seja adicao
			aux = x[i] + y[i];
			cout << x[i] << " + " << y[i] << " = " << aux << endl;
			break;
		case '-'://caso sinal seja subtracao
			aux = x[i] - y[i];
			cout << x[i] << " - " << y[i] << " = " << aux << endl;
			break;
		case '*'://caso sinal seja multiplicacao
			aux = x[i] * y[i];
			cout << x[i] << " * " << y[i] << " = " << aux << endl;
			break;
		case '/'://caso sinal seja divisao
			aux = double(x[i]) / double(y[i]);//calculo com variavel double para calculo de divisao
			cout << fixed << setprecision(2);//limitar para 2 casa decimais
			cout << x[i] << " / " << y[i] << " = " << aux << endl;
			break;
		}
	}
	return 0;
}
