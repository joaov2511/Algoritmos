#include <iostream>

using namespace std;

// Definição da estrutura do nó da árvore
struct Node {
    int data;       // Dados armazenados no nó
    Node* left;     // Ponteiro para o filho esquerdo
    Node* right;    // Ponteiro para o filho direito
};

// Função para criar um novo nó
Node* createNode(int data) {
    Node* newNode = new Node();   // Aloca memória para um novo nó
    newNode->data = data;         // Define o valor do nó como 'data'
    newNode->left = newNode->right = nullptr;  // Inicializa os ponteiros esquerdo e direito como nulos
    return newNode;               // Retorna o ponteiro para o novo nó criado
}

// Função para inserir um nó na árvore
Node* insert(Node* root, int data) {
    if (root == nullptr) {        // Se a raiz for nula, criamos um novo nó com os dados fornecidos
        return createNode(data);
    }

    if (data < root->data) {      // Se 'data' for menor que o valor do nó atual, inserimos à esquerda
        root->left = insert(root->left, data);
    } else if (data > root->data) { // Se 'data' for maior que o valor do nó atual, inserimos à direita
        root->right = insert(root->right, data);
    }

    return root;   // Retorna o ponteiro para a raiz da árvore após a inserção
}

// Função para buscar um nó na árvore
bool search(Node* root, int data) {
    if (root == nullptr) {        // Se chegarmos a um nó nulo, o elemento não está na árvore
        return false;
    } else if (root->data == data) {  // Se encontrarmos o valor do nó igual ao valor de busca, retornamos verdadeiro
        return true;
    } else if (data < root->data) {  // Se 'data' for menor que o valor do nó atual, buscamos à esquerda
        return search(root->left, data);
    } else {                         // Caso contrário, buscamos à direita
        return search(root->right, data);
    }
}

int main() {
    int N;
    cin >> N;

    Node* root = nullptr;   // Inicializa a raiz da árvore como nula

    for (int i = 0; i < N; i++) {
        char operation;
        int x;
        cin >> operation >> x;

        if (operation == 'i') {    // Se a operação for 'i' (inserção), chamamos a função de inserção
            root = insert(root, x);
        } else if (operation == 'b') {  // Se a operação for 'b' (busca), chamamos a função de busca
            if (search(root, x)) {      // Se o elemento for encontrado, imprime que está catalogado
                cout << "Sim" << endl;
            } else {                    // Caso contrário, imprime que não está catalogado
                cout << "Não" << endl;
            }
        }
    }

    return 0;
}
