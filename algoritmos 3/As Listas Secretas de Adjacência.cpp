#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    // Lista de adjacência para armazenar as conexões entre as cidades
    vector<vector<int>> adj(N + 1);

    // Leitura das arestas e construção do grafo
    for (int i = 0; i < M; ++i) {
        int A, B;
        cin >> A >> B;
        adj[A].push_back(B);
        adj[B].push_back(A);
    }

    // Percorrendo cada cidade
    for (int i = 1; i <= N; ++i) {
        // Ordenando os índices das cidades conectadas em ordem crescente
        sort(adj[i].begin(), adj[i].end());

        // Imprimindo o número de cidades diretamente conectadas a i e seus índices
        cout << adj[i].size() << " ";
        for (int j = 0; j < adj[i].size(); ++j) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}