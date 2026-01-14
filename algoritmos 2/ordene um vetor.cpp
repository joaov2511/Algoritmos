#include <iostream>
#include <vector>

using namespace std;

// Função para trocar dois elementos do vetor
void trocar(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Função para encontrar o pivô e particionar o vetor
int particionar(vector<int>& vetor, int inicio, int fim) {
    int pivot = vetor[fim]; // Escolhe o último elemento como pivô
    int i = inicio - 1;      // Índice do menor elemento

    for (int j = inicio; j < fim; ++j) {
        // Se o elemento atual for menor ou igual ao pivô
        if (vetor[j] <= pivot) {
            ++i;
            trocar(vetor[i], vetor[j]);
        }
    }

    trocar(vetor[i + 1], vetor[fim]);
    return i + 1;
}

// Função Quick Sort
void quickSort(vector<int>& vetor, int inicio, int fim) {
    if (inicio < fim) {
        int indicePivo = particionar(vetor, inicio, fim);

        // Recursivamente ordena as sub-listas
        quickSort(vetor, inicio, indicePivo - 1);
        quickSort(vetor, indicePivo + 1, fim);
    }
}

int main() {
    vector<int> vetor;

    // Leitura dos números e inserção no vetor
    int numero;
    do {
        cin >> numero;
        if (numero != -1) {
            vetor.push_back(numero);
        }
    } while (numero != -1);

    // Aplica o Quick Sort para ordenar o vetor
    quickSort(vetor, 0, vetor.size() - 1);

    // Exibe o vetor ordenado
    for (const auto& elemento : vetor) {
        cout << elemento << " ";
    }
    cout << endl;

    return 0;
}
