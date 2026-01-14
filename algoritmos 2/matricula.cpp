#include <iostream>
#include <string>

using namespace std;

struct Aluno {
    string nome;
    string curso;
    int matricula;
};

int main() {
    int N;
    cin >> N; // Número de alunos

    Aluno alunos[10000]; // Criamos um array para armazenar os dados dos alunos

    for (int i = 0; i < N; i++) {
        cin.ignore(); // Ignora a quebra de linha anterior
        getline(cin, alunos[i].nome);
        getline(cin, alunos[i].curso);
        cin >> alunos[i].matricula;
    }

    string nomeAlunoConsultado;
    cin.ignore(); // Ignora a quebra de linha anterior
    getline(cin, nomeAlunoConsultado);

    bool encontrado = false;

    for (int i = 0; i < N; i++) {
        if (alunos[i].nome == nomeAlunoConsultado) {
            cout << alunos[i].nome << endl;
            cout << alunos[i].curso << endl;
            cout << alunos[i].matricula << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Aluno nao localizado" << endl;
    }

    return 0;
}
