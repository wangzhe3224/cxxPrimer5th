/*
  ex07_11.h
  
  Exercise 07.11

  Created by Wang Zhe on Wed Aug 26 13:33:44 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#ifndef ex07_02_h
#define ex07_02_h

#include <string>
#include <iostream>

using std::istream; using std::ostream;

struct Sales_data {
  // members
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;

  // method
  const std::string isbn() {return bookNo;}
  Sales_data & combine(const Sales_data&);

  // Constructors
  Sales_data() = default;
  Sales_data(const std::string &s)
  : bookNo(s) {}
  Sales_data(const std::string &s, unsigned n, double p)
  : bookNo(s), units_sold(n), revenue(p*n) {}
  Sales_data(std::istream &is);
};

// class member function
Sales_data& Sales_data::combine(const Sales_data& trans) {
  units_sold += trans.units_sold;
  revenue += trans.revenue;
  return *this;
}

// non member function
Sales_data add(const Sales_data &s1, const Sales_data &s2) {
  Sales_data tmp = s1;
  tmp.combine(s2);
  return tmp;
}

istream &read(istream &is, Sales_data &item) {
  double price = 0.0;
  is >> item.bookNo >> item.units_sold >> price;
  item.revenue = price * item.units_sold;
  return is;
}

ostream &print(ostream &os, const Sales_data &item) {
  os << item.bookNo << " " << item.units_sold << " "
     << item.revenue << "\n";
  return os;
}

// constructors
Sales_data::Sales_data(std::istream &is) {
  //double p;
  //is >> bookNo >> units_sold >> p;
  //revenue = p * units_sold;
  read(is, *this);
}
#endif
