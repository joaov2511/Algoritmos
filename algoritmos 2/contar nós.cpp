#include <iostream>
#include <list>

using namespace std;

// Função para contar o número de nós na lista
int contar(const list<int>& lista) {
    return lista.size();
}

int main() {
    list<int> lista;

    // Leitura dos números e inserção na lista
    int numero;
    do {
        cin >> numero;
        if (numero != 0) {
            lista.push_back(numero);
        }
    } while (numero != 0);

    // Calcula e exibe o número de nós na lista
    int resultadoContagem = contar(lista);
    cout << resultadoContagem << endl;

    return 0;
}
