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
