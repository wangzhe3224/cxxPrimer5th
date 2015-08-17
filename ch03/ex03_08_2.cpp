#include <string>
#include <iostream>
using namespace std;
int main() {
  string str = "WangZhe";
  cout << str << endl;

  for (decltype(str.size()) index = 0; index != str.size(); index++) {
    str[index] = 'X';
  }
  cout << str << endl;

  string s;
  cout << s[0] << endl;
  return 0;
}
