#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

struct dado//struct com os dados dos padawans
{
	char nome[50];//variavel com o nome de cada padawan
	int pontos;//variavel com os pontos de cada padawan
};
int main ()
{
	dado padawan[10];
	int n;//numero de pawans cadastrados
	int i;//contador do for
	float aux = 0;//variavel auxiliar para a soma dos pontos para calcular a media
	double media;//media dos pontos
	char k[50];
	int maior = 0;//maior media de pontos
	
	cin >> n;//entrada do numero de padawans
	
	for(i = 0; i < n; i++)
	{
		cin.ignore();
		cin.getline(padawan[i].nome, 50);//entrada com o nome dos padawans
		cin >> padawan[i].pontos;//entrada com a entrada dos pontos
	}
	for(i = 0; i < n; i++)
	{
		aux = aux + padawan[i].pontos;//soma dos pontos dos padawans
		media = aux / n;//calculo da media de pontos
	}
	for(i = 0; i < n; i++)
	{
		if(padawan[i].pontos > maior)//condicao de pontos da maior media
		{
			maior = padawan[i].pontos;
			strcpy(k, padawan[i].nome);//caso os pontos seja maior o valor de k sera mudado para o nome do padawan
		}
	}
	cout << "Padawan com mais pontos: " << k << endl;//saida com o nome do padawan com mais pontos
	cout << "Pontos: " << maior << endl;//maior numero de pontos
	cout << fixed << setprecision(2);//limite de 2 casas decimais
	cout << "Media da turma: " << media << " pontos" << endl;//media dos pontos
	return 0;
}
