#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> letter = {"F","D","C","B","A"};
  int tmp = 0;
  std::cout << "Input a numeric grade:" << "\n";
  while (std::cin >> tmp) {
    if (tmp < 60)
      std::cout << "\n" << letter[0];
    else if (tmp>=60 && tmp <70)
      std::cout << "\n" << letter[1];
    else if (tmp >= 70 && tmp < 80)
      std::cout << "\n" << letter[2];
    else if (tmp >= 80 && tmp < 90)
      std::cout << "\n" << letter[3];
    else
      std::cout << "\n" << letter[4];
    
    std::cout << "Input a numeric grade:" << "\n";
  }
  
  return 0;
}
