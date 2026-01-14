#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	char nome[50];
	int idade;
	double peso;
	double altura;
	double imc;

	//leitura das informacoes do paciente
	cin >> idade;
	cin.ignore();
	cin.getline(nome, 50);
	cin >> altura >> peso;

	//calculo do imc
	imc = peso / (altura * altura);
	
	cout << "Nome: " << nome << endl;
	cout << "Idade: " << idade << endl;
	cout << fixed << setprecision(2);
	cout << "IMC: " << imc << endl;
	//teste da faixa do imc
	if(imc <= 15)
		cout << "Extremamente abaixo do peso" << endl;
	else if(imc <= 16)
		cout << "Gravemente abaixo do peso" << endl;
	else if(imc <= 18.5)
		cout << "Abaixo do peso ideal" << endl;
	else if(imc <= 25)
		cout << "Peso ideal" << endl;
	else if (imc <= 30)
		cout << "Sobrepeso" << endl;
	else if(imc <= 35)
		cout << "Obesidade grau I" << endl;
	else if(imc <= 40)
		cout << "Obesidade grau II (grave)" << endl;
	else if(imc > 40)
		cout << "Obesidade grau III (morbida)" << endl;
	
	return 0;
}
