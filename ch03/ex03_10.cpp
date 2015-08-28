/*
  ex03_10.cpp
  
  Exercise 03.10

  Created by Wang Zhe on Mon Aug 17 21:59:39 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <string>
#include <iostream>
#include <cctype>
using namespace std;
int main() {
  string str;
  getline(cin, str);
  for (auto &c : str) {
    if (!ispunct(c))
      cout << c;
  }
  cout << endl;
  return 0;
}
