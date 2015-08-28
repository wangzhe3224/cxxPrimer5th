/*
  ex05_19.cpp
  
  Exercise 05.19

  Created by Wang Zhe on Sun Aug 23 10:14:45 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
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
