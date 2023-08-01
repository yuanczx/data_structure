#include "binary_tree.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {
  BinaryTree *tree = createBinaryTree();
  for (int i = 1; i <= 10; i++) {
    insertNode(tree, i);
  }

  preOrderTraversal(tree->root);
  return EXIT_SUCCESS;
}
