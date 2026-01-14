#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    // Alocando dinamicamente o vetor de tamanho N
    int *vetor = new int[N];

    // Ponteiro para percorrer o vetor
    int *p = vetor;

    // Lendo os elementos e inserindo-os no vetor usando o ponteiro
    for (int i = 0; i < N; ++i) {
        cin >> *p;
        p++;
    }

    // Resetando o ponteiro para o início do vetor
    p = vetor;

    // Mostrando os elementos do vetor usando o ponteiro
    for (int i = 0; i < N; ++i) {
        cout << *p;
        p++;
        if (i < N - 1) {
            cout << " ";
        }
    }
    cout << endl;

    // Liberando a memória alocada para o vetor
    delete[] vetor;

    return 0;
}