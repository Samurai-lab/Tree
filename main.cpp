#include <iostream>
#include "Tree.h"

int main() {
    Tree tree = *new Tree;
    Node *root = nullptr;
    tree.printTree(root);

    root = tree.addTree(root, 7);
    root = tree.addTree(root, 7);
    tree.printTree(root);

    //bypass in depth
    /* Tree tree = *new Tree;
     Node
             one = {1, nullptr, nullptr},
             two = {2, nullptr, nullptr},
             thee = {3, nullptr, nullptr},
             five = {5, nullptr, nullptr},
             seven = {7, nullptr, nullptr},
             eight = {8, nullptr, nullptr},
             nine = {9, nullptr, nullptr};

     Node *root = nullptr;
     root = &seven;

     seven.left = &thee;
     seven.right = &nine;

     nine.left = &eight;

     thee.left = &two;
     thee.right = &five;

     two.left = &one;

     tree.printTree(root);*/

    return 0;
}
