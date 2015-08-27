#ifndef ex07_04_h
#define ex07_04_h

#include <string>

class Person {
private:
  std::string name;
  std::string address;
public:
  const std::string getName() { return name; }
  const std::string getAdd() { return address; }
};

#endif
