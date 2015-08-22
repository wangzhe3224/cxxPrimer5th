#include <iostream>
#include <vector>

// version 1 is concise but a little bit hard to understand....
// version 2 is verbose but the logic is clear....

int main() {
  std::vector<int> grade = {60, 88, 40, 90, 100, 77};
  // version 1
  for (auto i : grade)
    std::cout << ((i >= 90) ? "high pass."
		  : (i >= 60) ?  "pass." : "fails.") << "\n";
  
  // version 2
  for (auto i : grade) {
    if (i >= 90)
      std::cout << "high pass." << std::endl;
    else if (i >= 60)
      std::cout << "pass." << std::endl;
    else
      std::cout << "fails." << std::endl;
  }
  
  return 0;
}
