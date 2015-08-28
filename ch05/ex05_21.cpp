/*
  ex05_21.cpp
  
  Exercise 05.21

  Created by Wang Zhe on Sun Aug 23 12:35:48 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
  string prev = " ", curr = " ";
  bool flag = true;
  while (cin >> curr) {
    if (isupper(curr[0])) {
      if (prev == curr) {
	cout << "twice.\n";
	flag = false;
	break;
      }
      else {
	prev = curr;
	continue;
      }
    }
    else {
      prev = curr;
      continue;
    }
  }

  if (flag)
    cout << "no word was repeated.\n";
  return 0;
}
