/*
  ex03_22.cpp
  
  Exercise 03.22

  Created by Wang Zhe on Tue Aug 18 11:40:56 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main() {
  vector<string> svec;
  for (string line; getline(cin, line) ; svec.push_back(line));

  for (auto it = svec.begin(); it != svec.end(); ++it) {
    for (auto j = it->begin(); j != it->end(); ++j) {
      if (isalpha(*j))
	*j = toupper(*j);
      cout << *it << " ";
    }
  }

  return 0;
}
