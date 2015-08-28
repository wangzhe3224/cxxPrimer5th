/*
  ex10_01.cpp
  
  Exercise 10.01

  Created by Wang Zhe on Fri Aug 28 21:03:53 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
/*
  ex10_01.cpp
  
  Exercise 10.01

  Created by Wang Zhe on Tue Aug 18 22:38:19 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  vector<int> ivec{1,2,1,2,3,4,5,6,7};
  int cunt;
  cunt = count(ivec.begin(),ivec.end(),1);
  cout << cunt << endl;
  return 0;
}
