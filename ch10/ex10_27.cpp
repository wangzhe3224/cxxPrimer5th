/*
  ex10_27.cpp
  
  Exercise 10.27

  Created by Wang Zhe on Fri Aug 28 21:03:53 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
/*
  ex10_27.cpp
  
  Exercise 10.27

  Created by Wang Zhe on Wed Aug 19 16:01:50 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

int main() {
  std::vector<int> vec{1,1,3,3,5,5,7,7,9};
  std::list<int> lst;

  std::unique_copy(vec.begin(), vec.end(), back_inserter(lst));
  for (auto i : lst)
    std::cout << i << " ";
  std::cout << std::endl;
  return 0;
}
