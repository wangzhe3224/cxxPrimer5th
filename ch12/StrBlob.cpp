/*
  StrBlob.cpp
  
  Exercise rB.ob

  Created by Wang Zhe on Thu Aug 20 15:45:47 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/

#include "StrBlob.h"
#include <iostream>
using namespace std;

int main() {
    StrBlob s1;
    StrBlob s2 = {"1"}; // automatically conversion
    s1.push_back("first");
    s1.push_back("second");
    cout << s1.front() << endl;
    cout << s1.back() << endl;
    s1.front() = "another";
    cout << s1.front() << endl;
    return 0;
}
