/*
  ex11_08.cpp
  
  Exercise 11.08

  Created by Wang Zhe on Thu Aug 20 07:18:32 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>

int main() {
  std::vector<std::string> exclude = {"wang", "zhe", "yeah"};
  std::string tmp;

  std::cout << "input:\n";
  while (std::cin >> tmp) {
    for (const auto &c : exclude)
      if (tmp == c)
	std::cout << "exclude.\n";
  }

  return 0;
}
