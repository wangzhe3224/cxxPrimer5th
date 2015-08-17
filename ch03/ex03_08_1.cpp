#include <string>
#include <iostream>
using namespace std;
int main() {
  string str = "WangZhe";
  cout << str << endl;

  string::size_type n = str.size();
  while (n > 0) {
    str[n-1] = 'X';
    n--;
  }
  cout << str << endl;
  return 0;
}
