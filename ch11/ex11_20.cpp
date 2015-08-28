/*
  ex11_20.cpp
  
  Exercise 11.20

  Created by Wang Zhe on Thu Aug 20 13:52:06 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <map>
#include <string>

using std::string;

int main() {
  std::map<string, size_t> word_count;
  string tmp;
  while (std::cin >> tmp) {
    auto res = word_count.insert({tmp, 1});
    if (!res.second)
      ++res.first->second;
  }

  for (const auto &i : word_count)
    std::cout << i.first << " " << i.second << "\n";

  return 0;
}
