/*
  ex06_32.cpp
  
  Exercise 06.32

  Created by Wang Zhe on Mon Aug 24 22:24:15 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/

int &get(int *arry, int index) { return arry[index]; }
int main() {
    int ia[10];
    for (int i = 0; i != 10; ++i)
        get(ia, i) = i;
}
