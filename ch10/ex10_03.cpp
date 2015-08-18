#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  vector<int> ivec(10,10);
  int sum = accumulate(ivec.begin(), ivec.end(), 0);
  cout << sum << endl;
  return 0;
}
