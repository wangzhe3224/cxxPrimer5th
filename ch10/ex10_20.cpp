/*
  ex10_20.cpp
  
  Exercise 10.20

  Created by Wang Zhe on Fri Aug 28 21:03:53 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
/*
  ex10_20.cpp
  
  Exercise 10.20

  Created by Wang Zhe on Wed Aug 19 13:11:08 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::size_t greater(std::vector<std::string> s, std::size_t n) {
  return count_if(s.begin(), s.end(),
		  [=](const std::string &s){ return s.size()>n; });
}

int main() {
  std::vector<std::string> svec {
    "wang", "Zhe", "1234", "32233" , "adfeasdf"
  };
  
  std::cout << greater(svec, 6) << "\n";
  
  return 0;
}
