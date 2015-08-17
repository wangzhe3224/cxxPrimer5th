#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  string line, str;
  // by line
  getline(cin, line);
  cout << line << endl;
  // by word
  while (cin >> str) {
    cout << str << endl;
  }
  return 0;
}
