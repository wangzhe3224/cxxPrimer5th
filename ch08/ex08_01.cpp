#include <iostream>
#include <string>

std::istream &read(std::istream &is) {
  std::string str;
  while (is >> str) {
    /* Nothing happens..*/
    std::cout << str << std::endl;
  }
  is.clear();
  return is;
}

int main() {
  read(std::cin);
  return 0;
}

