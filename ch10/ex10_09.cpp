/*
  ex10_09.cpp
  
  Exercise 10.09

  Created by Wang Zhe on Fri Aug 28 21:03:53 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
/*
  ex10_09.cpp
  
  Exercise 10.09

  Created by Wang Zhe on Wed Aug 19 10:25:44 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

template<typename seq>
void printSeq(const seq& s) {
  for (auto i : s)
    cout << i << " ";
  cout << endl;
}

void elminateDu(vector<string> &s) {
  sort(s.begin(), s.end());
  printSeq(s);

  auto newend = unique(s.begin(), s.end());
  printSeq(s);

  s.erase(newend, s.end());
  printSeq(s);
}

int main() {
  vector<string> str{"wss","saa", "a", "s", "t", "wss"};
  printSeq(str);

  elminateDu(str);

  return 0;
}
