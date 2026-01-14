#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, w;
    Edge(int u, int v, int w) : u(u), v(v), w(w) {}
    bool operator<(Edge const& other) {
        return w < other.w;
    }
};

vector<int> parent, node_rank;

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void make_set(int v) {
    parent[v] = v;
    node_rank[v] = 0;
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (node_rank[a] < node_rank[b])
            swap(a, b);
        parent[b] = a;
        if (node_rank[a] == node_rank[b])
            node_rank[a]++;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<Edge> edges;
    parent.resize(n + 1);
    node_rank.resize(n + 1);
    for (int i = 1; i <= n; i++)
        make_set(i);
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back(Edge(u, v, w));
    }
    sort(edges.begin(), edges.end());
    int cost = 0;
    for (Edge e : edges) {
        if (find_set(e.u) != find_set(e.v)) {
            cost += e.w;
            union_sets(e.u, e.v);
        }
    }
    cout << cost << "\n";
    return 0;
}
