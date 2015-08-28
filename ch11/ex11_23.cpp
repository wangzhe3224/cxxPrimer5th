/*
  ex11_23.cpp
  
  Exercise 11.23

  Created by Wang Zhe on Thu Aug 20 14:33:22 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <map>
#include <string>
#include <iostream>

using std::string;

int main() {
  std::multimap<string, string> family;
  for (string lastname, childname; std::cin >> childname >> lastname;
       family.emplace(lastname, childname));
  for (const auto &i : family)
    std::cout << i.second << " " << i.first << "\n";

  return 0;
}
