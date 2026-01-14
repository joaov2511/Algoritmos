#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> terras;
    int valor;

    // Leitura dos valores das terras
    cout << "Digite os valores dos artefatos mágicos em cada terra (separados por espaço): ";
    while (cin >> valor) {
        terras.push_back(valor);
    }

    // Ponteiro para percorrer o vetor de terras
    int *p = terras.data();

    int somaTotal = 0;

    // Percorrendo as terras usando um ponteiro
    for (int i = 0; i < terras.size(); ++i) {
        cout << "Artefato coletado na terra " << i << ": " << *p << endl;
        somaTotal += *p;
        p++;
    }

    // Exibindo a soma total dos artefatos coletados
    cout << "Fim da jornada! Soma total dos artefatos: " << somaTotal << endl;

    return 0;
}