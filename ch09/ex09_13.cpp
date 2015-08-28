/*
  ex09_13.cpp
  
  Exercise 09.13

  Created by Wang Zhe on Fri Aug 28 21:03:53 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
/*
  ex09_13.cpp
  
  Exercise 09.13

  Created by Wang Zhe on Tue Aug 18 15:41:04 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <vector>
#include <list>
#include <iostream>
#include <string>

using namespace std;

int main() {
  list<int> ilst{1,2,3,4,5};
  vector<int> ivec{5,4,3,2,1};
  vector<double> dvec(ilst.begin(), ilst.end());
  for (auto i : ilst)
    cout << i << " ";
  cout << endl;
  for (auto i : dvec)
    cout << i << " ";
  vector<double> dvec2(ivec.begin(), ivec.end());
  for (auto i : dvec2)
    cout << i << " ";
  cout << endl;

  return 0;

}
