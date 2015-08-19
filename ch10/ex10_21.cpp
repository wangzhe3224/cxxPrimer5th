#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
  std::vector<std::string> svec {"wang", "Zhe", "1234", "32233" , "adfeasdf"};
  int i = 10;
  auto isZero = [&i]() -> bool { return --i ? true : false; };
  while (isZero()) {
    std::cout << i << "\n";
  }

  return 0;
}
