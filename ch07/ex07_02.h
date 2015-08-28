/*
  ex07_02.h
  
  Exercise 07.02

  Created by Wang Zhe on Wed Aug 26 09:49:12 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#ifndef ex07_02_h
#define ex07_02_h

#include <string>

struct Sales_data {
  // members
  std::string bookNo;
  unsigned units_sold;
  double revenue;

  // method
  const std::string isbn() {return bookNo;}
  Sales_data & combine(const Sales_data&);
};

Sales_data& Sales_data::combine(const Sales_data& trans) {
  units_sold += trans.units_sold;
  revenue += trans.revenue;
  return *this;
}

#endif
