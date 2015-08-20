#include <map>
#include <iostream>
#include <string>
using namespace std;

int main() {
  map<string, int> word_count = {{"wang",1}, {"zhe", 2}};
  map<string, int>::iterator it = word_count.begin();

  while (it != word_count.end()) {
    cout << it->first << " occurs "
	 << it->second << " times.\n";
    ++it;
  }
}
