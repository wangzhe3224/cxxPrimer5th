#include <iostream>
#include <string>

int main() {
  std::string tmp1,tmp2, flag;
  do {
    std::cout << "Enter two strings:\n";
    std::cin >> tmp1 >> tmp2;
    std::cout << ((tmp1 > tmp2) ? tmp1 : tmp2)
	 << " is larger than the other.\n";
    std::cout << "Enter y to continue.\n";
    //
    std::cin >> flag;
  } while (flag[0] == 'y' or flag[0] == 'Y');

  return 0;
}
