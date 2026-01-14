#include <iostream>
#include <iomanip>

using namespace std;

float media(int notas[], int nAlunos)//funcao com calculo da soma e media
{
	int i;//contador
	int soma = 0;//soma das notas

	for(i = 0; i < nAlunos; i++)
		soma += notas[i];//calculo com a soma das notas
	return (float)soma / nAlunos;//retorna na media das notas
}
int main()
{
	int notas[100];//notas
	int nAlunos;//quantidade de alunos
	float m; //media
	
	cin >> nAlunos;//entrada com o numero de alunos

	for(int i = 0; i < nAlunos; i++)
		cin >> notas[i];//entrada das notas

	m = media(notas, nAlunos);//m assumira o valor da funcao media

	cout << fixed << setprecision(2);//limite de 2 casas decimais
	cout << "Media da turma = " << m << endl;
}
