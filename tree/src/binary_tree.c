#include "binary_tree.h"
#include <stdio.h>
#include <stdlib.h>

BinaryTree *createBinaryTree() {
  BinaryTree *tree = (BinaryTree *)malloc(sizeof(BinaryTree));
  tree->root = NULL;
  return tree;
}

Node *createNode(int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

void insertNode(BinaryTree *tree, int data) {
  Node *newNode = createNode(data);

  if (tree->root == NULL) {
    tree->root = newNode;
  } else {
    Node *current = tree->root;
    Node *parent = NULL;

    while (1) {
      parent = current;

      if (data < current->data) {
        current = current->left;
        if (current == NULL) {
          parent->left = newNode;
          return;
        }
      } else {
        current = current->right;
        if (current == NULL) {
          parent->right = newNode;
          return;
        }
      }
    }
  }
}

Node *searchNode(BinaryTree *tree, int data) {
  Node *current = tree->root;

  while (current != NULL) {
    if (data == current->data) {
      return current;
    } else if (data < current->data) {
      current = current->left;
    } else {
      current = current->right;
    }
  }

  return NULL;
}

void preOrderTraversal(Node *node) {
  if (node != NULL) {
    printf("%d ", node->data);
    preOrderTraversal(node->left);
    preOrderTraversal(node->right);
  }
}

void inOrderTraversal(Node *node) {
  if (node != NULL) {
    inOrderTraversal(node->left);
    printf("%d ", node->data);
    inOrderTraversal(node->right);
  }
}

void postOrderTraversal(Node *node) {
  if (node != NULL) {
    postOrderTraversal(node->left);
    postOrderTraversal(node->right);
    printf("%d ", node->data);
  }
}

void destroyTree(Node *node) {
  if (node != NULL) {
    destroyTree(node->left);
    destroyTree(node->right);
    free(node);
  }
}
