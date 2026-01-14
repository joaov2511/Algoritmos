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

int contaFolhas(struct Node* node) {
    if (node == NULL)
        return 0;
    if (node->left == NULL && node->right == NULL)
        return 1;
    else
        return contaFolhas(node->left) + contaFolhas(node->right);
}

int main() {
    struct Node *root = NULL;
    int key;
    while (true) {
        cin >> key;
        if (key == -1)
            break;
        if (root == NULL)
            root = insert(root, key);
        else
            insert(root, key);
    }
    cout << contaFolhas(root) << endl;
    return 0;
}
