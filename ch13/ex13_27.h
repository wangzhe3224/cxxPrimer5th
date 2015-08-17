#idndef EX13_27_H
#define EX13_27_H

#include <string>

class HasPtr {
 private:
  std::string *ps;
  int id;
  size_t *use;
 public:
 HasPtr(const std::string &s = std::string()): ps(new std::string(s)), id(0), use(new size_t(1)) {}
 HasPtr(const HasPtr &cp): ps(cp.ps), id(cp.id)
};

#endif
