/*
  ex03_21.cpp
  
  Exercise 03.21

  Created by Wang Zhe on Tue Aug 18 11:03:07 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<int> v {1,2,3,4,5,6,7,8,9};
  for (auto it = v.begin(); it != v.end(); ++it)
    *it *= *it;
  for (auto it = v.cbegin(); it != v.cend(); ++it)
    cout << *it << " ";
  cout << endl;

  return 0;
}
