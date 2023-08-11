#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef struct TreeNode {
  int value;
  struct TreeNode *left;
  struct TreeNode *right;
} TreeNode;

TreeNode *createNode(int data);
TreeNode *insertNode(TreeNode *root, int data);
void inorderTraversal(TreeNode *root);

#endif
