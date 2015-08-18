#include <vector>
#include <iostream>
using namespace std;

int main() {
  vector<int> ivec;
  int tmp;
  cout << "Enter integer(q to qiut.):" << endl;
  while (cin >> tmp) {
    ivec.push_back(tmp);
  }

  // problem#1
  for (decltype(ivec.size()) i = 1; i < ivec.size(); ++i) {
    cout << ivec[i-1]+ivec[i] << endl;
    cout << ivec[i-1]+ivec[ivec.size()-i+1] << endl;
  }
  return 0;
}
