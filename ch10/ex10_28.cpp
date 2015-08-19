#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template<typename seq>
void printSeq(const seq &s) {
  for (auto i : s)
    std::cout << i << " ";
  std::cout << "\n";
}


int main() {
  std::vector<int> vec{1,2,3,3,5,6,7,8,9};
  std::list<int> back;
  std::list<int> front;
  std::list<int> inser;

  std::unique_copy(vec.begin(), vec.end(), back_inserter(back));
  std::unique_copy(vec.begin(), vec.end(), front_inserter(front));
  std::unique_copy(vec.begin(), vec.end(), inserter(inser, inser.begin()));

  printSeq(back);
  printSeq(front);
  printSeq(inser);
  // Output:
  // 1 2 3 5 6 7 8 9 
  // 9 8 7 6 5 3 2 1 
  // 1 2 3 5 6 7 8 9 

  return 0;
}
