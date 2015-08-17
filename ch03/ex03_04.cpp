#include <iostream>
#include <string>
using std::string;
using namespace std;

int main() {
  string s1, s2;
  while (cin >> s1 >> s2) {
    if (s1 == s2) {
      cout << "Equal." << endl;
      break; // equal then exit...
    }
    else if (s1 > s2)
      cout << s1 << endl;
    else
      cout << s2 << endl;
  }
  
  return 0;
}
