/*
  ex08_01.cpp
  
  Exercise 08.01

  Created by Wang Zhe on Fri Aug 28 21:03:53 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/

#include <iostream>
#include <string>

std::istream &read(std::istream &is) {
  std::string str;
  while (is >> str) {
    /* Nothing happens..*/
    std::cout << str << std::endl;
  }
  is.clear();
  return is;
}

int main() {
  read(std::cin);
  return 0;
}

