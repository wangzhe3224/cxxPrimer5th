/*
  ex03_20.cpp
  
  Exercise 03.20

  Created by Wang Zhe on Tue Aug 18 09:00:17 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <vector>
#include <iostream>
using namespace std;

int main() {
  vector<int> ivec;
  int tmp;
  cout << "Enter integer(q to qiut.):" << endl;
  while (cin >> tmp) {
    ivec.push_back(tmp);
  }

  // problem#1
  for (decltype(ivec.size()) i = 1; i < ivec.size(); ++i) {
    cout << ivec[i-1]+ivec[i] << endl;
    cout << ivec[i-1]+ivec[ivec.size()-i+1] << endl;
  }
  return 0;
}
