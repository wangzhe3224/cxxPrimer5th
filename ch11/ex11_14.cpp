/*
  ex11_14.cpp
  
  Exercise 11.14

  Created by Wang Zhe on Thu Aug 20 15:24:32 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <map>
#include <string>
#include <vector>

using std::ostream; using std::cout;
using std::cin; using std::endl; using std::string;
using std::make_pair; using std::pair;
using std::vector; using std::map; 

int main() {
  //using child = pair<string, string>;
  //using children = vector<string, child>;
  map<string, vector<pair<string,string>>> names;
  string familyname, childname, birth;
  cout << "Input the family name:\n";
  while (cin >> familyname && familyname != "q") {
    cout << "Input the child name and birthday:\n";
    while (cin >> childname >> birth && birth != "q") {
      names[familyname].push_back(make_pair(childname, birth));
    }
    cout << "Input the family name:\n";
  }

  for (const auto &i : names) {
    cout << i.first << ": \n";
    for (const auto &j : i.second)
      cout << j.first << " " << j.second << "\n";
  }
  
  return 0;
}
