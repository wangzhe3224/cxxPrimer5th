/*
  ex07_11.cpp
  
  Exercise 07.11

  Created by Wang Zhe on Wed Aug 26 13:29:33 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
# include "ex07_11.h"

int main() {
  Sales_data s1;
  Sales_data s2("abc");
  Sales_data s3("wang", 10, 200);
  Sales_data s4(std::cin);

  print(std::cout, s1);
  print(std::cout, s2);
  print(std::cout, s3);
  print(std::cout, s4);

  return 0;
}
