/*
  ex06_17.cpp
  
  Exercise 06.17

  Created by Wang Zhe on Mon Aug 24 08:40:44 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <string>

bool hasCapital(const std::string &s) {
  for (auto i : s) {
    if (isupper(i))
      return true;
  }
  return false;
}

void toLower(std::string &s) {
  for (auto &i : s)
    i = tolower(i);
}

int main(int argc, char *argv[])
{
  std::string str("Wz is Cool!");

  std::cout << (hasCapital(str) ? "Has capital." : "No capital.")  << "\n";
  toLower(str);
  std::cout << str << "\n";
  
  return 0;
}
