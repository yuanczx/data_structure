#include "binary_tree.h"
#include <iostream>
using namespace std;

TreeNode *createNode(int data) {
  TreeNode *newNode = new TreeNode();
  if (!newNode) {
    cout << "内存分配失败！" << endl;
    return NULL;
  }
  newNode->value = data;
  newNode->left = newNode->right = NULL;
  return newNode;
}

TreeNode *insertNode(TreeNode *root, int data) {
  if (root == NULL) {
    root = createNode(data);
    return root;
  }
  if (data < root->value) {
    root->left = insertNode(root->left, data);
  } else if (data > root->value) {
    root->right = insertNode(root->right, data);
  }
  return root;
}

void inorderTraversal(TreeNode *root) {
  if (root == NULL) {
    return;
  }
  inorderTraversal(root->left);
  cout << root->value << " ";
  inorderTraversal(root->right);
}
