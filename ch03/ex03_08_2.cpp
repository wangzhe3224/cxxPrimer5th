/*
  ex03_08_2.cpp
  
  Exercise 03.08

  Created by Wang Zhe on Mon Aug 17 21:47:34 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <string>
#include <iostream>
using namespace std;
int main() {
  string str = "WangZhe";
  cout << str << endl;

  for (decltype(str.size()) index = 0; index != str.size(); index++) {
    str[index] = 'X';
  }
  cout << str << endl;

  string s;
  cout << s[0] << endl;
  return 0;
}
