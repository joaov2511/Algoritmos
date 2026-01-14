#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    // Alocando um vetor de tamanho N
    int vetor[N];

    // Lendo os elementos e inserindo-os no vetor
    for (int i = 0; i < N; ++i) {
        cin >> vetor[i];
    }

    // Encontrando o maior elemento do vetor usando um ponteiro
    int maior = vetor[0];
    for (int i = 1; i < N; ++i) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    // Mostrando o maior elemento do vetor
    cout << maior << endl;

    return 0;
}