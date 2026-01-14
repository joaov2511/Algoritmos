#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;//numero de repeticoes
	int i;//variavel de controle
	char nome[100];//variavel contendo o nome
	double n1, n2, n3, n4;//variaveis das notas
	double media;//variavel de media
	
	cin>>n;//entrada com o numero de repeticoes
	
	for(i=0; i<n; i++)
	{
		cin.ignore();
		cin.getline(nome,100);//entrada do nome dos alunos
		cin>>n1>>n2>>n3>>n4;//entrada para as notas
		
		media=float(n1+2*n2+3*n3+4*n4)/10;//calculo da media
		
		//saida
		cout<<fixed<<setprecision(2);//limite de 2 casas decimais
		cout<<nome<<":"<<media<<endl;
	}
	return 0;
}