/*
  ex04_21.cpp
  
  Exercise 04.21

  Created by Wang Zhe on Sat Aug 22 18:48:56 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <vector>
#include <iostream>

int main() {
  std::vector<int> ivec = {1,2,3,4,5,6,7,8,9,10};

  for (auto i : ivec)
    std::cout << ((i%2 == 0) ? i : i*2) << " ";
  std::cout << "\n";
  return 0;
}
