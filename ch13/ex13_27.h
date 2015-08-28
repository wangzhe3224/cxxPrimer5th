/*
  ex13_27.h
  
  Exercise 13.27

  Created by Wang Zhe on Mon Aug 17 15:11:48 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#idndef EX13_27_H
#define EX13_27_H

#include <string>

class HasPtr {
 private:
  std::string *ps;
  int id;
  size_t *use;
 public:
 HasPtr(const std::string &s = std::string()): ps(new std::string(s)), id(0), use(new size_t(1)) {}
 HasPtr(const HasPtr &cp): ps(cp.ps), id(cp.id)
};

#endif
