#include <vector>
#include <list>
#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main() {
  deque<string> str;
  string tmp;
  int i = 10; // 10 elements..
  while (i) {
    cin >> tmp;
    str.push_back(tmp);
    i--;
  }

  for (auto i = str.cbegin(); i != str.cend(); ++i)
    cout << *i << " ";
  cout << endl;
  return 0;
}
