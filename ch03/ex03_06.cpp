/*
  ex03_06.cpp
  
  Exercise 03.06

  Created by Wang Zhe on Mon Aug 17 21:33:38 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <string>
#include <iostream>
using namespace std;
int main() {
  string str = "WangZhe";
  cout << str << endl;
  for (char &c : str)
    c = 'X';
  cout << str << endl;
  return 0;
}
