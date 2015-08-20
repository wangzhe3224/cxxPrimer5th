#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>

int main() {
  std::vector<std::string> exclude = {"wang", "zhe", "yeah"};
  std::string tmp;

  std::cout << "input:\n";
  while (std::cin >> tmp) {
    for (const auto &c : exclude)
      if (tmp == c)
	std::cout << "exclude.\n";
  }

  return 0;
}
