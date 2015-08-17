#include <iostream>

static int Co = 0;

class numbered {
  int mysn;
public:
  numbered() {
    mysn = Co++;
  }
  numbered(const numbered& cp) {
    mysn = cp.mysn + 1;
  }
  friend void f(numbered &s) {
    std::cout << s.mysn << std::endl;
  }
};



int main() {
  numbered a, b = a, c = b;
  f(a);f(b);f(c);

  return 0;
}


//output
//0
//1
//2
