/*
  ex06_11.cpp
  
  Exercise 06.11

  Created by Wang Zhe on Mon Aug 24 07:53:50 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>

void reset(int &i) {
  i = 0;
}

int main(int argc, char *argv[])
{
  int i = 20;
  std::cout << i << "\n";
  reset(i);
  std::cout << i << "\n";
  return 0;
}
