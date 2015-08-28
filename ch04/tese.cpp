/*
  tese.cpp
  
  Exercise se.cp

  Created by Wang Zhe on Sat Aug 22 21:19:47 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>

int main() {
	int x[10]; int *p = x;
	std::cout << sizeof(p)/sizeof(*p) << "\n";
	return 0;
}
