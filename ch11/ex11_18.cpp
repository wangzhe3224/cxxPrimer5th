/*
  ex11_18.cpp
  
  Exercise 11.18

  Created by Wang Zhe on Thu Aug 20 13:34:33 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <map>
#include <iostream>
#include <string>
using namespace std;

int main() {
  map<string, int> word_count = {{"wang",1}, {"zhe", 2}};
  map<string, int>::iterator it = word_count.begin();

  while (it != word_count.end()) {
    cout << it->first << " occurs "
	 << it->second << " times.\n";
    ++it;
  }
}
