/*
  ex07_31.h
  
  Exercise 07.31

  Created by Wang Zhe on Thu Aug 27 09:07:00 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#ifndef ex07_31_h
#define ex07_31_h

class Y;

class X {
private:
  Y *yp;
};

class Y {
  X x;
};

#endif
