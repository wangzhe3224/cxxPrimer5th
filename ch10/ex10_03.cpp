/*
  ex10_03.cpp
  
  Exercise 10.03

  Created by Wang Zhe on Tue Aug 18 22:52:37 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  vector<int> ivec(10,10);
  int sum = accumulate(ivec.begin(), ivec.end(), 0);
  cout << sum << endl;
  return 0;
}
