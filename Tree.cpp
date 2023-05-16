#include <cstdio>
#include "Tree.h"


void Tree::printTree(Node *root) {
    if (root == nullptr) return;
    printTree(root->left);
    std::printf("%d ", root->data);
    printTree(root->right);
}

Node *Tree::addTree(Node *root, Data data) {
    return nullptr;
}
