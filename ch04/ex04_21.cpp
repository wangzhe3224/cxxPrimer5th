#include <vector>
#include <iostream>

int main() {
  std::vector<int> ivec = {1,2,3,4,5,6,7,8,9,10};

  for (auto i : ivec)
    std::cout << ((i%2 == 0) ? i : i*2) << " ";
  std::cout << "\n";
  return 0;
}
