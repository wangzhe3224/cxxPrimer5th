/*
  ex09_26.cpp
  
  Exercise 09.26

  Created by Wang Zhe on Fri Aug 28 21:03:53 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
/*
  ex09_26.cpp
  
  Exercise 09.26

  Created by Wang Zhe on Tue Aug 18 16:54:53 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
  int ai[] = {0,1,1,2, 3, 5, 8, 13, 21, 55, 89};
  vector<int> vec(ai, end(ai));
  list<int> lst(vec.begin(), vec.end());
  
  for(auto it = lst.begin();  it != lst.end(); ) {
    if(*it%2 == 0)
      it = lst.erase(it); // erase returns an iterator denotes to the next element of the erased element
    else
      ++it;
  }

  cout << "list : ";
  for(auto i : lst)   cout << i << " ";
  cout << "\nvector : ";
  for(auto i : vec)   cout << i << " ";
  cout << std::endl;
  return 0;
}
