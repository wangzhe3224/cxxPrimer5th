/*
  ex07_23.h
  
  Exercise 07.23

  Created by Wang Zhe on Wed Aug 26 17:17:49 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#ifndef ex07_23_h
#define ex07_23_h

#include <string>

class Screen {
public:
  typedef std::string::size_type pos;
  // constructor
  Screen() = default;
Screen(pos ht, pos wd, char c)
    : height(ht), width(wd), content(ht*wd, c) {}
Screen(pos ht, pos wd, int n)
    : height(ht), width(wd), content(n, " ") {}
  // member functions
  const char get() {
    // return the content of the current cursor posiotion.
    // implicit inline function
    return content[cursor];
  }

  inline const char get(pos r, pos c);// overload get()
  Screen &move(pos r, pos c); // move the screen
  
private:
  pos cursor;
  pos height = 0, width = 0;
  std::string content;
};

#endif
