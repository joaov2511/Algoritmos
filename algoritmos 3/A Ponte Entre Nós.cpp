#include<iostream>
#include<vector>

using namespace std;

vector<int> adj[105];
bool visited[105];

void dfs(int node) {
    visited[node] = true;
    for(int i = 0; i < adj[node].size(); i++) {
        int child = adj[node][i];
        if(!visited[child])
            dfs(child);
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    for(int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        adj[A].push_back(B);
        adj[B].push_back(A);
    }
    int X, Y;
    cin >> X >> Y;
    for(int i = 0; i < adj[X].size(); i++) {
        if(adj[X][i] == Y) {
            adj[X].erase(adj[X].begin() + i);
            break;
        }
    }
    for(int i = 0; i < adj[Y].size(); i++) {
        if(adj[Y][i] == X) {
            adj[Y].erase(adj[Y].begin() + i);
            break;
        }
    }
    dfs(X);
    for(int i = 1; i <= N; i++) {
        if(!visited[i])
            cout << i << " ";
    }
    return 0;
}
