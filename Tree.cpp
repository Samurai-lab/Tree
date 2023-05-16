#include <cstdio>
#include "Tree.h"


void Tree::printTree(Node *root) {
    if (root == nullptr) return;
    printTree(root->left);
    std::printf("%d ", root->data);
    printTree(root->right);
}

Node *Tree::addTree(Node *root, Data data) {
    if (root == nullptr) {
        Node *t = new Node;
        t->data = data;
        t->left = t->right = nullptr;
        return t;
    }
    if (data < root->data) {
        root->left = addTree(root->left, data);
    }

    if (data > root->data) {
        root->right = addTree(root->right, data);
    }
    return root;
}
