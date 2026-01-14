#include <iostream>

using namespace std;

// Definição de um nó da lista ligada
struct Node {
    int data;
    Node* next;

    // Construtor
    Node(int value) : data(value), next(nullptr) {}
};

// Definição da classe para a lista ligada
class LinkedList {
private:
    Node* front;  // Ponteiro para o início da lista
    Node* rear;   // Ponteiro para o final da lista

public:
    // Construtor
    LinkedList() : front(nullptr), rear(nullptr) {}

    // Método para inserir um elemento no final da lista
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (rear == nullptr) {
            // Se a lista estiver vazia
            front = rear = newNode;
        } else {
            // Se a lista já contiver elementos
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Método para remover e exibir um elemento da frente da lista
    void dequeue() {
        if (front == nullptr) {
            cout << "A fila está vazia." << endl;
            return;
        }

        Node* temp = front;
        front = front->next;
        cout << temp->data << " ";
        delete temp;

        // Atualiza rear se a fila ficar vazia
        if (front == nullptr) {
            rear = nullptr;
        }
    }

    // Método para exibir os elementos da lista
    void display() {
        Node* current = front;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
    }
};

int main() {
    LinkedList fila;

    // Leitura e inserção dos valores na fila
    for (int i = 0; i < 4; ++i) {
        int valor;
        cout << "Digite um valor inteiro: ";
        cin >> valor;
        fila.enqueue(valor);
    }

    // Exibição dos elementos inseridos na fila
    cout << "Elementos inseridos na fila: ";
    fila.display();

    // Remoção e exibição dos elementos da fila
    cout << "\nElementos removidos da fila: ";
    for (int i = 0; i < 4; ++i) {
        fila.dequeue();
    }

    return 0;
}
