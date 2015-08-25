#include <iostream>

void print(const char *p) {
  if (*p)
    while (*p)
      std::cout << *p++;
}

int main(int argc, char *argv[])
{
  print(*(argv+1));
  print(*(argv+2));
  std::cout << "\n";
  return 0;
}
