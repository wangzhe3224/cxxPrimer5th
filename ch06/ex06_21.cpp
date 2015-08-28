/*
  ex06_21.cpp
  
  Exercise 06.21

  Created by Wang Zhe on Mon Aug 24 17:58:45 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>

int laeger(const int a,const int *p) {
  return (a > *p ? a : *p);
}

int main(int argc, char *argv[])
{
  int a = 2, b = 5;
  int *p = &b;
  std::cout << laeger(a, p) << "\n";
  return 0;
}

