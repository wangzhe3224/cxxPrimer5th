#ifndef ex07_02_h
#define ex07_02_h

#include <string>
#include <iostream>

using std::istream; using std::ostream;

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

#endif
