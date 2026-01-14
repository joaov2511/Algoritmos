#include<iostream>
#include <iomanip>
#include <vector>
#include <list>
using namespace std;

struct Edge {
    int v, w;
    Edge(int v, int w) : v(v), w(w) {}
};

int main() {
    int n, isDirected;
    cin >> n >> isDirected;
    vector<vector<Edge>> adj(n);
    while (true) {
        int u, v, w;
        cin >> u >> v >> w;
        if (u == -1 && v == -1 && w == -1)
            break;
        if (u >= n || v >= n || u < 0 || v < 0) {
            cout << "Erro: vertices fora de limites.\n";
            continue;
        }
        adj[u].push_back(Edge(v, w));
        if (!isDirected)
            adj[v].push_back(Edge(u, w));
    }
    for (int u = 0; u < n; u++) {
        for (Edge e : adj[u]) {
            cout << u << " " << e.v << " " << e.w << "\n";
        }
    }
    return 0;
}
