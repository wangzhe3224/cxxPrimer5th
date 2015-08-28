/*
  ex06_27.cpp
  
  Exercise 06.27

  Created by Wang Zhe on Mon Aug 24 19:12:58 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <initializer_list>
#include <iostream>

int suminit(std::initializer_list<int> const &li) {
  int sum;
  for (auto i = li.begin(); i != li.end(); ++i)
    sum += *i;
  return sum;
}

int main() {
  auto li = {1,2,3,4,5};
  std::cout << suminit(li) << "\n";

  return 0;
}
