/*
  ex07_04.h
  
  Exercise 07.04

  Created by Wang Zhe on Wed Aug 26 10:42:43 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#ifndef ex07_04_h
#define ex07_04_h

#include <string>

class Person {
private:
  std::string name;
  std::string address;
public:
  const std::string getName() { return name; }
  const std::string getAdd() { return address; }
};

#endif
