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

    // Calculando a soma dos elementos do vetor
    int soma = 0;
    for (int i = 0; i < N; ++i) {
        soma += vetor[i];
    }

    // Calculando a média
    double media = static_cast<double>(soma) / N;

    // Mostrando a média com 2 casas decimais
    cout.precision(2);
    cout << fixed << media << endl;

    return 0;
}