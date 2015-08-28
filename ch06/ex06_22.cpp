/*
  ex06_22.cpp
  
  Exercise 06.22

  Created by Wang Zhe on Mon Aug 24 18:01:47 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>

void swapint(int &a, int &b) {
  int tmp = a;
  a = b;
  b = tmp;
}

int main(int argc, char *argv[])
{
  int a = 1, b = 2;
  swapint(a,b);
  std::cout << a << " "  <<  b << "\n";;
  return 0;
}
