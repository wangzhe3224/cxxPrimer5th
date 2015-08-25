#include <iostream>

int laeger(const int a,const int *p) {
  return (a > *p ? a : *p);
}

int main(int argc, char *argv[])
{
  int a = 2, b = 5;
  int *p = &b;
  std::cout << laeger(a, p) << "\n";
  return 0;
}

