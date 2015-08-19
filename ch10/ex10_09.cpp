#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

template<typename seq>
void printSeq(const seq& s) {
  for (auto i : s)
    cout << i << " ";
  cout << endl;
}

void elminateDu(vector<string> &s) {
  sort(s.begin(), s.end());
  printSeq(s);

  auto newend = unique(s.begin(), s.end());
  printSeq(s);

  s.erase(newend, s.end());
  printSeq(s);
}

int main() {
  vector<string> str{"wss","saa", "a", "s", "t", "wss"};
  printSeq(str);

  elminateDu(str);

  return 0;
}
