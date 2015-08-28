/*
  ex11_26.cpp
  
  Exercise 11.26

  Created by Wang Zhe on Thu Aug 20 14:58:57 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <map>
#include <string>
#include <typeinfo>

int main() {
  std::map<int, std::string> m = { { 1,"ss" },{ 2,"sz" } };
  using KeyType = std::map<int, std::string>::key_type;
  
  std::cout << "type to subscript: " << typeid(KeyType).name() << std::endl;
  std::cout << "returned from the subscript operator: " << typeid(decltype(m[1])).name() << std::endl;
  return 0;
}
