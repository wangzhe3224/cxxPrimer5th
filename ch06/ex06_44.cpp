#include <iostream>
#include <string>

inline bool isShorter(const std::string &s1, const std::string &s2) {
  return s1.size() < s2.size();
}

int main(int argc, char *argv[])
{
  std::cout << (isShorter("wang","zhe") ? "yes" : "No") << "\n";
  return 0;
}
