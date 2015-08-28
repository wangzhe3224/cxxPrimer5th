/*
  ex07_27.cpp
  
  Exercise 07.27

  Created by Wang Zhe on Thu Aug 27 00:01:45 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include "ex07_27.h"
#include <iostream>
using std::cout;
int main() {
  Screen myScreen(5, 5, 'X');
  myScreen.move(4,0).set('#').display(cout);
  cout << "\n";
  myScreen.display(cout);
  cout << "\n";
}
/*
  Output:
  XXXXXXXXXXXXXXXXXXXX#XXXX
  XXXXXXXXXXXXXXXXXXXX#XXXX
*/

