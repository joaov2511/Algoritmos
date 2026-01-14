#include <iostream>
#include <iomanip> // Para setprecision
using namespace std;

// Definição da struct
struct Notas {
    int nota1;
    int nota2;
    int nota3;
    int nota4;
    double media;
};

int main() {
    // Alocação de memória para a struct usando ponteiro
    Notas *aluno = new Notas;

    // Leitura das notas do usuário
    cin >> aluno->nota1 >> aluno->nota2 >> aluno->nota3 >> aluno->nota4;

    // Cálculo da média
    aluno->media = (aluno->nota1 + aluno->nota2 + aluno->nota3 + aluno->nota4) / 4.0;

    // Saída formatada com 2 casas decimais
    cout << fixed << setprecision(2);
    cout << aluno->media << endl;

    return 0;
}
