#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
  map<string, size_t> words;
  string w;
  while (cin >> w) {
    for (auto &c : w) // all transfer to lower case
      c = tolower(c);
    w.erase(remove_if(w.begin(), w.end(), ::ispunct), w.end());
    //remove_if(w.begin(), w.end(), ::ispunct);
    /*
      the output of above statement is not right.
      e.g. 
      input:
      wang Wang Wang.d
      output:
      wang shows 2 times.
      wangdd shows 1 time. // here should be wangd shows 1 time.
      *********************************************************
      Here is a explanatio:
      pend = std::remove_if (pbegin, pend, IsOdd);   // 2 4 6 8 ? ? ? ? ?
                                                     // ^       ^
      remove_of return a iterator denoting the last element not removed.
      but remove_of doesn't change the size of string..
      Algorithm never add or delete element, just reorder..
     */
    ++words[w];
  }
  for (const auto &i : words)
    std::cout << i.first << " shows " << i.second
	      << ((i.second > 1) ? " times" : " time") << "\n";
  
  return 0;
}
