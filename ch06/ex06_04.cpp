/*
  ex06_04.cpp
  
  Exercise 06.04

  Created by Wang Zhe on Sun Aug 23 14:17:07 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>

int myfunc() {
  int i, result = 1;
  std::cin >> i;
  for (;i>0;--i)
    result *= i;
  return result;
}

int main() {
  std::cout << myfunc() << "\n";
  return 0;
}
