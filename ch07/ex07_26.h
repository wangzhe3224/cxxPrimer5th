#ifndef ex07_26_h
#define ex07_26_h

#include <string>
#include <iostream>

using std::istream; using std::ostream;

class Sales_data {
  // friends
  friend Sales_data add(const Sales_data &s1, const Sales_data &s2);
  friend istream &read(istream &is, Sales_data &item);
  friend ostream &print(ostream &os, const Sales_data &item);
  
  // members
private:
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;

  // inline function (implicit inline function)
  double avg_price() { return units_sold ? revenue/units_sold : 0; }
  
public:
  // method
  //const std::string isbn() {return bookNo;}
  const std::string isbn() { return bookNo; };
  Sales_data & combine(const Sales_data&);

  // Constructors
  Sales_data() = default;
  explicit Sales_data(const std::string &s)
  : bookNo(s) {}
  explicit Sales_data(const std::string &s, unsigned n, double p)
  : bookNo(s), units_sold(n), revenue(p*n) {}
  Sales_data(std::istream &is) { read(is, *this); };
};

// class member function
Sales_data& Sales_data::combine(const Sales_data& trans) {
  units_sold += trans.units_sold;
  revenue += trans.revenue;
  return *this;
}

// non member friend function
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
