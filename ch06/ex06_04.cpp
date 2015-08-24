#include <iostream>

int myfunc() {
  int i, result = 1;
  std::cin >> i;
  for (;i>0;--i)
    result *= i;
  return result;
}

int main() {
  std::cout << myfunc() << "\n";
  return 0;
}
