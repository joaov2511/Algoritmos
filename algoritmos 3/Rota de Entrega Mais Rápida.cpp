#include <iostream>
#include <vector>
#include <queue>
#include <limits>
using namespace std;

struct Edge {
    int v, t;
    Edge(int v, int t) : v(v), t(t) {}
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<Edge>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v, t;
        cin >> u >> v >> t;
        adj[u].push_back(Edge(v, t));
        adj[v].push_back(Edge(u, t)); // Remova esta linha se o grafo for direcionado
    }
    int A, B;
    cin >> A >> B;
    vector<int> dist(n + 1, numeric_limits<int>::max());
    dist[A] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, A});
    while (!pq.empty()) {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();
        if (d != dist[u])
            continue;
        for (Edge e : adj[u]) {
            if (dist[u] + e.t < dist[e.v]) {
                dist[e.v] = dist[u] + e.t;
                pq.push({dist[e.v], e.v});
            }
        }
    }
    cout << dist[B] << "\n";
    return 0;
}
