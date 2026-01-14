#include <iostream>
#include <vector>

using namespace std;

int buscaBinaria(const vector<int>& vetor, int valor, int inicio, int fim) {
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vetor[meio] == valor) {
            return meio; // Elemento encontrado
        } else if (vetor[meio] < valor) {
            inicio = meio + 1; // Busca na metade superior
        } else {
            fim = meio - 1; // Busca na metade inferior
        }
    }
    return -1; // Elemento não encontrado
}

int main() {
    int N;
    cin >> N;

    vector<int> vetor(N);

    for (int i = 0; i < N; ++i) {
        cin >> vetor[i];
    }

    int valor;
    cin >> valor;

    int posicao = buscaBinaria(vetor, valor, 0, N - 1);

    cout << posicao << endl;

    return 0;
}