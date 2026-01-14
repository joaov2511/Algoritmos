//Integrantes do grupo: João VÍtor Araújo Cerqueira Dionísio, Lara Conte Gomes, Matheus Cesar Reis Pereira.
//Tema escolhido: Pokédex.

#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <math.h>
#include <climits>
#include <list>
#include <stack>

using namespace std;

//variavel global para contagem de pokemon
int cont = 0;
int code = 0;

// Estrutura para armazenar a localização de um Pokémon
struct ponto
{
	double x, y;//pontos da localização dos pokemons
};

// Função para calcular a distância Euclidiana entre dois pontos
double calcularDistancia(ponto p1, ponto p2)
{
	return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

//struct contendo as informações necessárias para armazenamento das entradas
struct Cidade
{
	string nome;//variavel com nome da cidade
	int code;//variavel com o codigo da cidade
	bool centro_pokemon;//variavel para caso tenha ou não centro pokemon
	bool esteve;//variavel caso tenha estado ou não na cidade
};

//struct contendo a origem, o destino e peso
struct edge
{
	int dest;//variavel da cidade de destino
	int weight;//peso do caminho entre as cidades
};

//struct contendo as informações do pokemon
struct pokemon
{
	int code;//codigo do pokemon
	string nome;//nome do pokemon
	int tipo1;//tipo do pokemon
	int tipo2;//segundo tipo caso o pekemon tenha 2 tipos
	ponto local;
	int index;//usado para remover algum pokemon registrado no vetor
};

//função dijkstra para achar o menor caminho
void shortest_path_dijkstra(list<edge> adj[], int vertices, int start, int distance[], int parent[])
{
	bool intree[vertices];
	for (int u = 0; u < vertices; u++)
	{
		intree[u] = false;
		distance[u] = INT_MAX;
		parent[u] = -1;
	}
	distance[start] = 0;
	int v = start;

	while (!intree[v])
	{
		intree[v] = true;
		for (list<edge>::iterator p = adj[v].begin(); p != adj[v].end(); ++p)
		{
			int dest = p->dest;
			int weight = p->weight;
			if (distance[dest] > distance[v] + weight)
			{
				distance[dest] = distance[v] + weight;
				parent[dest] = v;
			}
		}

		v = -1;
		int dist = INT_MAX;
		for (int u = 0; u < vertices; u++)
		{
			if (!intree[u] && distance[u] < dist)
			{
				dist = distance[u];
				v = u;
			}
		}
		if (v == -1) break;//finaliza o programa se a variavel v for -1
	}
}

//arvore binaria
struct treenode
{
	pokemon info;
	treenode *esq;
	treenode *dir;
};

typedef treenode *treenodeptr;

void tInsere (treenodeptr &p, pokemon x)
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

void tInseretipo (treenodeptr &p, pokemon x)
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
		if (x.tipo1 < p->info.tipo1) // insere na subarvore esquerda
			tInseretipo (p->esq, x);
		else // insere na subarvore direita
			tInseretipo (p->dir, x);
	}
}

//pesquisa na arvore por nome
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

treenodeptr tPesqtipo(treenodeptr p, int x)
{
	if (p == NULL) // elemento não encontrado
		return NULL;
	else if (x == p->info.tipo1) // elemento encontrado na raiz
		return p;
	else if (x < p->info.tipo1) // procura na subárvore esquerda
		return tPesqtipo(p->esq, x);
	else // procura na subárvore direita
		return tPesqtipo(p->dir, x);
}


void printPOKEMON(pokemon poke)//saida com as informações dos pokemons
{
	if(poke.code < 10)
		cout << "Codigo: 00" << poke.code << endl;
	else if(poke.code < 100)
		cout << "Codigo: 0" << poke.code << endl;
	else
		cout << "Codigo: " << poke.code << endl;
	cout << "Nome: " << poke.nome << endl;
	if(code == poke.tipo1 || code == poke.tipo2)
		cont++;
	if(poke.tipo1 == poke.tipo2 || poke.tipo2 == 19)
	{
		switch(poke.tipo1)
		{
		case 1:
			cout << "Tipo: água";
			break;
		case 2:
			cout << "Tipo: dragão";
			break;
		case 3:
			cout << "Tipo: elétrico";
			break;
		case 4:
			cout << "Tipo: fada";
			break;
		case 5:
			cout << "Tipo: fantasma";
			break;
		case 6:
			cout << "Tipo: fogo";
			break;
		case 7:
			cout << "Tipo: gelo";
			break;
		case 8:
			cout << "Tipo: grama";
			break;
		case 9:
			cout << "Tipo: insento";
			break;
		case 10:
			cout << "Tipo: lutadore";
			break;
		case 11:
			cout << "Tipo: metal";
			break;
		case 12:
			cout << "Tipo: normal";
			break;
		case 13:
			cout << "Tipo: psíquico";
			break;
		case 14:
			cout << "Tipo: rocha";
			break;
		case 15:
			cout << "Tipo: sombrio";
			break;
		case 16:
			cout << "Tipo: terra";
			break;
		case 17:
			cout << "Tipo: veneno";
			break;
		case 18:
			cout << "Tipo: voador";
			break;
		default:
			cout << "erro";
			break;
		}
	}
	else
	{
		switch(poke.tipo1)
		{
		case 1:
			cout << "Tipo 1: água";
			break;
		case 2:
			cout << "Tipo 1: dragão";
			break;
		case 3:
			cout << "Tipo 1: elétrico";
			break;
		case 4:
			cout << "Tipo 1: fada";
			break;
		case 5:
			cout << "Tipo 1: fantasma";
			break;
		case 6:
			cout << "Tipo 1: fogo";
			break;
		case 7:
			cout << "Tipo 1: gelo";
			break;
		case 8:
			cout << "Tipo 1: grama";
			break;
		case 9:
			cout << "Tipo 1: insento";
			break;
		case 10:
			cout << "Tipo 1: lutadore";
			break;
		case 11:
			cout << "Tipo 1: metal";
			break;
		case 12:
			cout << "Tipo 1: normal";
			break;
		case 13:
			cout << "Tipo 1: psíquico";
			break;
		case 14:
			cout << "Tipo 1: rocha";
			break;
		case 15:
			cout << "Tipo 1: sombrio";
			break;
		case 16:
			cout << "Tipo 1: terra";
			break;
		case 17:
			cout << "Tipo 1: veneno";
			break;
		case 18:
			cout << "Tipo 1: voador";
			break;
		default:
			cout << "erro";
			break;
		}
		cout << endl;
		switch(poke.tipo2)
		{
		case 1:
			cout << "Tipo 2: água";
			break;
		case 2:
			cout << "Tipo 2: dragão";
			break;
		case 3:
			cout << "Tipo 2: elétrico";
			break;
		case 4:
			cout << "Tipo 2: fada";
			break;
		case 5:
			cout << "Tipo 2: fantasma";
			break;
		case 6:
			cout << "Tipo 2: fogo";
			break;
		case 7:
			cout << "Tipo 2: gelo";
			break;
		case 8:
			cout << "Tipo 2: grama";
			break;
		case 9:
			cout << "Tipo 2: insento";
			break;
		case 10:
			cout << "Tipo 2: lutadore";
			break;
		case 11:
			cout << "Tipo 2: metal";
			break;
		case 12:
			cout << "Tipo 2: normal";
			break;
		case 13:
			cout << "Tipo 2: psíquico";
			break;
		case 14:
			cout << "Tipo 2: rocha";
			break;
		case 15:
			cout << "Tipo 2: sombrio";
			break;
		case 16:
			cout << "Tipo 2: terra";
			break;
		case 17:
			cout << "Tipo 2: veneno";
			break;
		case 18:
			cout << "Tipo 2: voador";
			break;
		default:
			cout << "erro";
			break;
		}
	}
	cout << endl;
	cout << "Posição do Pokemon é (" << poke.local.x << ", " << poke.local.y << ")" << endl;
	cout << endl;
}


treenodeptr tMenor(treenodeptr & raiz)
{
	treenodeptr t;

	t = raiz;

	if(t -> esq == NULL)
	{
		raiz = raiz -> dir;
		return t;
	}

	else
	{
		return tMenor(raiz->esq);
	}
}

int tRemove(treenodeptr & raiz, string x)
{
	treenodeptr p;

	if (raiz == NULL)
	{
		return -1;
	}

	if (x == raiz->info.nome)
	{
		p = raiz;

		if (raiz->esq == NULL)
		{
			raiz = raiz->dir;
		}
		else
		{
			if(raiz->dir == NULL)
			{
				raiz = raiz->esq;
			}
			else
			{
				p = tMenor(raiz->dir);
				raiz->info = p->info;
			}
		}
		cont--;
		int aux = p->info.index;
		delete p;
		return aux;
	}
	else
	{
		if (x < raiz->info.nome)
			return tRemove(raiz->esq, x);
		else
			return tRemove(raiz->dir, x);
	}
}

int tRemovetipo(treenodeptr & raiz, int x)
{
	treenodeptr p;

	if (raiz == NULL)
	{
		return 1;
	}

	if (x == raiz->info.tipo1)
	{
		p = raiz;

		if (raiz->esq == NULL)
		{
			raiz = raiz->dir;
		}
		else
		{
			if(raiz->dir == NULL)
			{
				raiz = raiz->esq;
			}
			else
			{
				p = tMenor(raiz->dir);
				raiz->info = p->info;
			}
		}

		delete p;
		return 0;
	}
	else
	{
		if (x < raiz->info.tipo1)
			return tRemovetipo(raiz->esq, x);
		else
			return tRemovetipo(raiz->dir, x);
	}
}

void emOrdem (treenodeptr arvore)
{
	if (arvore != NULL)
	{
		emOrdem(arvore->esq);
		printPOKEMON(arvore->info);
		emOrdem(arvore->dir);
	}
}

// Função para encontrar o ponto com a menor coordenada y (e menor x em caso de empate)
ponto p0;

// Função para encontrar o próximo ponto no topo da pilha
ponto nextToTop(stack<ponto> &S)
{
	ponto p = S.top();
	S.pop();
	ponto res = S.top();
	S.push(p);
	return res;
}

// Função para trocar dois pontos
void swap(ponto &p1, ponto &p2)
{
	ponto temp = p1;
	p1 = p2;
	p2 = temp;
}

// Função para retornar o quadrado da distância entre dois pontos
int distSq(ponto p1, ponto p2)
{
	return (p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y);
}

// Função para calcular a orientação de três pontos
int orientation(ponto p, ponto q, ponto r)
{
	int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
	if (val == 0) return 0;  // colinear
	return (val > 0) ? 1 : 2; // horário ou anti-horário
}

// Função de comparação para ordenar os pontos com relação ao primeiro ponto
int compare(const void *vp1, const void *vp2)
{
	ponto *p1 = (ponto *)vp1;
	ponto *p2 = (ponto *)vp2;
	int o = orientation(p0, *p1, *p2);
	if (o == 0)
		return (distSq(p0, *p2) >= distSq(p0, *p1)) ? -1 : 1;
	return (o == 2) ? -1 : 1;
}

// Função para encontrar o fecho convexo de um conjunto de pontos
void graham_scan(ponto points[], int n)
{
	if (n < 3)
	{
		cout << "Os pokémons não formam um polígono" << endl << endl;
		return;
	}

	int ymin = points[0].y, min = 0;
	for (int i = 1; i < n; i++)
	{
		int y = points[i].y;
		if ((y < ymin) || (ymin == y && points[i].x < points[min].x))
			ymin = points[i].y, min = i;
	}

	swap(points[0], points[min]);
	p0 = points[0];
	qsort(&points[1], n - 1, sizeof(ponto), compare);

	int m = 1;
	for (int i = 1; i < n; i++)
	{
		while (i < n - 1 && orientation(p0, points[i], points[i + 1]) == 0)
			i++;
		points[m] = points[i];
		m++;
	}

	if (m < 3)
	{
		cout << "Os pokémons não formam um polígono" << endl << endl;
		return;
	}

	stack<ponto> S;
	S.push(points[0]);
	S.push(points[1]);
	S.push(points[2]);

	for (int i = 3; i < m; i++)
	{
		while (S.size() > 1 && orientation(nextToTop(S), S.top(), points[i]) != 2)
			S.pop();
		S.push(points[i]);
	}

	double perimetro = 0;
	ponto aux2;
	ponto inicio = S.top();

	// Now stack has the output points, print contents of stack
	while (!S.empty())
	{
		ponto aux = S.top();
		S.pop();
		if(!S.empty())
		{
			aux2 = S.top();
			perimetro += sqrt(distSq(aux, aux2));
		}
	}

	perimetro += sqrt(distSq(inicio, aux2));

	cout << fixed << setprecision(4) << "Perímetro mínimo que engloba todos os Pokémons dentro do raio de 100 metros: ";
	cout << perimetro << endl;
	cout << endl;
}
int main()
{
	// Define o idioma português para a saída
	setlocale(LC_ALL, "Portuguese");

	// variáveis n (número), p (peso), x (primeira cidade), y (segunda cidade), c (deseja continuar colocando os nós), np (numeros de pokemon), name (nome do poquemon procurado), tamanho (guarda a posição que vai adicionar as cidades), leitura (guarda o numero de cidades), existe (guarda as cidades que tem centro pokemon), menor (int max), leitornp  (guarda o numero de pokemon), tamanhonp (guarda a posição que vai adicionar as pokemons)
	int n = 0, p = 0, x = 0, y = 0, c = 1, np = 0, leitura = 0, tamanho = 0, menor = INT_MAX, leitornp = 0, tamanhonp = 0;
	bool existe[12] = {false};
	int menu; // menu(para o switch case)
	string name;//variavel tipo string para pesquisar o nome do pokemon
	int r = 1;//variável para se gostaria de repetir toda a operação do switch case
	bool me = false;
	Cidade cidade[12];
	pokemon poke[151];
	list<edge> adj[12];//lista adj para cidades
	treenodeptr arvore = NULL;
	treenodeptr tipo = NULL;
	treenodeptr pokedista;
	//se r for igual a zero, desejou-se encerrar toda a operação do switch case
	while(r != 0)
	{
		cout << "1 - colocar o número de cidades e cadastrar as cidades" << endl;
		cout << "2 - fazer a conexão entre as cidades" << endl;
		cout << "3 - mostrar as informações das cidades" << endl;
		cout << "4 - encontrar o menor caminho" << endl;
		cout << "5 - adicionar os pokemons" << endl;
		cout << "6 - localizar pokemons num raio de 100 metros e cálculo do perímetro" << endl;
		cout << "7 - mostrar as informações dos pokemons" << endl;
		cout << "8 - procurar um pokemon por nome" << endl;
		cout << "9 - mostrar todos pokemon por ordem de tipo" << endl;
		cout << "10 - mostrar quantos tipos de determinado pokémon existem " << endl;
		cout << "11 - remover um pokemon por nome" << endl;
		cout << "12 - mostrar todas as informações: " << endl;
		cout << "Digite a opção que deseja: ";

		cin >> menu;
		system("cls");//limpa a tela
		switch(menu)//menu com as funções desejadas
		{
		case 1://caso para colocar o número de cidades e cadastrar as cidades
			// entrada do número de cidades
			cout << "Número de cidades: ";
			cin >> n;//entrada do numero de cidade
			while(n <= 0)
			{
				cout << "Numero Inválido" << endl;
				cout << "Numero igual a 0 ou menor" << endl;
				cout << "Número de pokemons: ";
				cin >> n;
			}
			leitura = leitura + n;
			for (int i = tamanho; i < leitura; i++)
			{
				cout << endl;
				cout << "Código da cidade: ";
				cin >> cidade[i].code;//entrada do codigo da cidade
				if(i != 0)
					for(int j = 0; j < i; j++)
					{
						if(cidade[i].code == cidade[j].code)
						{
							cout << "codigo repetido" << endl << "insira o codigo da cidade: ";
							cin >> cidade[i].code;
							j = 0;
						}
					}
				cout << "Nome da cidade: ";
				getline(cin >> ws, cidade[i].nome);//entrada com o nome da cidade
				cout << "Tem centro Pokémon? (1 para sim, 0 para não): ";
				cin >> cidade[i].centro_pokemon;//entrada para caso tenha ou não centro pokemon
				if(cidade[i].centro_pokemon == 1)
					existe[i] = cidade[i].code;
				cout << "Já esteve na cidade? (1 para sim, 0 para não): ";
				cin >> cidade[i].esteve;//entrada para caso tenha estado na cidade
			}
			cout << endl;
			cout << "Deseja realizar mais alguma operação no programa? (1 pra sim e 0 pra não): ";
			cin >> r;//entrada para caso deseje realizar mais ações
			while(r < 0 || r > 1)//caso coloque um numero diferente de 0 ou 1 vai refazer a pergunta de mais ações
			{
				cout << "Deseja realizar mais alguma operação no programa? (1 pra sim e 0 pra não): ";
				cin >> r;
			}
			tamanho = leitura;
			cout << endl;
			system("cls");
			break;

		case 2://caso para fazer a conexão entre as cidades
			if(leitura == 0)//caso essas variaveis tiverem valor 0 vai exibir a mensagem de nenhum dado cadastrado
			{
				cout << endl;
				cout << "Nenhum dado cadastrado, por favor digite 1 para ir para o menu ou 0 para sair: ";
				cin >> r;
				while(r < 0 || r > 1)//caso de qualquer numero diferente de 0 ou 1 vai apontar erro
				{
					cout << endl;
					cout << "Nenhum dado cadastrado, por favor digite 1 para ir para o menu ou 0 para sair: ";
					cin >> r;
				}
			}
			else//caso dos dados inseridos
			{
				//fazendo a conexão das cidades e guardando na lista de adjacências
				while(c != 0)
				{
					cout << "Os codigos são: ";
					for (int i = 0; i < leitura; i++)
					{
						if(cidade[i].code < 10)
							cout << "00" << cidade[i].code << " ";//saída do código da cidade
						else if(cidade[i].code < 100)
							cout << "0" << cidade[i].code << " "; //saída do código da cidade
						else
							cout << "" << cidade[i].code << " "; //saída do código da cidade
					}
					cout << endl;
					cout << "Digite o código da Cidade de partida: ";
					cin >> x; //entrada com o codigo da cidade 1
					cout << "Digite o código da Cidade de destino: ";
					cin >> y; //entrada com o codigo da cidade 2
					cout << "Digite o peso da conexão entre as cidades: ";
					cin >> p;//peso das conexões entre as cidades
					adj[x - 1].push_back( {y - 1, p}); //cria um caminho de x-1 a y-1
					adj[y - 1].push_back( {x - 1, p}); //cria um caminho de y-1 a x-1
					cout << endl;
					cout << "Deseja continuar fazendo conexões entre as cidades? (1 para sim, 0 para não): ";
					cin >> c;//entrada para continuar fazendo conexões
					while(c > 1 || c < 0)
					{
						cout << "codigo inválido" << endl << "Deseja continuar fazendo conexões entre as cidades? (1 para sim, 0 para não): ";
						cin >> c;
					}
					cout << endl;
				}
				cout << "Deseja realizar mais alguma operação no programa? (1 pra sim e 0 pra não): ";
				cin >> r;
				cout << endl;
				c = -1;
				while(r < 0 || r > 1)//caso de qualquer numero diferente de 0 ou 1 vai apontar erro
				{
					cout << "Deseja realizar mais alguma operação no programa? (1 pra sim e 0 pra não): ";
					cin >> r;
					cout << endl;
				}

			}
			system("cls");
			break;

		case 3://caso para mostrar as informações das cidades
			if(leitura == 0)//caso essas variaveis tiverem valor 0 vai exibir a mensagem de nenhum dado cadastrado
			{
				cout << endl;
				cout << "Nenhum dado cadastrado, por favor digite 1 para ir para o menu ou 0 para sair: ";
				cin >> r;
				while(r < 0 || r > 1)//caso de qualquer numero diferente de 0 ou 1 vai apontar erro
				{
					cout << endl;
					cout << "Nenhum dado cadastrado, por favor digite 1 para ir para o menu ou 0 para sair: ";
					cin >> r;
				}
				system("cls");
			}
			else
			{
				//saída dos dados de cada cidade cadastrada na struct
				for (int i = 0; i < leitura; i++)
				{
					cout << endl;
					if(cidade[i].code < 10)
						cout << "Codigo da cidade: 00" << cidade[i].code << endl;//saída do código da cidade
					else if(cidade[i].code < 100)
						cout << "Codigo da cidade: 0" << cidade[i].code << endl;//saída do código da cidade
					else
						cout << "Codigo da cidade: " << cidade[i].code << endl;//saída do código da cidade
					cout << "Nome da cidade: " << cidade[i].nome << endl;//saída do nome da cidade
					if(cidade[i].centro_pokemon == 1)
					{
						cout << "Tem centro pokemon" << endl;
					}
					else
					{
						cout << "Não tem centro pokemon" << endl;//saída se a cidade tem centro Pokémon ou não
					}
					if(cidade[i].esteve == 1)
					{
						cout << "Já esteve na cidade" << endl;
					}
					else
					{
						cout << "Não esteve na cidade" << endl;//saída se a cidade tem centro Pokémon ou não
					}
				}
				cout << endl;
				cout << "Deseja realizar mais alguma operação no programa? (1 pra sim e 0 pra não): ";
				cin >> r;
				while(r < 0 || r > 1)//caso de qualquer numero diferente de 0 ou 1 vai apontar erro
				{
					cout << "Comando invalido" << endl;
					cout << "Deseja realizar mais alguma operação no programa? (1 pra sim e 0 pra não): ";
					cin >> r;
				}
				cout << endl;
			}
			system("cls");
			break;

		case 4:
			if (n == 0 && p == 0 && x == 0 && y == 0)
			{
				cout << "Nenhum dado cadastrado, por favor digite 1 para ir para o menu ou 0 para sair: ";
				cin >> r;
				cout << endl;
				while (r < 0 || r > 1)
				{
					cout << "Nenhum dado cadastrado, por favor digite 1 para ir para o menu ou 0 para sair: ";
					cin >> r;
					cout << endl;
				}
				system("cls");
			}
			else
			{
				cout << "Os códigos são: ";
				for (int i = 0; i < leitura; i++)
				{
					if (cidade[i].code < 10)
						cout << "00" << cidade[i].code << " ";
					else if (cidade[i].code < 100)
						cout << "0" << cidade[i].code << " ";
					else
						cout << cidade[i].code << " ";
				}
				cout << endl;

				cout << "Digite o código da cidade de origem: ";
				cin >> x;

				// Arrays para armazenar distâncias e pais
				int distance[n]; // Array para armazenar a distância mínima do vértice de origem para cada vértice
				int parent[n];   // Array para armazenar o vértice pai de cada vértice no menor caminho
				int path[1000];  // Array para armazenar o menor caminho
				int size;        // Variável para armazenar o tamanho do caminho

				// Calcular o menor caminho usando o algoritmo de Dijkstra
				shortest_path_dijkstra(adj, n, x - 1, distance, parent);

				// Encontra o centro Pokémon mais próximo
				int centroPokemonMaisProximo = -1; // Variável para armazenar o índice do centro Pokémon mais próximo
				int menorDistancia = INT_MAX;      // Variável para armazenar a menor distância até o centro Pokémon mais próximo

				for (int i = 0; i < n; ++i)
				{
					// Verifica se o vértice é um centro Pokémon e se a distância é menor do que a menor distância atual
					if (existe[i] && distance[i] != INT_MAX && distance[i] < menorDistancia)
					{
						centroPokemonMaisProximo = i;
						menorDistancia = distance[i];
					}
				}

				// Imprime o menor caminho para o centro Pokémon mais próximo, se existir
				if (centroPokemonMaisProximo != -1)
				{
					cout << "Menor caminho para o centro Pokémon mais próximo (Centro Pokémon " << centroPokemonMaisProximo + 1 << "): Caminho = ";
					int v = centroPokemonMaisProximo;

					size = 0;  // Inicializa o tamanho do caminho como 0
					while (v != -1)
					{
						path[size++] = v;    // Adiciona o vértice ao caminho
						v = parent[v];        // Move para o próximo vértice pai no caminho
					}

					// Imprime o caminho da origem ao destino
					for (int i = size - 1; i >= 0; --i)
					{
						cout << path[i] + 1;  // Adiciona 1 porque os vértices são indexados a partir de 0
						if (i != 0) cout << " -> ";  // Se não for o último vértice, imprime a seta
					}
					cout << ". Distância: " << menorDistancia << endl; // Imprime a distância total

				}
				else
				{
					// Se não houver nenhum centro Pokémon alcançável, exibe uma mensagem indicando isso
					cout << "Nenhum centro Pokémon alcançável a partir do vértice " << x << "." << endl;
				}

				menor = INT_MAX;
				cout << endl;
				cout << "Deseja realizar mais alguma operação no programa? (1 para sim e 0 para não): ";
				cin >> r;
				while (r < 0 || r > 1)
				{
					cout << "Deseja realizar mais alguma operação no programa? (1 para sim e 0 para não): ";
					cin >> r;
				}

				cout << endl;
				system("cls");
			}
			break;

		case 5://caso para adicionar os pokemons
			// entrada do número de pokemons
			cout << "Número de pokemons: ";
			cin >> np;
			while(np <= 0)
			{
				cout << "Numero Inválido" << endl;
				cout << "Numero igual a 0 ou menor" << endl;
				cout << "Número de pokemons: ";
				cin >> np;
			}
			leitornp = leitornp + np;
			cout << endl;
			//repetição para pegar os dados dos pokemons (código, nome, tipo1 e tipo2)
			for (int i = tamanhonp; i < leitornp; i++)
			{
				cout << "Codigo do pokemon: ";
				cin >> poke[i].code;//entrada com o codigo dos pokemons
				if(i != 0 && tamanhonp != 0)
					for(int j = 0; j < leitornp; j++)
					{
						if(poke[i].code == existe[j])
						{
							cout << "codigo repetido" << endl << "insira o codigo do Pokemon: ";
							cin >> poke[i].code;
							j = -1;
						}
					}
				existe[i] = poke[i].code;
				tamanhonp++;
				cout << "Nome do pokemon: ";
				cin.ignore();
				cin >> poke[i].nome;//entrada com nome dos pokemons
				cout << "1 - para água" << endl;
				cout << "2 - para dragão" << endl;
				cout << "3 - para elétrico" << endl;
				cout << "4 - para fada" << endl;
				cout << "5 - para fantasma" << endl;
				cout << "6 - para fogo" << endl;
				cout << "7 - para gelo" << endl;
				cout << "8 - para grama" << endl;
				cout << "9 - para insento" << endl;
				cout << "10 - para lutador" << endl;
				cout << "11 - para metal" << endl;
				cout << "12 - para normal" << endl;
				cout << "13 - para psíquico" << endl;
				cout << "14 - para rocha" << endl;
				cout << "15 - para sombrio" << endl;
				cout << "16 - para terra" << endl;
				cout << "17 - para veneno" << endl;
				cout << "18 - para voador" << endl;
				cout << "Qual é o primeiro tipo dele : ";
				cin >> poke[i].tipo1;//entrada com o primeiro tipo do pokemon
				cout << "1 - para água" << endl;
				cout << "2 - para dragão" << endl;
				cout << "3 - para elétrico" << endl;
				cout << "4 - para fada" << endl;
				cout << "5 - para fantasma" << endl;
				cout << "6 - para fogo" << endl;
				cout << "7 - para gelo" << endl;
				cout << "8 - para grama" << endl;
				cout << "9 - para insento" << endl;
				cout << "10 - para lutador" << endl;
				cout << "11 - para metal" << endl;
				cout << "12 - para normal" << endl;
				cout << "13 - para psíquico" << endl;
				cout << "14 - para rocha" << endl;
				cout << "15 - para sombrio" << endl;
				cout << "16 - para terra" << endl;
				cout << "17 - para veneno" << endl;
				cout << "18 - para voador" << endl;
				cout << "19 - para nenhum ou mesmo numero do tipo 1" << endl;
				cout << "Qual é o segundo tipo dele : ";
				cin >> poke[i].tipo2;//entrada com o segundo tipo do pokemon
				poke[i].index = i;
				cout << "Digite as coordenadas do Pokémon (x, y): ";
				cin >> poke[i].local.x >> poke[i].local.y;
				tInsere (arvore, poke[i]);//função para inserir as informações na árvore
				tInseretipo(tipo, poke[i]);
				cout << endl;
			}
			tamanhonp = leitornp;
			cout << "Deseja realizar mais alguma operação no programa? (1 pra sim e 0 pra não): ";
			cin >> r;
			while(r < 0 || r > 1)//caso de qualquer numero diferente de 0 ou 1 vai apontar erro
			{
				cout << "Deseja realizar mais alguma operação no programa? (1 pra sim e 0 pra não): ";
				cin >> r;
			}

			cout << endl;
			system("cls");
			break;
		case 6:
		{
			if(leitornp == 0)//caso numero de pokemons seja 0
			{
				cout << "Nenhum dado cadastrado, por favor digite 1 para ir para o menu ou 0 para sair: ";
				cin >> r;
				while(r < 0 || r > 1)//caso de qualquer numero diferente de 0 ou 1 vai apontar erro
				{
					cout << "Nenhum dado cadastrado, por favor digite 1 para ir para o menu ou 0 para sair: ";
					cin >> r;
				}
				system("cls");
			}
			else
			{

				ponto posicaoAtual;
				ponto pontosDentroRaio[10000];

				cout << "Digite a posição atual da Pokédex (x y): ";
				cin >> posicaoAtual.x >> posicaoAtual.y;//entrada com as posições x, y

				// Raio de 100 metros
				double raio = 100.0;
				int contador = 0;
				cout << endl;
				// Verificar quantos Pokémon estão dentro do raio de 100 metros
				for (int i = 0; i < leitornp; i++)
				{
					double distancia = calcularDistancia(posicaoAtual, poke[i].local);//calculo da distancia

					if (distancia <= raio)
					{
						pontosDentroRaio[contador++] = poke[i].local;
					}
				}
				if(leitornp != 0)
				{
					// Imprimir o resultado
					cout << "Número de Pokémon encontrados em um raio de 100 metros: " << contador << endl;
					cout << endl;
				}
				if (contador > 0)//caso tenha pokemons em um raio de 100 metros
				{
					graham_scan(pontosDentroRaio, contador);
				}
				else//caso nao tenha pokemons no raio de 100
				{
					cout << "Não há Pokémon dentro do raio de 100 metros da localização atual da Pokédex." << endl;
					cout << endl << endl;
				}

				cout << "Deseja realizar mais alguma operação no programa? (1 pra sim e 0 pra não): ";
				cin >> r;
				while(r < 0 || r > 1)//caso de qualquer numero diferente de 0 ou 1 vai apontar erro
				{
					cout << "Deseja realizar mais alguma operação no programa? (1 pra sim e 0 pra não): ";
					cin >> r;
				}
			}
			cout << endl;
			system("cls");
			break;
		}

		case 7://caso para mostrar as informações dos pokemons
		{

			if(leitornp == 0)//caso numero de pokemons seja 0
			{
				cout << "Nenhum dado cadastrado, por favor digite 1 para ir para o menu ou 0 para sair: ";
				cin >> r;
				while(r < 0 || r > 1)//caso de qualquer numero diferente de 0 ou 1 vai apontar erro
				{
					cout << "Nenhum dado cadastrado, por favor digite 1 para ir para o menu ou 0 para sair: ";
					cin >> r;
				}
				system("cls");
			}
			else
			{

				cout << endl;
				emOrdem(arvore);
				cout << endl;

			}

			cout << "Deseja realizar mais alguma operação no programa? (1 pra sim e 0 pra não): ";
			cin >> r;
			while(r < 0 || r > 1)//caso de qualquer numero diferente de 0 ou 1 vai apontar erro
			{
				cout << "Deseja realizar mais alguma operação no programa? (1 pra sim e 0 pra não): ";
				cin >> r;
			}

			cout << endl;
			system("cls");
		}
		break;
		case 8://caso para procurar um pokemon por nome
		{
			if(leitornp == 0)//caso numero de pokemons seja 0
			{
				cout << "Nenhum dado cadastrado, por favor digite 1 para ir para o menu ou 0 para sair: ";
				cin >> r;
				while(r < 0 || r > 1)//caso de qualquer numero diferente de 0 ou 1 vai apontar erro
				{
					cout << "Nenhum dado cadastrado, por favor digite 1 para ir para o menu ou 0 para sair: ";
					cin >> r;
				}
				system("cls");
			}
			else
			{
				cout << "Qual é o nome do pokemon procurado: ";
				getline(cin >> ws, name);//entrada do nome buscado
				treenodeptr res = tPesq(arvore, name);//comparação da pesquisa
				cout << endl;
				if(res == NULL)//caso não ache o pokemon
					cout << "Pokemon nao encontrado" << endl;
				else//caso ache o pokemon
				{

					cout << "Pokemon encontrado" << endl << endl;
					printPOKEMON(res->info);
				}
				cout << endl;
				cout << "Deseja realizar mais alguma operação no programa? (1 pra sim e 0 pra não): ";
				cin >> r;
				while(r < 0 || r > 1)//caso de qualquer numero diferente de 0 ou 1 vai apontar erro
				{
					cout << "Deseja realizar mais alguma operação no programa? (1 pra sim e 0 pra não): ";
					cin >> r;
				}

				cout << endl;
				system("cls");
			}
		}
		break;
		case 9://caso para procurar um pokemon por nome
		{
			if(leitornp == 0)//caso numero de pokemons seja 0
			{
				cout << "Nenhum dado cadastrado, por favor digite 1 para ir para o menu ou 0 para sair: ";
				cin >> r;
				while(r < 0 || r > 1)//caso de qualquer numero diferente de 0 ou 1 vai apontar erro
				{
					cout << "Nenhum dado cadastrado, por favor digite 1 para ir para o menu ou 0 para sair: ";
					cin >> r;
				}
				system("cls");
			}
			else
			{
				cout << "Pokemon encontrado" << endl << endl;
				emOrdem(tipo);
				cout << endl;
				cout << "Deseja realizar mais alguma operação no programa? (1 pra sim e 0 pra não): ";
				cin >> r;
				while(r < 0 || r > 1)//caso de qualquer numero diferente de 0 ou 1 vai apontar erro
				{
					cout << "Deseja realizar mais alguma operação no programa? (1 pra sim e 0 pra não): ";
					cin >> r;
				}

				cout << endl;
				system("cls");
			}
		}
		break;
		case 10://caso para saber quantos pokemons tem de determinado tipo
		{
			if(leitornp == 0)//caso numero de pokemons seja 0
			{
				cout << "Nenhum dado cadastrado, por favor digite 1 para ir para o menu ou 0 para sair: ";
				cin >> r;
				while(r < 0 || r > 1)//caso de qualquer numero diferente de 0 ou 1 vai apontar erro
				{
					cout << "Nenhum dado cadastrado, por favor digite 1 para ir para o menu ou 0 para sair: ";
					cin >> r;
				}
				system("cls");
			}
			else//caso exista pokemons registrados
			{
				cout << "1 - para água" << endl;
				cout << "2 - para dragão" << endl;
				cout << "3 - para elétrico" << endl;
				cout << "4 - para fada" << endl;
				cout << "5 - para fantasma" << endl;
				cout << "6 - para fogo" << endl;
				cout << "7 - para gelo" << endl;
				cout << "8 - para grama" << endl;
				cout << "9 - para insento" << endl;
				cout << "10 - para lutador" << endl;
				cout << "11 - para metal" << endl;
				cout << "12 - para normal" << endl;
				cout << "13 - para psíquico" << endl;
				cout << "14 - para rocha" << endl;
				cout << "15 - para sombrio" << endl;
				cout << "16 - para terra" << endl;
				cout << "17 - para veneno" << endl;
				cout << "18 - para voador" << endl;
				cout << "Qual é o tipo do pokemon que se deseja saber a quantidade: ";
				cin >> code;//entrada do tipo buscado

				treenodeptr res = tPesqtipo(arvore, code);//função que busca o tipo

				cout << endl;
				if(res == NULL)//caso não ache o pokemon
					cout << "Tipo não encontrado" << endl;
				else//caso ache o pokemon
				{
					cout << "Tipo encontrado" << endl << endl;
					emOrdem(arvore);
					system("cls");//função de limpar tela
					cout << "Quantidade do ";
					switch(code)
					{
					case 1:
						cout << "Tipo água: " << cont << endl; //saida com o numero de pokemons;
						break;
					case 2:
						cout << "Tipo dragão: " << cont << endl; //saida com o numero de pokemons;
						break;
					case 3:
						cout << "Tipo elétrico: " << cont << endl; //saida com o numero de pokemons;
						break;
					case 4:
						cout << "Tipo fada: " << cont << endl; //saida com o numero de pokemons;
						break;
					case 5:
						cout << "Tipo fantasma: " << cont << endl; //saida com o numero de pokemons;
						break;
					case 6:
						cout << "Tipo fogo: " << cont << endl; //saida com o numero de pokemons;
						break;
					case 7:
						cout << "Tipo gelo: " << cont << endl; //saida com o numero de pokemons;
						break;
					case 8:
						cout << "Tipo grama: " << cont << endl; //saida com o numero de pokemons;
						break;
					case 9:
						cout << "Tipo insento: " << cont << endl; //saida com o numero de pokemons;
						break;
					case 10:
						cout << "Tipo lutadore: " << cont << endl; //saida com o numero de pokemons;
						break;
					case 11:
						cout << "Tipo metal: " << cont << endl; //saida com o numero de pokemons;
						break;
					case 12:
						cout << "Tipo normal: " << cont << endl; //saida com o numero de pokemons;
						break;
					case 13:
						cout << "Tipo psíquico: " << cont << endl; //saida com o numero de pokemons;
						break;
					case 14:
						cout << "Tipo rocha: " << cont << endl; //saida com o numero de pokemons;
						break;
					case 15:
						cout << "Tipo sombrio: " << cont << endl; //saida com o numero de pokemons;
						break;
					case 16:
						cout << "Tipo terra: " << cont << endl; //saida com o numero de pokemons;
						break;
					case 17:
						cout << "Tipo veneno: " << cont << endl; //saida com o numero de pokemons;
						break;
					case 18:
						cout << "Tipo voador: " << cont << endl; //saida com o numero de pokemons;
						break;
					default:
						cout << "erro";
						break;
					}
					cout << endl << "De " << leitornp << " Pokemons cadastrados" << endl;
					cont = 0;//zera a variavel contador
					cout << endl;
					cout << "Deseja realizar mais alguma operação no programa? (1 pra sim e 0 pra não): ";
					cin >> r;//caso o usuario realize mais alguma ação
					while(r < 0 || r > 1)//caso de qualquer numero diferente de 0 ou 1 vai apontar erro
					{
						cout << "Deseja realizar mais alguma operação no programa? (1 pra sim e 0 pra não): ";
						cin >> r;
					}
				}
				system("cls");//função de limpar a tela
			}
		}
		break;
		case 11://caso queira deletar um pokemon por seu nome
		{
			if(leitornp == 0)//caso numero de pokemons seja 0
			{
				cout << "Nenhum dado cadastrado, por favor digite 1 para ir para o menu ou 0 para sair: ";
				cin >> r;
				while(r < 0 || r > 1)//caso de qualquer numero diferente de 0 ou 1 vai apontar erro
				{
					cout << "Nenhum dado cadastrado, por favor digite 1 para ir para o menu ou 0 para sair: ";
					cin >> r;
				}
				system("cls");
			}
			else//caso exista pokemons registrados
			{
				cout << "Digite o Nome do pokemon que deseja deletar: ";
				cin >> name;//entrada com o nome do pokemon desejado
				cout << endl;

				int removido = tRemove(arvore, name);//função para a remoção de um pokemon


				if(removido != -1)//caso o pokemon seja removido
				{
					cout << "Pokemon removido com sucesso" << endl;
					for(int i = 0; i < leitornp - 1 - removido; i++)
						poke[removido + i] = poke[removido + i + 1];
				}
				else//caso não consiga remover
				{
					cout << "Pokemon não removido" << endl;
				}
				removido = tRemove(tipo, name);
				cout << endl;
				leitornp--;
				tamanhonp--;
				cout << "Deseja realizar mais alguma operação no programa? (1 pra sim e 0 pra não): ";
				cin >> r;//caso queira realizar mais alguma ação
				while(r < 0 || r > 1)//caso de qualquer numero diferente de 0 ou 1 vai apontar erro
				{
					cout << "Deseja realizar mais alguma operação no programa? (1 pra sim e 0 pra não): ";
					cin >> r;
				}
				for(int i = 0; i < leitornp; i++)
				{
					treenodeptr rec = tPesqtipo(arvore, existe[i]);
					if(rec == NULL)
					{
						existe[i] = 0;
					}
				}
				cout << endl;
				system("cls");//função de limpar a tela
			}
		}
		break;
		case 12://caso para mostrar todas as informações
			if(leitura == 0 && leitornp == 0)//caso essas variaveis tiverem valor 0 vai exibir a mensagem de nenhum dado cadastrado
			{
				cout << "Nenhum dado cadastrado, por favor digite 1 para ir para o menu ou 0 para sair: ";
				cin >> r;
				while(r < 0 || r > 1)//caso de qualquer numero diferente de 0 ou 1 vai apontar erro
				{
					cout << "Nenhum dado cadastrado, por favor digite 1 para ir para o menu ou 0 para sair: ";
					cin >> r;
				}
				system("cls");
			}
			else
			{
				cout << "Cidades" << endl << endl;
				if(leitura != 0)
				{
					//saída dos dados de cada cidade cadastrada na struct
					for (int i = 0; i < leitura; i++)
					{
						if(cidade[i].code < 10)
							cout << "Codigo da cidade: 00" << cidade[i].code << endl;//saída do código da cidade
						else if(cidade[i].code < 100)
							cout << "Codigo da cidade: 0" << cidade[i].code << endl;//saída do código da cidade
						else
							cout << "Codigo da cidade: " << cidade[i].code << endl;//saída do código da cidade
						cout << "Nome da cidade: " << cidade[i].nome << endl;//saída do nome da cidade
						cout << "Tem centro pokemon(0 nao e 1 sim): " << cidade[i].centro_pokemon << endl;//saída se a cidade tem centro Pokémon ou não
						cout << "Já esteve na cidade(0 nao e 1 sim): " << cidade[i].esteve << endl;//saída se a pessoa já esteve na cidade ou não

						//for para a saída dos códigos e pesos de cada cidade

						cout << endl;
					}
				}
				else
				{
					cout << "Não existem cidades cadastradas" << endl << endl;
				}
				cout << "Pokemons" << endl << endl;
				if(leitornp != 0)
				{
					emOrdem(arvore);
					cout << endl;
				}
				else
				{
					cout << "Não existem pokemon cadastradas" << endl << endl;
				}
				//saída dos dados de cada pokemon cadastrada na struct
			}
			cout << "Deseja realizar mais alguma operação no programa? (1 pra sim e 0 pra não): ";
			cin >> r;//caso queira realizar mais alguma ação
			while(r < 0 || r > 1)//caso de qualquer numero diferente de 0 ou 1 vai apontar erro
			{
				cout << "Deseja realizar mais alguma operação no programa? (1 pra sim e 0 pra não): ";
				cin >> r;
			}
			system("cls");
			break;
		default://caso selecione uma função inexistente
			cout << "Comando inválido" << endl;

			cout << "Digite se deseja tentar colocar as informações novamente (1 para sim e 0 para não): ";
			cin >> r;//caso queira realizar outra função
			system("cls");//função de limpar a tela
			break;
		}
	}

	return 0;
}
