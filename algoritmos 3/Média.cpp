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

void calculateSumAndCount(struct Node* node, int& sum, int& count) {
    if (node == NULL)
        return;
    calculateSumAndCount(node->left, sum, count);
    sum += node->key;
    count++;
    calculateSumAndCount(node->right, sum, count);
}

float media(struct Node* root) {
    int sum = 0;
    int count = 0;
    calculateSumAndCount(root, sum, count);
    return (float)sum / count;
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
    cout << fixed << setprecision(2) << "Media: " << media(root) << endl;
    return 0;
}
