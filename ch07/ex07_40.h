/*
  ex07_40.h
  
  Exercise 07.40

  Created by Wang Zhe on Thu Aug 27 15:42:41 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#ifndef ex07_40_h
#define ex07_40_h
#include <iostream>

class Date {
public:
  void show() const;
  Date &set(unsigned y, unsigned m, unsigned d) { _set(y,m,d); return *this; };
  // constructor
  Date(unsigned y = 1900, unsigned m = 1, unsigned d = 1);
private:
  unsigned _year, _month, _day;
  bool isLeap(unsigned y) { return y%400 == 0 ? true : false; }
  void _set(unsigned, unsigned, unsigned);
};

inline
void Date::show() const {
  std::cout << _year << "-" << _month << "-" << _day << "\n";
}

inline
Date::Date(unsigned y, unsigned m, unsigned d) {
  _set(y,m,d);
}

void Date::_set(unsigned y, unsigned m, unsigned d) {
  bool by = false, bm = false, bd = false;
  if (m > 12) {
    std::cout << "month should less than 12.";
    _month = 12;
    bm = true;
  }
  else if (m <= 0) {
    _month = 1;
    bm = true;
  }
  if (m == 2) {
    if (isLeap(y)) {
      if (d > 29) {
        std::cout << y << " is leap year, day should less than 29\n";
        _day = 29;
        bd = true;
      }
    }
    else {
      if (d > 28) {
        std::cout << y << " is not leap year, day should less than 28\n";
        _day = 28;
        bd = true;
      }
    }
  }
  if (d > 31) {
    _day = 31;
    bd = true;
  }
  
  _year = y;
  if (!bm)
    _month = m;
  if (!bd)
    _day = d;
}

#endif
