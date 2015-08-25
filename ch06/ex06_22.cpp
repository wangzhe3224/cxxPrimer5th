#include <iostream>

void swapint(int &a, int &b) {
  int tmp = a;
  a = b;
  b = tmp;
}

int main(int argc, char *argv[])
{
  int a = 1, b = 2;
  swapint(a,b);
  std::cout << a << " "  <<  b << "\n";;
  return 0;
}
