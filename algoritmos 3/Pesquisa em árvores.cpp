#include<iostream>
#include <iomanip>
using namespace std;

struct Node {
    int key;
    struct Node *left, *right;
};

struct Node* newNode(int item) {
    struct Node* temp = new Node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

struct Node* insert(struct Node* Node, int key) {
    if (Node == NULL) return newNode(key);
    if (key < Node->key)
        Node->left = insert(Node->left, key);
    else if (key > Node->key)
        Node->right = insert(Node->right, key);
    return Node;
}

bool search(struct Node* root, int key) {
    while (root != NULL) {
        if (key > root->key)
            root = root->right;
        else if (key < root->key)
            root = root->left;
        else
            return true;
    }
    return false;
}

int main() {
    struct Node *root = NULL;
    int n, key;
    cout << "Enter the number of nodes: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> key;
        if(root == NULL)
            root = insert(root, key);
        else
            insert(root, key);
    }
    cout << "Enter the number to be searched: ";
    cin >> key;
    if(search(root, key))
        cout << "Encontrado";
    else
        cout << "Nao encontrado";
    return 0;
}
