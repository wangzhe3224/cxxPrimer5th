#include <iostream>

int main() {
  int i = 0, &r = i;
  auto a = r; // a is int type

  const int ci = i, &cr = ci;
  auto b = ci; // b is int type (top-level const in ci is ignored.)
  auto c = cr; // c is int type (ditto)
  auto d = &i; // d is point-to int type
  auto e = &ci;// e is const point-to int type(& of a const object is low-level const, so the const is kept)

  const auto f = ci; // f is const int type (const before auto keeps the top-level const)
  auto &g = ci; // g is const reference-to int type which is bound to ci

  a = 42;
  b = 42;
  c = 42;
  *d = 42;
  //*e = 42;
  
  return 0;
}
