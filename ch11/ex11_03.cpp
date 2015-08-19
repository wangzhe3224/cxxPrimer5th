#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  map<string, size_t> words;
  string word;
  while (cin >> word) {
    ++words[word];
  }
  for (const auto &w : words) {
    cout << w.first << " occurs " << w.second
	 << ((w.second <= 1) ? " time" : " times") << endl;
  }
  return 0;
}
