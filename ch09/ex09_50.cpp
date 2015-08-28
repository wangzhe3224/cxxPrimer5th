/*
  ex09_50.cpp
  
  Exercise 09.50

  Created by Wang Zhe on Fri Aug 28 21:03:53 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
/*
  ex09_50.cpp
  
  Exercise 09.50

  Created by Wang Zhe on Tue Aug 18 17:14:04 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int sumOfInt(vector<string> const& v) {
  int sum = 0;
  for (auto const& s : v)
    sum += stoi(s);
  return sum;
}

float sumOfFloat(vector<string> const& v) {
  float sum;
  for (auto const& s : v)
    sum += stof(s);
  return sum;
}

int main() {
  vector<string> v = { "1", "2", "3", "4.5" };
  cout << sumOfInt(v) << endl;
  cout << sumOfFloat(v) << endl;
  return 0;
}
