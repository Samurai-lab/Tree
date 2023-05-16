#ifndef TREE_TREE_H
#define TREE_TREE_H
typedef int Data;

typedef struct Node {
    Data data;
    struct Node *left;
    struct Node *right;
};

class Tree {


    void printTree(Node *tree);

    Node *addTree(Node *tree, Data data);

};


#endif
