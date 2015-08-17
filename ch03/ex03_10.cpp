#include <string>
#include <iostream>
#include <cctype>
using namespace std;
int main() {
  string str;
  getline(cin, str);
  for (auto &c : str) {
    if (!ispunct(c))
      cout << c;
  }
  cout << endl;
  return 0;
}
