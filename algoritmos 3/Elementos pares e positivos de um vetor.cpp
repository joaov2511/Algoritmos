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

    // Variável para armazenar o número de elementos pares e positivos
    int count = 0;

    // Varrendo o vetor usando um ponteiro e determinando o número de elementos pares e positivos
    for (int i = 0; i < N; ++i) {
        if (vetor[i] > 0 && vetor[i] % 2 == 0) {
            count++;
        }
    }

    // Mostrando o número de elementos pares e positivos
    cout << count << endl;

    return 0;
}