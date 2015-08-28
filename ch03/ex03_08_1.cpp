/*
  ex03_08_1.cpp
  
  Exercise 03.08

  Created by Wang Zhe on Mon Aug 17 21:42:14 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <string>
#include <iostream>
using namespace std;
int main() {
  string str = "WangZhe";
  cout << str << endl;

  string::size_type n = str.size();
  while (n > 0) {
    str[n-1] = 'X';
    n--;
  }
  cout << str << endl;
  return 0;
}
