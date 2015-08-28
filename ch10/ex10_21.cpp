/*
  ex10_21.cpp
  
  Exercise 10.21

  Created by Wang Zhe on Wed Aug 19 13:24:40 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
  std::vector<std::string> svec {"wang", "Zhe", "1234", "32233" , "adfeasdf"};
  int i = 10;
  auto isZero = [&i]() -> bool { return --i ? true : false; };
  while (isZero()) {
    std::cout << i << "\n";
  }

  return 0;
}
