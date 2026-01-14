#include <iostream>
#include <list>
#include <queue>

using namespace std;

// Estrutura para representar uma aresta
struct Aresta {
    int destino;
    int peso;
};

// Função para realizar o percurso em largura (BFS)
void bfs(list<Aresta> adj[], int nVertices, int s) {
    // Vetores para marcar o estado (descoberto, processado) e os pais de cada vértice
    char state[nVertices];
    int pai[nVertices];

    // Inicializando os vetores
    for (int u = 0; u < nVertices; ++u) {
        if (u != s) {
            state[u] = 'u'; // undiscovered
            pai[u] = -1;    // sem pais
        }
    }
    state[s] = 'd'; // discovered
    pai[s] = -1;

    // Fila para a BFS
    queue<int> Q;
    Q.push(s);

    // Realizando a BFS
    while (!Q.empty()) {
        int u = Q.front();
        Q.pop();

        cout << u << endl;

        for (auto it = adj[u].begin(); it != adj[u].end(); ++it) {
            int v = it->destino;

            cout << u << " " << v << endl;

            if (state[v] == 'u') {
                state[v] = 'd';
                pai[v] = u;
                Q.push(v);
            }
        }

        state[u] = 'p'; // processed
    }
}

int main() {
    int nVertices, verticeInicial;
    cin >> nVertices >> verticeInicial;

    list<Aresta> adj[nVertices];

    // Leitura das arestas e construção do grafo
    int origem, destino, peso;
    cin >> origem >> destino >> peso;
    while (origem != -1 && destino != -1 && peso != -1) {
        adj[origem].push_back({destino, peso});
        adj[destino].push_back({origem, peso});
        cin >> origem >> destino >> peso;
    }

    // Realizando o percurso em largura (BFS) a partir do vértice inicial
    bfs(adj, nVertices, verticeInicial);

    return 0;
}