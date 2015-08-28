/*
  ex06_54.cpp
  
  Exercise 06.54

  Created by Wang Zhe on Tue Aug 25 19:10:46 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <vector>
int f1(int, int);
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; }

int main(int argc, char *argv[])
{
  std::vector<int(*)(int, int)> var{add,subtract,multiply,divide};
  for (auto i : var) {
    std::cout << i(1,1) << " ";
  }
  std::cout << "\n";
  return 0;
}

