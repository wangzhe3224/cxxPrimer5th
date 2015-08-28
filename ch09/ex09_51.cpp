/*
  ex09_51.cpp
  
  Exercise 09.51

  Created by Wang Zhe on Fri Aug 28 21:03:53 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
/*
  ex09_51.cpp
  
  Exercise 09.51

  Created by Wang Zhe on Tue Aug 18 17:49:46 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
  string expression{"This is (wangzhe)."};
  bool bSeen = false;
  stack<char> stk;
  for (const auto &s : expression) {
    if (s == '(') {
      bSeen = true; continue;
    }
    else if (s == ')')
      bSeen = false;
    
    if (bSeen)
      stk.push(s);
  }
    
  string repstr;
  while (!stk.empty()) {
    repstr += stk.top();
    stk.pop();
  }
  
  expression.replace(expression.find("(")+1, repstr.size(), repstr);
  
  cout << expression << endl;
  
  return 0;
}
