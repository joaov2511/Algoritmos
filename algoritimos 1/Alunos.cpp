#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	char nome[50]; // Nome completo de cada aluno
	int mat; // Matrícula de cada aluno
	double NP1, NP2; // Notas de cada aluno
	double media; // Media de cada aluno
	int op; // Opção do usuário (0 -> sair, 1 -> continuar)
	double maior = 0; // Maior média da sala
	double menor = 100; // Menor média da sala
	double mediaGeral = 0;
	int nAlunos = 0;
	do
	{
		cin.getline(nome, 50);
		cin >> mat;
		do
		{
			cin >> NP1;
		}
		while(NP1 < 0 || NP1 > 100);

		do
		{
			cin >> NP2;
		}
		while(NP2 < 0 || NP2 > 100);
		
		// Calcula a média do aluno
		media = (NP1 + NP2) / 2;
	
		// Procura a maior e a menor média
		if(media > maior)
			maior = media;
		if(media < menor)
			menor = media;
		
		// Soma todas as medias e conta os alunos
		mediaGeral += media;
		nAlunos++;
		
		cout << "Aluno: " << nome << endl;
		cout << "Mat: " << mat << endl;
		cout << fixed << setprecision(2);
		cout << "Media: " << media << endl;
		cin >> op;
		cin.ignore();
	}while(op == 1);
	mediaGeral /= nAlunos; //mediaGeral = mediaGeral/nAlunos
	cout << "Media Geral: " << mediaGeral << endl;
	cout << "Maior media: " << maior << endl;
	cout << "Menor media: " << menor << endl;
	return 0;
}
