/*
  ex06_23.cpp
  
  Exercise 06.23

  Created by Wang Zhe on Mon Aug 24 18:21:58 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>

void print(const int *beg,const int *end) {
  while (beg != end) {
    std::cout << *beg++ << "\n";
  }
}

void print(const int *i) {
  std::cout << *i << "\n";
}

void print(const char *p) {
  if (p)
    while (*p)
      std::cout << *p++;
  std::cout << "\n";
}

void print(const int a[], std::size_t size) {
  for (std::size_t i = 0; i < size; ++i) {
    std::cout << a[i] << " ";
  }

  std::cout << "\n";
}

int main(int argc, char *argv[])
{
  int i = 0, j[2] = {0, 1};
  char ch[8] = "wangzhe";

  print(&i);
  print(j,2);
  print(std::begin(j), std::end(j));
  print(ch);
  return 0;
}

