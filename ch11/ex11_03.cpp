/*
  ex11_03.cpp
  
  Exercise 11.03

  Created by Wang Zhe on Wed Aug 19 18:33:43 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  map<string, size_t> words;
  string word;
  while (cin >> word) {
    ++words[word];
  }
  for (const auto &w : words) {
    cout << w.first << " occurs " << w.second
	 << ((w.second <= 1) ? " time" : " times") << endl;
  }
  return 0;
}
