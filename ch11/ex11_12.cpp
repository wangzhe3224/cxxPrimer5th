/*
  ex11_12.cpp
  
  Exercise 11.12

  Created by Wang Zhe on Thu Aug 20 07:58:53 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <utility>
#include <string>
#include <vector>
#include <iostream>

int main() {
  std::vector<std::pair<std::string, int>> pvec;
  std::string tmp;
  int tmp2;

  while (std::cin >> tmp >> tmp2) {
    pvec.push_back(std::pair<std::string, int>(tmp,tmp2));
    pvec.push_back(std::make_pair(tmp,tmp2));
    pvec.push_back({tmp,tmp2});
  }
}
