#ifndef ex07_22_h
#define ex07_22_h

#include <string>
#include <iostream>

class Person {
  // friends functions
  friend std::istream &read(std::istream &is, Person &p);
  friend std::ostream &print(std::ostream &os, const Person &p);
private:
  std::string _name;
  std::string _address;
public:
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

std::ostream &print(std::ostream &os, const Person &p) {
  os << p._name << " " << p._address << "\n";
}

Person::Person(std::string &name, std::string &address) {
  _name = name;
  _address = address;
}

#endif
