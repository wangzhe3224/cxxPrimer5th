#include <iostream>

void reset(int &i) {
  i = 0;
}

int main(int argc, char *argv[])
{
  int i = 20;
  std::cout << i << "\n";
  reset(i);
  std::cout << i << "\n";
  return 0;
}
