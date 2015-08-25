#include <iostream>

void f() {
  std::cout << "f()" << "\n";
}

void f(int, int) {
  std::cout << "f(int, int)" << "\n";
}

void f(double, double) {
  std::cout << "f(double, double)" << "\n";
}

void f(int) {
  std::cout << "f(int)" << "\n";
}

int main(int argc, char *argv[])
{
  //f(2.56, 42); //error: call of overloaded ‘f(double, int)’ is ambiguous|

  f(42);
  f(42, 0);
  f(2.56, 3.14);
  return 0;
}
