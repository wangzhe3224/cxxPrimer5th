#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main() {
  vector<int> ivec{1,2,3,4,5,6,7,8,9,10};
  for (auto i = ivec.begin(); i != ivec.end(); ++i)
    *i *= 2;
  for (auto i : ivec)
    cout << i << " ";
  cout << endl;

  return 0;
}
