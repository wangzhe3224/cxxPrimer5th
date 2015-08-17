#include <string>
#include <iostream>
using namespace std;
int main() {
  string str = "WangZhe";
  cout << str << endl;
  for (char &c : str)
    c = 'X';
  cout << str << endl;
  return 0;
}
