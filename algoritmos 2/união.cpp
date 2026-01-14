#include <iostream>
#include <list>

using namespace std;

// Função para criar a lista 3 (união ordenada)
list<int> unirListas(const list<int>& lista1, const list<int>& lista2) {
    list<int> lista3;

    auto it1 = lista1.begin();
    auto it2 = lista2.begin();

    // Percorre ambas as listas até que uma delas esteja no final
    while (it1 != lista1.end() && it2 != lista2.end()) {
        if (*it1 < *it2) {
            lista3.push_back(*it1);
            ++it1;
        } else if (*it2 < *it1) {
            lista3.push_back(*it2);
            ++it2;
        } else {
            // Se os elementos são iguais, adiciona apenas uma vez
            lista3.push_back(*it1);
            ++it1;
            ++it2;
        }
    }

    // Adiciona os elementos restantes da lista 1 (se houver)
    while (it1 != lista1.end()) {
        lista3.push_back(*it1);
        ++it1;
    }

    // Adiciona os elementos restantes da lista 2 (se houver)
    while (it2 != lista2.end()) {
        lista3.push_back(*it2);
        ++it2;
    }

    return lista3;
}

int main() {
    list<int> lista1, lista2;

    // Leitura dos números para a lista 1
    int numero;
    do {
        cin >> numero;
        if (numero != 0) {
            lista1.push_back(numero);
        }
    } while (numero != 0);

    // Leitura dos números para a lista 2
    do {
        cin >> numero;
        if (numero != 0) {
            lista2.push_back(numero);
        }
    } while (numero != 0);

    // Criação da lista 3 (união ordenada)
    list<int> lista3 = unirListas(lista1, lista2);

    // Exibe os elementos da lista 3
    for (const auto& elemento : lista3) {
        cout << elemento << " ";
    }
    cout << endl;

    return 0;
}
