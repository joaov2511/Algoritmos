#include <iostream>
#include <stack>

int main() {
    std::stack<int> pilha;

    // Leitura e inserção dos valores na pilha
    for (int i = 0; i < 4; ++i) {
        int valor;
        std::cout << "Digite um valor inteiro: ";
        std::cin >> valor;
        pilha.push(valor);
    }

    // Remoção e exibição dos elementos da pilha
    std::cout << "Elementos inseridos na pilha: ";
    while (!pilha.empty()) {
        std::cout << pilha.top() << " ";
        pilha.pop();
    }

    return 0;
}
