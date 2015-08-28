/*
  ex10_42.cpp
  
  Exercise 10.42

  Created by Wang Zhe on Fri Aug 28 21:03:53 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
/*
  ex10_42.cpp
  
  Exercise 10.42

  Created by Wang Zhe on Wed Aug 19 16:41:15 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <string>
#include <list>

using std::string; using std::list;

void elimDups(list<string> &words)
{
  words.sort();
  words.unique();
}

int main()
{
  list<string> l = { "aa", "aa", "aa", "aa", "aasss", "aa" };
  elimDups(l);
  for (const auto& e : l)
    std::cout << e << " ";
  std::cout << std::endl;
}

