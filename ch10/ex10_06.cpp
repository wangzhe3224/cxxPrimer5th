/*
  ex10_06.cpp
  
  Exercise 10.06

  Created by Wang Zhe on Tue Aug 18 23:06:15 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using std::vector; using std::cout; using std::endl; using std::fill_n;

int main()
{
  vector<int> vec{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  fill_n(vec.begin(), vec.size(), 0);
  
  for (auto i : vec)
    cout << i << " ";
  cout << endl;
}
