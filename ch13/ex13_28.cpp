#include "ex13_28.h"

TreeNode& TreeNode::operator=(const TreeNode &cp) {
  ++*cp.count;
  if (--*count == 0) {
    if (left) {
      delete left;
    }
    if (right) {
      delete right;
    }

    delete count;
  }

  value = rhs.value;
  left = rhs.left;
  right = rhs.right;
  count = rhs.count;
  return *this;
}

BinStrTree& BinStrTree::operator=(const BinStrTree &bst){
  TreeNode *new_root = new TreeNode(*bst.root);
  delete root;
  root = new_root;
  return *this;
}

int main() {
  return 0;
}
