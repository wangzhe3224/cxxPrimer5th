#include <initializer_list>
#include <iostream>

int suminit(std::initializer_list<int> const &li) {
  int sum;
  for (auto i = li.begin(); i != li.end(); ++i)
    sum += *i;
  return sum;
}

int main() {
  auto li = {1,2,3,4,5};
  std::cout << suminit(li) << "\n";

  return 0;
}
