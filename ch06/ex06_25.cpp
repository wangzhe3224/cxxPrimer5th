/*
  ex06_25.cpp
  
  Exercise 06.25

  Created by Wang Zhe on Mon Aug 24 18:50:56 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>

void print(const char *p) {
  if (*p)
    while (*p)
      std::cout << *p++;
}

int main(int argc, char *argv[])
{
  print(*(argv+1));
  print(*(argv+2));
  std::cout << "\n";
  return 0;
}
