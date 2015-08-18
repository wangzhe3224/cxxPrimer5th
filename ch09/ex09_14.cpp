#include <vector>
#include <list>
#include <iostream>
#include <string>

using namespace std;

int main() {
  vector<string> str;
  list<const char*> ch{"a", "b"};
  str.assign(ch.cbegin(), ch.cend());

  for (auto &ch : str)
    cout << ch << endl;
  return 0;
}
