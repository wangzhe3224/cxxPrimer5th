#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main(){
  vector<string> svec;
  string tmp;
  int i = 5;
  while (i) {
    cin >> tmp;
    svec.push_back(tmp);
    --i;
  }

  for (auto it = svec.cbegin();
       it != svec.cend() && !it->empty(); ++it)
    cout << *it << endl;

  return 0;
}
