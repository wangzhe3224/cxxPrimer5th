/*
  ex10_22.cpp
  
  Exercise 10.22

  Created by Wang Zhe on Fri Aug 28 21:03:53 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
/*
  ex10_22.cpp
  
  Exercise 10.22

  Created by Wang Zhe on Wed Aug 19 15:09:23 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using std::string;
using namespace std::placeholders;

bool lessthan(const string &s, string::size_type sz) {
  return s.size() <= sz;
}

int main() {
  std::vector<string> svec{"wang", "zhe", "123123123", "wangzhe", "09877652"};
  auto Delessthan = bind(lessthan, _1, 6);
  auto number =  count_if(svec.cbegin(), svec .cend(), Delessthan);
  std::cout << number << "\n";

  return 0;
}

