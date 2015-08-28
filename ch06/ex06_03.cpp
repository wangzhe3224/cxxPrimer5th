/*
  ex06_03.cpp
  
  Exercise 06.03

  Created by Wang Zhe on Sun Aug 23 14:08:22 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>

int fact(int i) {
  return i>1 ? i*fact(i-1) : 1;
}

int main() {
  std::cout << fact(5) << std::endl;
  return 0;
}
