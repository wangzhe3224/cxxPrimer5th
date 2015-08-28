/*
  ex03_23.cpp
  
  Exercise 03.23

  Created by Wang Zhe on Tue Aug 18 11:48:30 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main() {
  vector<int> ivec{1,2,3,4,5,6,7,8,9,10};
  for (auto i = ivec.begin(); i != ivec.end(); ++i)
    *i *= 2;
  for (auto i : ivec)
    cout << i << " ";
  cout << endl;

  return 0;
}
