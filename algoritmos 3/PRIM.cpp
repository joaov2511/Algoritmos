#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <climits>

using namespace std;

typedef pair<int, int> PII;

void prim(vector<PII> adj[], int nVertices, int start) {
    priority_queue<PII, vector<PII>, greater<PII>> pq;
    vector<int> key(nVertices, INT_MAX);
    vector<int> parent(nVertices, -1);
    vector<bool> inMST(nVertices, false);
    pq.push(make_pair(0, start));
    key[start] = 0;
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        inMST[u] = true;
        for (auto x : adj[u]) {
            int v = x.first;
            int weight = x.second;
            if (inMST[v] == false && key[v] > weight) {
                key[v] = weight;
                pq.push(make_pair(key[v], v));
                parent[v] = u;
            }
        }
    }
    int totalCost = 0;
    cout << "Arvore Geradora Minima:\n";
    for (int i = 1; i < nVertices; ++i) {
        cout << parent[i] << " " << i << "\n";
        totalCost += key[i];
    }
    cout << "Custo: " << totalCost << "\n";
}

int main() {
    int nVertices, isDirected, start;
    cin >> nVertices >> isDirected >> start;
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
    prim(adj, nVertices, start);
    return 0;
}
