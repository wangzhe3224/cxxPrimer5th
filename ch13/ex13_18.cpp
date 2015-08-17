#include <iostream>
#include <string>
static int base = 0;
class Employee {
public:
  std::string name;
  int id;
public:
 
  Employee() {name = "NullName", id = base++;}
  Employee(const std::string &s){
    name = s;
    id = base++;
  }
  Employee(const Employee &cp) {
    name = cp.name;
    id = cp.id + 1;
  }
};

int main() {
  Employee a,b;
  Employee c(b);
  std::cout << a.id << std::endl;
  std::cout << b.id << std::endl;
  std::cout << c.id << std::endl;
  return 0;
}
