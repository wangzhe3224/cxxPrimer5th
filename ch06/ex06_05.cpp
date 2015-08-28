/*
  ex06_05.cpp
  
  Exercise 06.05

  Created by Wang Zhe on Sun Aug 23 14:20:15 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>

int abs(int a) {
  return a>=0 ? a : -a;
}

int main() {
  int i;
  std::cin >> i;
  std::cout << abs(i) << std::endl;
  return 0;
}
