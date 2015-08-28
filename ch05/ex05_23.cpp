/*
  ex05_23.cpp
  
  Exercise 05.23

  Created by Wang Zhe on Sun Aug 23 13:25:09 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <stdexcept>

int main() {
  int a,b;
  std::cin >> a >> b;
  if (b == 0)
    throw std::runtime_error("divided by 0");
  std::cout << a/b << "\n";
  return 0;
}
