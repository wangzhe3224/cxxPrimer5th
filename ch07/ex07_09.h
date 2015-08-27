#ifndef ex07_04_h
#define ex07_04_h

#include <string>
#include <iostream>

class Person {
public:
  std::string name;
  std::string address;
  const std::string getName() { return _name; }
  const std::string getAdd() { return address; }
  Person()
      :_name("null"), _address("null") {}
  Person(std::string &name, std::string &address);
};

std::istream &read(std::istream &is, Person &p) {
  std::cout << "Please enter the _name and address:\n";
  is >> p._name >> p.address;
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
