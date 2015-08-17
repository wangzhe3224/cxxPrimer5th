//
// ex13_08.h
//
// Created by wangzhe on 17 AGU, 2015
// Copyright (c) 2015 wangzhe. All rights reserved.
//
// Given the following sketch of a class, write a
// copy constructor that copies all the members.
// Your constructor should dynamically allocate a new string and
// copy the object to which ps points,
// rather than copying ps itself.

#ifndef EX13_05_H
#define EX13_05_H

#include <string>

class HasPtr {
 private:
  std::string *ps;
  int i;
 public:
 HasPtr(const std::string &s = std::string()):
  ps(new std::string(s)), i(0) {}
 HasPtr(const HasPtr &cp):
  ps(new std::string(*cp.ps)), i(cp.i) {}
  HasPtr& operator=(const HasPtr &cp) {
    std::string *newPt = new std::string(*cp.ps);
    delete ps;
    ps = newPt;
    i = cp.i;
    return *this;
  }
};

#endif
