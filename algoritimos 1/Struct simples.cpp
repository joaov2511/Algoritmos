#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

struct pessoas
{
	char nome[50];
	int sexo;
	char estadoCivil[1];
	int idade;
};

int main()
{
	int c = 0; // contador / quantidade de pessoas
	pessoas dados[100]; //Struct
	double media; // Media de idade
	double somaIdades = 0; //Soma das idades
	int casada = 0; // quantidade de pessoas casadas
	double porcentagem; //Porcentagem de pessoas casadas
	int index = 0; //indice do homem mais velho
	int idadeMaisVelho; //idade do homem mais velho
	int qntHomens = 0;

	//Coletando primeiro nome
	cin.getline(dados[0].nome, 50);

	while(strcmp(dados[c].nome, "sair") != 0)
	{
		//Critica de dados do sexo
		cin >> dados[c].sexo;
		while(dados[c].sexo != 1 && dados[c].sexo != 2)
		{
			//cout << "Digite o sexo novamente: " << endl;
			cin >> dados[c].sexo;
		}

		//Critica de dados do estado civil
		cin >> dados[c].estadoCivil;
		while(strcmp(dados[c].estadoCivil, "C") != 0 && strcmp(dados[c].estadoCivil, "S") != 0 && strcmp(dados[c].estadoCivil, "V") != 0 && strcmp(dados[c].estadoCivil, "D") != 0)
		{
			//cout << "Digite o estado civil novamente: " << endl;
			cin >> dados[c].estadoCivil;
		}

		//Quantidade de pessoas casadas
		if(strcmp(dados[c].estadoCivil, "C") == 0)
			casada++;

		//Coletando a idade
		cin >> dados[c].idade;

		//Somando as idades
		somaIdades += dados[c].idade;

		if(dados[c].sexo == 1)
		{	
			if(qntHomens == 0)
			{
				index = c;
				idadeMaisVelho = dados[c].idade;
				qntHomens++;
			}
			else
			{
				if(dados[c].idade > idadeMaisVelho)
				{
					index = c;
					idadeMaisVelho = dados[c].idade;
				}
			}
		}

		cin.ignore();
		cin.getline(dados[c + 1].nome, 50);
		c++;
	}

	media = (double)somaIdades / c;
	porcentagem = ((double)casada / c) * 100;

	cout << fixed << setprecision(2);
	cout << "Porcentagem de pessoas casadas: " << porcentagem << "%" << endl;
	cout << "Idade media da populacao: " << media << " anos" << endl;
	cout << "Nome e idade do homem mais velho: " << dados[index].nome << " " << dados[index].idade << " anos" << endl;
	return 0;
}