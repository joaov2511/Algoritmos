#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//variaveis
	double Salario;
	double imposto;

	//entrada
	cin >> Salario;

	cout << fixed << setprecision(2);

	//caso do salario menor ou igual a 2000
	if(Salario <= 2000)
		cout << "Isento" << endl;

	//caso do salario maior ou igual a 2000.01 e menor ou igual a 3000
	else if(Salario >= 2000.01 && Salario <= 3000)
	{
		imposto = (Salario - 2000) * 0.08;
		cout << "R$ " << imposto << endl;
	}
	
	//caso do salario maior ou igual a 3000.01 e menor ou igual que 4500
	else if(Salario >= 3000.01 && Salario <= 4500)
	{
		imposto =  (1000*0.08)+(Salario-3000) * 0.18;
		cout << "R$ " << imposto << endl;
	}

	//caso do salario maior que 4500
	else if (Salario > 4500)
	{
		imposto =  (1000*0.08)+ (1500*0.18)+(Salario-4500)*0.28;
		cout << "R$ " << imposto << endl;
	}
	return 0;
}