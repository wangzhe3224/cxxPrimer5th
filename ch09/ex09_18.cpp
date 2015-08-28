/*
  ex09_18.cpp
  
  Exercise 09.18

  Created by Wang Zhe on Fri Aug 28 21:03:53 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
/*
  ex09_18.cpp
  
  Exercise 09.18

  Created by Wang Zhe on Tue Aug 18 16:06:20 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <vector>
#include <list>
#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main() {
  deque<string> str;
  string tmp;
  int i = 10; // 10 elements..
  while (i) {
    cin >> tmp;
    str.push_back(tmp);
    i--;
  }

  for (auto i = str.cbegin(); i != str.cend(); ++i)
    cout << *i << " ";
  cout << endl;
  return 0;
}
