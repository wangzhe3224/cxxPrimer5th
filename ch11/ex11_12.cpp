#include <utility>
#include <string>
#include <vector>
#include <iostream>

int main() {
  std::vector<std::pair<std::string, int>> pvec;
  std::string tmp;
  int tmp2;

  while (std::cin >> tmp >> tmp2) {
    pvec.push_back(std::pair<std::string, int>(tmp,tmp2));
    pvec.push_back(std::make_pair(tmp,tmp2));
    pvec.push_back({tmp,tmp2});
  }
}
