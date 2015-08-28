/*
  ex03_01.cpp
  
  Exercise 03.01

  Created by Wang Zhe on Mon Aug 17 19:22:47 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  string line, str;
  // by line
  getline(cin, line);
  cout << line << endl;
  // by word
  while (cin >> str) {
    cout << str << endl;
  }
  return 0;
}
