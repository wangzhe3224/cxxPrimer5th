/*
  ex10_19.cpp
  
  Exercise 10.19

  Created by Wang Zhe on Fri Aug 28 21:03:53 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
/*
  ex10_19.cpp
  
  Exercise 10.19

  Created by Wang Zhe on Wed Aug 19 12:49:19 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void elimDup(std::vector<std::string> &s)
{
  std::sort(s.begin(), s.end());
  auto new_end = std::unique(s.begin(), s.end());
  s.erase(new_end, s.end());
}

void biggies(std::vector<std::string> &vs, std::size_t sz)
{
  using std::string;
  
  elimDup(vs);

  // sort by size, but maintain alphabetical order for same size.
  std::stable_sort(vs.begin(), vs.end(),[](string const& lhs, string const& rhs){
      return lhs.size() < rhs.size();
    });
  
  // get an iterator to the first one whose size() is >= sz
  //auto wc = std::find_if(vs.begin(), vs.end(),[sz](string const& s){
  //return s.size() >= sz;
  //});

  // using partition()
  //auto new_end = std::partition(vs.begin(), vs.end(),
  //				[sz](string &s){ return s.size() >= sz; });

  // using stable_partition() this will keep the original order in the sequence.
  auto new_end = std::stable_partition(vs.begin(), vs.end(),
				       [sz](string &s){ return s.size() >= sz; });
  
  // print the biggies
  std::for_each(vs.begin(), new_end, [](const string &s){
      std::cout << s << " ";
    }); 
}

int main() {
  std::vector<std::string> svec {
    "wang", "Zhe", "1234", "32233" , "adfeasdf"
  };

  biggies(svec, 4);
  std::cout << "\n";
  
  return 0;
}
