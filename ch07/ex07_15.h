/*
  ex07_15.h
  
  Exercise 07.15

  Created by Wang Zhe on Wed Aug 26 14:59:09 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#ifndef ex07_15_h
#define ex07_15_h

#include <string>
#include <iostream>

class Person {
public:
  std::string _name;
  std::string _address;
  const std::string getName() { return _name; }
  const std::string getAdd() { return _address; }
  Person()
      :_name("null"), _address("null") {}
  Person(std::string &name, std::string &address);
};

std::istream &read(std::istream &is, Person &p) {
  std::cout << "Please enter the _name and address:\n";
  is >> p._name >> p._address;
  return is;
}

std::ostream &ptint(std::ostream &os, const Person &p) {
  os << p._name << " " << p._address << "\n";
}

Person::Person(std::string &name, std::string &address) {
  _name = name;
  _address = address;
}

#endif
