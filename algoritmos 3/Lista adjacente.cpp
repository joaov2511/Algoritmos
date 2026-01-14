#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <math.h>
#include <list>

using namespace std;

struct no
{
	int v; // vertice adjacente
	int peso; // peso da aresta
};

void cria_aresta(list<no>adj[], int u, int v, int p, int orientado)
{
    no aux;
	aux.v = v;
	aux.peso = p;
	adj[u].push_back(aux);

	if(orientado == 0)
	{
		aux.v = u;
		adj[v].push_back(aux);
	}
}

int main()
{
    list<no>adj[10];
    list<no>::iterator q;
    no aux;
	int n;
	int o;
	int p;
	int x , y;
	
	cin >> n >> o;
	cin >> x >> y >> p;
	
	while(x != -1  && y != -1 && p != -1)
	{
		cria_aresta(adj, x, y, p, o);
		cin >> x >> y >> p;
	}

	for(int i = 0; i < n; i++)
	{
		for(q = adj[i].begin(); q != adj[i].end(); ++q){
		    cout << i << " " << q-> v << " " << q->peso << endl;
		}
	}
	int i = 0;
	while(!adj[i].empty())
	{
		adj[i].pop_front();
		i++;
	}
	return 0;
}