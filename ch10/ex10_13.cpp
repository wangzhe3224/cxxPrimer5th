/*
  ex10_13.cpp
  
  Exercise 10.13

  Created by Wang Zhe on Wed Aug 19 11:44:21 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <algorithm>
#include <vector>

inline bool
moreThen(std::string &s) { return s.size() > 5; }

int main() {
  std::vector<std::string> svec;
  std::string tmp;
  for (int i = 0; i < 5; i++, std::cin >> tmp)
    svec.push_back(tmp);

  auto loc = std::partition(svec.begin(), svec.end(), moreThen);

  for (auto i = loc; i != svec.end(); ++i)
    std::cout << *i << " ";
  std::cout << "\n";
  //
  // partition will remove the repeated elements....
  // what if I want to keep the repeated elements?
  return 0;
}
