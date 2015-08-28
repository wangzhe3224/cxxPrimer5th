/*
  ex05_17.cpp
  
  Exercise 05.17

  Created by Wang Zhe on Sun Aug 23 09:42:40 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <vector>

int main() {
  std::vector<int> v1 = {0,1,1,2}, v2 = {0,1,1,2,3,5,8};

  auto size = (v1.size() > v2.size()) ? v2.size() : v1.size();

  for (decltype(v1.size()) i = 0; i != size; ++i) {
    if (v1[i] != v2[i]) {
      std::cout << "false.\n";
      break;
    }
    if (i == size - 1)
      std::cout << "true.\n";
  }
  
  return 0;
}
