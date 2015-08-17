#include <iostream>
#include <string>
using namespace std;

int main() {
  string temp, large;
  while (cin >> temp) {
    large = large + temp + " ";
    cout << large << endl;
  }
  
  return 0;
}
