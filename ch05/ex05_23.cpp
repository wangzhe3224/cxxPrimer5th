#include <iostream>
#include <stdexcept>

int main() {
  int a,b;
  std::cin >> a >> b;
  if (b == 0)
    throw std::runtime_error("divided by 0");
  std::cout << a/b << "\n";
  return 0;
}
