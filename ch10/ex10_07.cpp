/*
  ex10_07.cpp
  
  Exercise 10.07

  Created by Wang Zhe on Tue Aug 18 23:17:03 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

template<typename Sequence>
void print(Sequence const& seq)
{
  for (const auto& i : seq)
    cout << i << " ";
  cout << endl;
}

int main()
{
  // (a)
  vector<int> vec;
  list<int> lst;
  int i;
  while (cin >> i)
    lst.push_back(i);
  vec.resize(lst.size()); // add this..
  copy(lst.cbegin(), lst.cend(), vec.begin());

  // (b)
  vector<int> v;
  //v.reserve(10); v.size() is still 0
  v.resize(10); 
  fill_n(v.begin(), 10, 0);
  // use `fill_n(back_inserter(v), 10, 0)`

  print(v);
  print(vec);
}
