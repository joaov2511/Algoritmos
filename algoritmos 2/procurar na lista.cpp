#include <iostream>
#include <list>

using namespace std;

bool encontrar(list<int>& lista, int x) {
    // Percorre a lista para verificar se o número está presente
    for (const auto& elemento : lista) {
        if (elemento == x) {
            return true; // Encontrou o número na lista
        }
    }
    return false; // Não encontrou o número na lista
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

    // Leitura do número a ser pesquisado
    int numeroPesquisado;
    cout << "Digite o número a ser pesquisado: ";
    cin >> numeroPesquisado;

    // Verifica se o número está na lista e exibe a mensagem correspondente
    if (encontrar(lista, numeroPesquisado)) {
        cout << "Encontrado" << endl;
    } else {
        cout << "Nao encontrado" << endl;
    }

    return 0;
}
