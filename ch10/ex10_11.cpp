#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

inline bool
isShorter(const string &s1, const string &s2) {
  return s1.size() < s2.size();
}

void
elimDups(vector<string> &s) {
  sort(s.begin(), s.end());
  auto newend = unique(s.begin(), s.end());
  s.erase(newend, s.end());
}

template<typename seq>
inline ostream&
printSeq(const seq& s) {
  for (auto i : s)
    cout << i << " ";
  cout << endl;
  return cout;
}

int main()
{
  vector<string> v{
    "123", "12345", "123", "Hi", "zhe", "wang"};
  elimDups(v);
  stable_sort(v.begin(), v.end(), isShorter);
  printSeq(v);
  
  return 0;
}
