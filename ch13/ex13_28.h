#idndef EX13_28_H
#define EX13_28_H

#include <string>

class TreeNode {
 private:
  std::string value;
  int         *count;
  TreeNode    *left;
  TreeNode    *right;
 public:
 TreeNode(const std::string& s = std::string()):value(s),count(new int(0)),left(nullptr), right(nullptr) {}
 TreeNode(const TreeNode &rhs): value(rhs.value), count(rhs.count), left(rhs.left), right(rhs.right) {++*count;}
  TreeNode operator=(TreeNode &cp);
  ~TreeNOde() {
    if (--*count == 0){
      if (left) {
	delete left;
	left = nullptr;
      }
      if (right) {
	delete right;
	right = nullptr;
      }
      delete count;
      count = nullptr;
    }
  }
};

class BinStrTree {
 private:
  TreeNode *root;
 public:
 BinStrTree() : root(new TreeNode()) {}
 BinStrTree(const BinStrTree &bst) : root(new TreeNode(*bst.root)) {}
  BinStrTree& operator=(const BinStrTree &bst);
  ~BinStrTree() { delete root; }
};

#endif
