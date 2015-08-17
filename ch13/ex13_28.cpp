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
  
  return *this;
}
