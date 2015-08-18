#include <vector>
#include <list>
#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main() {
  list<int> lst{1,2,3,4,5,6,7,8,9,10};
  deque<int> odd, even;
  for (auto i : lst) {
    if (i%2 == 0)
      even.push_back(i);
    else
      odd.push_back(i);
  }

  for (auto i : odd)
    cout << i << " ";

  cout << endl;
  return 0;
}
