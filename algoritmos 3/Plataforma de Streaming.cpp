#include <iostream>
#include <string>
 
using namespace std;
 
struct FILMES
{
	string nome;
	string genero;
	int duracao;
	int clasificacao;
	int ano;
};
 
struct treenode
{
	FILMES info;
	treenode *esq;
	treenode *dir;
};
 
typedef treenode *treenodeptr;
 
void tInsere (treenodeptr &p, FILMES x)
{
	if (p == NULL) // insere na raiz
	{
		p = new treenode;
		p->info = x;
		p->esq = NULL;
		p->dir = NULL;
	}
	else
	{
		if (x.nome < p->info.nome) // insere na subarvore esquerda
			tInsere (p->esq, x);
		else // insere na subarvore direita
			tInsere (p->dir, x);
	}
}
 
treenodeptr tPesq(treenodeptr p, string x)
{
	if (p == NULL) // elemento não encontrado
		return NULL;
	else if (x == p->info.nome) // elemento encontrado na raiz
		return p;
	else if (x < p->info.nome) // procura na subárvore esquerda
		return tPesq(p->esq, x);
	else // procura na subárvore direita
		return tPesq(p->dir, x);
}
 
void printFilme(FILMES filme)
{
	cout << "Nome: " << filme.nome << endl;
	cout << "Genero: " << filme.genero << endl;
	cout << "Duracao: " << filme.duracao << " mins" << endl;
	cout << "Classificacao: " << filme.clasificacao << endl;
	cout << "Ano: " << filme.ano << endl;
}
 
int main()
{
	setlocale(LC_ALL, "Portuguese");
 
	int n = 4; // variavel auxiliar para leitura de dados
	int i = 0;
	string name;
	treenodeptr arvore = NULL;
	FILMES filme[100];
	while(cin >> n && n != 0)
	{
		switch(n)
		{
		case 1:
		{
			getline(cin >> ws, filme[i].nome);
			cin >> filme[i].genero;
			cin >> filme[i].duracao;
			cin >> filme[i].clasificacao;
			cin >> filme[i].ano;
			tInsere (arvore, filme[i]);
			i++;
		}
		break;
		case 2:
		{
			getline(cin >> ws, name);
			treenodeptr res = tPesq(arvore, name);
			if(res == NULL)
				cout << "Filme nao encontrado" << endl;
			else
				printFilme(res->info);
		}
		break;
		case 0:
		{
			n = 0;
		}
		break;
		default:
		{
			cout << "Operacao invalida" << endl;
		}
		break;
		}
	}
 
	return 0;
}