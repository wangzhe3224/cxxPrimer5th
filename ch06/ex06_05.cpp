#include <iostream>

int abs(int a) {
  return a>=0 ? a : -a;
}

int main() {
  int i;
  std::cin >> i;
  std::cout << abs(i) << std::endl;
  return 0;
}
