/*
  ex09_14.cpp
  
  Exercise 09.14

  Created by Wang Zhe on Fri Aug 28 21:03:53 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
/*
  ex09_14.cpp
  
  Exercise 09.14

  Created by Wang Zhe on Tue Aug 18 15:48:44 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <vector>
#include <list>
#include <iostream>
#include <string>

using namespace std;

int main() {
  vector<string> str;
  list<const char*> ch{"a", "b"};
  str.assign(ch.cbegin(), ch.cend());

  for (auto &ch : str)
    cout << ch << endl;
  return 0;
}
