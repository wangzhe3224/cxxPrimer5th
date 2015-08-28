/*
  ex13_17_2.cpp
  
  Exercise 13.17

  Created by Wang Zhe on Mon Aug 17 13:37:06 2015
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
  numbered(const numbered& cp) {
    mysn = cp.mysn + 1;
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


//output
//1
//2
//3
