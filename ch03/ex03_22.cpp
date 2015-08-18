#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main() {
  vector<string> svec;
  for (string line; getline(cin, line) ; svec.push_back(line));

  for (auto it = svec.begin(); it != svec.end(); ++it) {
    for (auto j = it->begin(); j != it->end(); ++j) {
      if (isalpha(*j))
	*j = toupper(*j);
      cout << *it << " ";
    }
  }

  return 0;
}
