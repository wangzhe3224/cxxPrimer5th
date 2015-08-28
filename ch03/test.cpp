/*
  test.cpp
  
  Exercise st.cp

  Created by Wang Zhe on Tue Aug 18 10:54:11 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main(){
  vector<string> svec;
  string tmp;
  int i = 5;
  while (i) {
    cin >> tmp;
    svec.push_back(tmp);
    --i;
  }

  for (auto it = svec.cbegin();
       it != svec.cend() && !it->empty(); ++it)
    cout << *it << endl;

  return 0;
}
