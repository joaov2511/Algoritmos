#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <climits>

using namespace std;

typedef pair<int, int> PII;

void dijkstra(vector<PII> adj[], int nVertices, int start, int end) {
    priority_queue<PII, vector<PII>, greater<PII>> pq;
    vector<int> dist(nVertices, INT_MAX);
    vector<int> parent(nVertices, -1);
    vector<bool> inMST(nVertices, false);
    pq.push(make_pair(0, start));
    dist[start] = 0;
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        inMST[u] = true;
        for (auto x : adj[u]) {
            int v = x.first;
            int weight = x.second;
            if (dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
                parent[v] = u;
            }
        }
    }
    vector<int> path;
    for (int v = end; v != -1; v = parent[v])
        path.push_back(v);
    reverse(path.begin(), path.end());
    cout << "Menor caminho:";
    for (int v : path)
        cout << " " << v;
    cout << "\nCusto: " << dist[end];
}

int main() {
    int nVertices, isDirected, start, end;
    cin >> nVertices >> isDirected >> start >> end;
    vector<PII> adj[nVertices];
    while (true) {
        int u, v, w;
        cin >> u >> v >> w;
        if (u == -1 && v == -1 && w == -1)
            break;
        adj[u].push_back(make_pair(v, w));
        if (!isDirected)
            adj[v].push_back(make_pair(u, w));
    }
    dijkstra(adj, nVertices, start, end);
    return 0;
}
