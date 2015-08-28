/*
  ex07_03.cpp
  
  Exercise 07.03

  Created by Wang Zhe on Wed Aug 26 09:51:27 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <string>

#include "ex07_02.h"
using std::string; using std::cout; using std::cin;

int main() {
  Sales_data  total;
  if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
    Sales_data trans;
    while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
      if (total.bookNo == trans.bookNo) {
        total.combine(trans);
      }
      else {
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << "\n";
        total = trans;
      }
    }
    cout << total.bookNo << " " << total.units_sold << " " << total.revenue << "\n";
  }
  else {
    std::cerr << "NO data.\n";
    return -1;
  }

  return 0;
}
