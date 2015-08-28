/*
  ex07_01.cpp
  
  Exercise 07.01

  Created by Wang Zhe on Wed Aug 26 08:09:07 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <string>

using std::string; using std::cout; using std::cin;

struct Sales_data
{
  string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

int main() {
  Sales_data  total;
  if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
    Sales_data trans;
    while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
      if (total.bookNo == trans.bookNo) {
        total.units_sold += trans.units_sold;
        total.revenue += trans.revenue;
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
