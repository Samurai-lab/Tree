#ifndef TREE_TREE_H
#define TREE_TREE_H
typedef int Data;

typedef struct Node {
    Data data;
    struct Node *left;
    struct Node *right;
};

class Tree {
public:
    void printTree(Node *root);

    Node *addTree(Node *root, Data data);
};


#endif
