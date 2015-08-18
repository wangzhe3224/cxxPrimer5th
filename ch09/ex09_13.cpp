#include <vector>
#include <list>
#include <iostream>
#include <string>

using namespace std;

int main() {
  list<int> ilst{1,2,3,4,5};
  vector<int> ivec{5,4,3,2,1};
  vector<double> dvec(ilst.begin(), ilst.end());
  for (auto i : ilst)
    cout << i << " ";
  cout << endl;
  for (auto i : dvec)
    cout << i << " ";
  vector<double> dvec2(ivec.begin(), ivec.end());
  for (auto i : dvec2)
    cout << i << " ";
  cout << endl;

  return 0;

}
