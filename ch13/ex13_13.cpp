/*
  ex13_13.cpp
  
  Exercise 13.13

  Created by Wang Zhe on Mon Aug 17 12:42:57 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
//
//  ex13_13.cpp
//
//  Created by wangzhe on 16 Aug. 2015.
//  Copyright (c) 2015 wangzhe. All rights reserved.
//
//  A good way to understand copy-control members and constructors is to define a simple class with these members in which each member prints its name:
//  struct X {
//    X() {std::cout << "X()" << std::endl;}
//    X(const X&) {std::cout << "X(const X&)" << std::endl;}
//  };
//  Add the copy-assignment operator and destructor to X and write a program using X objects in various ways:
//  Pass them as nonreference and reference parameters;
//  dynamically allocate them;
//  put them in containers; and so forth.
//  Study the output until you are certain you understand when and why each copy-control member is used.
//  As you read the output, remember that the compiler can omit calls to the copy constructor.

#include <iostream>
#include <vector>
#include <initializer_list>

struct X {
  X() {std::cout << "X()" << std::endl;}
  X(const X&) {std::cout << "X(const X&)" << std::endl;}
  X& operator=(const X&) {std::cout << "X& operator=(const X&)" << std::endl;}
  ~X() {std::cout << "~X()" << std::endl;}
};

void func(const X &f1, X &f2) {
  std::vector<X> vector1;
  //vector1.reserve(2);
  vector1.push_back(f1);
  vector1.push_back(f2);
}

int main() {
  X *ps = new X;
  func(*ps, *ps);
  delete ps;
  
  return 0;
}
