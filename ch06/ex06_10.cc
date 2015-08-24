#include <iostream>

void swap(int &a, int &b) {
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
}

int main(int argc, char *argv[])
{
  std::cout << "Enter two integer:" << "\n";
  int i,j;
  std::cin >> i >> j;
  swap(i,j);
  std::cout << i << " "  << j << std::endl;
  return 0;
}

