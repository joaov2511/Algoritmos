#include <iostream>
#include <list>

using namespace std;

// Definição de um nó da lista ligada
struct Node {
    int info;
    Node* next;

    // Construtor
    Node(int value) : info(value), next(nullptr) {}
};

// Função para calcular a soma dos nós na lista
int soma(const list<int>& lista) {
    int soma = 0;
    for (const auto& elemento : lista) {
        soma += elemento;
    }
    return soma;
}

int main() {
    list<int> lista;

    // Leitura dos números e inserção na lista
    int numero;
    cout << "Digite os números (finalize com 0): ";
    do {
        cin >> numero;
        if (numero != 0) {
            lista.push_back(numero);
        }
    } while (numero != 0);

    // Calcula e exibe a soma dos nós da lista
    int resultadoSoma = soma(lista);
    cout << "Soma dos nós da lista: " << resultadoSoma << endl;

    return 0;
}
