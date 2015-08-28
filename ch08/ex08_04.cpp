/*
  ex08_04.cpp
  
  Exercise 08.04

  Created by Wang Zhe on Fri Aug 28 21:03:53 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

void readfile(const std::string &fileName, std::vector<std::string> &vec) {
  std::ifstream input(fileName);
  if (input) {
    std::string buff;
    while (std::getline(input, buff)) {
      vec.push_back(buff);
      //std::cout << "!\n";
    }
  }
  else {
    std::cerr <<"Can not open file " << fileName << std::endl;
  }
}

int main() {
  std::vector<std::string> vec;
  readfile("ex08_04.dat", vec);
  for (const auto &str : vec) {
    std::cout << str << std::endl;
    //std::cout << "!!" << std::endl;
  }

  //  std::cout << "!!" << std::endl;
  return 0;
}
