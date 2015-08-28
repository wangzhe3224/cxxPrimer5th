/*
  ex05_20.cpp
  
  Exercise 05.20

  Created by Wang Zhe on Sun Aug 23 12:22:02 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;

int main() {
  string buff = "", str = " ";
  str = buff;
  int limit = 0; // the limitation of the input number
  while (cin >> buff) {
    if (str == buff) {
      cout << str << " occurs twice.\n"; 
      break;
    }
    else {
      str = buff;
      ++limit;
      if (limit == 5) {
	cout << "no word was repeated.\n";
	break;
      }
    }
  }
  return 0;
}
