/*
  ex07_40.cpp
  
  Exercise 07.40

  Created by Wang Zhe on Thu Aug 27 15:41:47 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include "ex07_40.h"

int main() {
  Date da1;
  da1.show();
  da1.set(1988, 04, 19).show();
  Date da2(2000, 02, 30);
  da2.show();
  da2.set(1988, 02, 29).show();
  return 0;
}
