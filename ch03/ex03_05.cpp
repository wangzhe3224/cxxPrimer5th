/*
  ex03_05.cpp
  
  Exercise 03.05

  Created by Wang Zhe on Mon Aug 17 21:15:45 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
  string temp, large;
  while (cin >> temp) {
    large = large + temp + " ";
    cout << large << endl;
  }
  
  return 0;
}
