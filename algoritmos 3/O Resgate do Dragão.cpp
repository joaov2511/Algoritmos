#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector< vector<int> > adj(N + 1);
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // Remova esta linha se o grafo for direcionado
    }
    int S, D;
    cin >> S >> D;
    vector<int> dist(N + 1, -1);
    queue<int> q;
    dist[S] = 0;
    q.push(S);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int i = 0; i < adj[u].size(); i++) {
            int v = adj[u][i];
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    if (dist[D] == -1) {
        cout << "IMPOSSIVEL\n";
    } else {
        // Adicione 1 ao resultado final porque queremos o número de salas, não o número de corredores
        cout << dist[D] + 1 << "\n";
    }
    return 0;
}
