/*
  ex05_14.cpp
  
  Exercise 05.14

  Created by Wang Zhe on Sun Aug 23 08:55:34 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <string>
#include <vector>

struct duplicate {
  std::string word;
  int count;
};

int main() {
  duplicate output {" ", 1};
  std::string tmp, former = " ";
  int count = 1;
  
  while (std::cin >> tmp) {
    if (tmp == former) {
      ++count;
      if (count > output.count) {
	output.word = tmp;
	output.count = count;
      }
    }
    else
      count = 1;
    
    former = tmp; // keep the former word.
  }

  if (output.count == 0)
    std::cout << "No duplicate.\n";
  else
    std::cout << output.word << " occurs " << output.count << " times.\n";
  
  return 0;
}
