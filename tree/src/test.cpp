#include "binary_tree.h"
#include <iostream>
using namespace std;

int main() {
  TreeNode *root = NULL;
  int arr[] = {15, 10, 20, 8, 12, 16, 25};

  root = insertNode(root, arr[0]);

  for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
    insertNode(root, arr[i]);
  }

  cout << "中序遍历结果：";
  inorderTraversal(root);

  return 0;
}
