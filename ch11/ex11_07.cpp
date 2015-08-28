/*
  ex11_07.cpp
  
  Exercise 11.07

  Created by Wang Zhe on Wed Aug 19 22:08:36 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>

int main() {
  std::map<std::string, std::vector<std::string>> names;

  std::string family, child;
  std::cout << "Please input the family name: ";
  while (std::cin >> family && family != "q") {
    std::cout << "Please input the children name: ";
    while (std::cin >> child && child != "q") {
      names[family].push_back(child);
    }
    std::cout << "Please input the family name: ";
  }

  std::cout << "\nHere is the result:\n";
  
  for (auto key : names) {
    std::cout << key.first << ":\n";

    for (auto val : key.second)
      std::cout << val << " ";
    std::cout << "\n";
  }

  return 0;
}
