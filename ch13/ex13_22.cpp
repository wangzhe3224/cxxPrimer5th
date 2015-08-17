// class as a value...
#include <iostream>
#include <string>
using std::string;

class HasPtr {
private:
  string *ps;
  int id;
public:
  HasPtr();
  HasPtr(const HasPtr& cp): ps(new string(*cp.ps)), id(cp.id) {}
  HasPtr& operator=(const HasPtr &cp) {
    string *cpt = new string(*cp.ps);
    delete ps;
    ps = cpt; // ps is a pointer produced by new indetifer....
    id = cp.id;
    return*this;
  }
  ~HasPtr() {delete ps;}
};

int main() {
  
  return 0;
}
