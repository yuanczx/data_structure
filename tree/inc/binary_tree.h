#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

typedef struct {
    Node* root;
} BinaryTree;

BinaryTree* createBinaryTree();
Node* createNode(int data);
void insertNode(BinaryTree* tree, int data);
Node* searchNode(BinaryTree* tree, int data);
void preOrderTraversal(Node* node);
void inOrderTraversal(Node* node);
void postOrderTraversal(Node* node);
void destroyTree(Node* node);

#endif
