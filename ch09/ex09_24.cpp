/*
  ex09_24.cpp
  
  Exercise 09.24

  Created by Wang Zhe on Fri Aug 28 21:03:53 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
/*
  ex09_24.cpp
  
  Exercise 09.24

  Created by Wang Zhe on Tue Aug 18 16:34:23 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <vector>

int main()
{
  std::vector<int> v;
  std::cout << v.at(0);       // terminating with uncaught exception of type std::out_of_range
  std::cout << v[0];          // Segmentation fault: 11
  std::cout << v.front();     // Segmentation fault: 11
  std::cout << *v.begin();    // Segmentation fault: 11
  return 0;
}
