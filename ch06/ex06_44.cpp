/*
  ex06_44.cpp
  
  Exercise 06.44

  Created by Wang Zhe on Tue Aug 25 18:08:03 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <string>

inline bool isShorter(const std::string &s1, const std::string &s2) {
  return s1.size() < s2.size();
}

int main(int argc, char *argv[])
{
  std::cout << (isShorter("wang","zhe") ? "yes" : "No") << "\n";
  return 0;
}
