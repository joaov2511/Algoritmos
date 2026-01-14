#include <iostream>

using namespace std;

const int MAX_ALUNOS = 4; // Defina o tamanho máximo do array de alunos

//variaveis globais

// Definição da estrutura Aluno
struct Aluno {
    char nome[50]; // Usando um array de caracteres para o nome
    int matricula;
    int idade;
};

//prototipo de funcao

int busca(const Aluno alunos[], int tamanho, int matricula);

int main() {
    // Array de alunos ordenado por matrícula
    Aluno alunos[MAX_ALUNOS];

    for (int i = 0; i < MAX_ALUNOS; ++i) {
        cout << "Aluno " << i + 1 << ":" << endl;
        
        cout << "Nome: ";
        cin.getline(alunos[i].nome, 50);
        
        cout << "Matrícula: ";
        cin >> alunos[i].matricula;
        
        cout << "Idade: ";
        cin >> alunos[i].idade;
        
        cin.ignore(); // Limpar o buffer após a leitura de idade
        
        cout << endl;
    }

    int matriculaAlvo;
    cout << "Digite a matrícula do aluno a ser buscado: ";
    cin >> matriculaAlvo;

    int indice = busca(alunos, MAX_ALUNOS, matriculaAlvo);

    if (indice != -1) {
        cout << "Aluno encontrado no índice " << indice << endl;
        cout << "Nome: " << alunos[indice].nome << endl;
        cout << "Matrícula: " << alunos[indice].matricula << endl;
        cout << "Idade: " << alunos[indice].idade << endl;
    } else {
        cout << "Aluno não encontrado" << endl;
    }

    return 0;
}

//desenvolvimento da funcao

int busca(const Aluno alunos[], int tamanho, int matricula) {
    int esquerda = 0;
    int direita = tamanho - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (alunos[meio].matricula == matricula) {
            return meio; // Índice do aluno encontrado
        } else if (alunos[meio].matricula < matricula) {
            esquerda = meio + 1; // Procura na metade direita
        } else {
            direita = meio - 1; // Procura na metade esquerda
        }
    }

    return -1; // Aluno não encontrado
}