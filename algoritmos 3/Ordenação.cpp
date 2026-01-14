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

void printDescending(struct Node* node) {
    if (node != NULL) {
        printDescending(node->right);
        cout << node->key << " ";
        printDescending(node->left);
    }
}

int main() {
    struct Node *root = NULL;
    int key;
    cout << "Enter the elements (enter -1 to stop): ";
    while (true) {
        cin >> key;
        if (key == -1)
            break;
        if (root == NULL)
            root = insert(root, key);
        else
            insert(root, key);
    }
    printDescending(root);
    return 0;
}
