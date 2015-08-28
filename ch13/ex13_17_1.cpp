/*
  ex13_17_1.cpp
  
  Exercise 13.17

  Created by Wang Zhe on Mon Aug 17 13:31:23 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>

static int Co = 0;

class numbered {
  int mysn;
public:
  numbered() {
    mysn = Co++;
  }
  friend void f(numbered s) {
    std::cout << s.mysn << std::endl;
  }
};



int main() {
  numbered a, b = a, c = b;
  f(a);f(b);f(c);

  return 0;
}
