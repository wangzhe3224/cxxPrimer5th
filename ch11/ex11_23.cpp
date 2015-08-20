#include <map>
#include <string>
#include <iostream>

using std::string;

int main() {
  std::multimap<string, string> family;
  for (string lastname, childname; std::cin >> childname >> lastname;
       family.emplace(lastname, childname));
  for (const auto &i : family)
    std::cout << i.second << " " << i.first << "\n";

  return 0;
}
