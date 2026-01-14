#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    // Inicializando a matriz de adjacência com 0s
    vector<vector<int>> matriz(N, vector<int>(N, 0));

    // Preenchendo a matriz de adjacência com os caminhos fornecidos
    for (int i = 0; i < M; ++i) {
        int A, B;
        cin >> A >> B;
        matriz[A - 1][B - 1] = 1;
        matriz[B - 1][A - 1] = 1; // Considerando que os caminhos são bidirecionais
    }

    // Imprimindo a matriz de adjacência
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}