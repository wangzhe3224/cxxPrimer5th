/*
  ex03_16.cpp
  
  Exercise 03.16

  Created by Wang Zhe on Tue Aug 18 00:21:35 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main() {
  vector<int> v1;
  vector<int> v2(10);  // *10 with value 0*
  vector<int> v3(10, 42); // *10 elements with value 1*
  vector<int> v4{10}; // *1 element with value 10*
  vector<int> v5{10, 42}; // *2 element with value 10 and 42*
  vector<string> v6{10}; // *10 elements*
  vector<string> v7{10, "hi"}; // *10 elements with value "hi"*

  //cout << v1.size() << endl;

  vector<vector<int>> VecInt = {v1,v2,v3,v4,v5};
  for (auto &i : VecInt) {
    cout << i.size() << "  ";
    int j = 0;
    if (i.size() != 0) {
      cout << i[j] << endl;
    }
    j++;
    //cout << i << endl;
  }
  vector<vector<string>> VecStr = {v6, v7};
  for (auto &i : VecStr) {
    cout << i.size() << endl;
    //    cout << i << endl;
  }
  return 0;
}
