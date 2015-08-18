#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  vector<int> ivec{1,2,1,2,3,4,5,6,7};
  int cunt;
  cunt = count(ivec.begin(),ivec.end(),1);
  cout << cunt << endl;
  return 0;
}
