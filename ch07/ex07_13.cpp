/*
  ex07_13.cpp
  
  Exercise 07.13

  Created by Wang Zhe on Wed Aug 26 14:20:24 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <string>

#include "ex07_12.h"
using std::string; using std::cout; using std::cin;

int main()
{
  // Sales_data total;
  Sales_data total(std::cin);
  if (!total.isbn().empty())
  {
    //Sales_data trans;
    std::istream &is = std::cin;
    
    while (is) {
      Sales_data trans(is);
      if (total.isbn() == trans.isbn())
        total.combine(trans);
      else {
        print(std::cout, total) << std::endl;
        total = trans;
      }
    }
    //print(std::cout, total) << std::endl;
  }
  else
  {
    std::cerr << "No data." << std::endl;
    return -1;
  }
  
  return 0;
}

