#include <iostream>
#include <string>
using namespace std;

struct aluno
{
	int matricula;
	string nome;
	int idade;
};

aluno cria_aluno()
{
	aluno a;
	cin >> a.matricula;
	cin >> a.nome;
	cin >> a.idade;
	return a;
}

int busca_seq_aluno_mat(aluno alunos[], int n, int mat)
{
	for(int i = 0; i < n; i++)
	{
		if(mat == alunos[i].matricula)
			return i;
	}
	return -1;
}

int busca_seq_aluno_mat(aluno alunos[], int n, string nome);
{
	for(nome == alunos[i].nome)
	{
		if(nome == alunos[i].nome)
		{
			return i;
		}
	}
	return -1;
}
int busca_seq_aluno_nome(aluno alunos[], int n, int nome)
{
	for(int i = 0; i < n; i++)
	{
		if(mat == alunos[i].nome)
			return i;
	}
	return -1;
}
int busca_seq_aluno_idade(aluno alunos[], int n, int idade)
{
	int contador=0;
	for(int i = 0; i < n; i++)
	{
		if(mat <= alunos[i].idade)
			contador++;
	}
	return contador;
}

int main()
{
	int n;

	cin >> n;

	aluno alunos[n];

	for(int i = 0; i < n; i++)
	{
		aluno[i] = cria_aluno();
	}

	int mat = 6;

	int resultado = busca_seq_aluno_mat(alunos, n, mat);

	if(resultado != -1)
	{
		cout << alunos[resultado].nome << endl;
		cout << alunos[resultado].matricula << endl;
		cout << alunos[resultado].idade << endl;
	}
	else
	{
		cout << "Aluno nao encontrado!" << endl;
	}

	string nome = "Jonas";
	int resultado = busca_seq_aluno_nome(alunos, n, nome);

	if(resultado != -1)
	{
		cout << alunos[resultado].nome << endl;
		cout << alunos[resultado].matricula << endl;
		cout << alunos[resultado].idade << endl;
	}
	else
	{
		cout << "Aluno nao encontrado!" << endl;
	}
	
	int idade_buscada=15;
	resultado=busca_seq_aluno_idade(alunos,n,idade_buscada);
	cout<<"Existe(m) " << resultado;
	cout<<" aluno(s) com essa idade ou menor"<<endl;
	
	return 0;
}
