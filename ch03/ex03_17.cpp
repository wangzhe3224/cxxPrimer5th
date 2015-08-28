/*
  ex03_17.cpp
  
  Exercise 03.17

  Created by Wang Zhe on Tue Aug 18 00:31:15 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main() {
  string tmp;
  vector<string> str;
  while (cin >> tmp) {
    str.push_back(tmp);
  }
  for (auto &s : str) {
    for (auto &c : s) {
      c = toupper(c);
    }
  }
  for (int i = 0; i != str.size(); ++i) {
    if (i != 0 && i % 8 == 0)
      cout << endl;
    cout << str[i] << " ";
  }

  return 0;
}
