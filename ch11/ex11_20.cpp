#include <iostream>
#include <map>
#include <string>

using std::string;

int main() {
  std::map<string, size_t> word_count;
  string tmp;
  while (std::cin >> tmp) {
    auto res = word_count.insert({tmp, 1});
    if (!res.second)
      ++res.first->second;
  }

  for (const auto &i : word_count)
    std::cout << i.first << " " << i.second << "\n";

  return 0;
}
