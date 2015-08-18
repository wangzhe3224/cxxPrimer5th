#include <vector>
#include <string>
#include <iostream>
using namespace std;

int sumOfInt(vector<string> const& v) {
  int sum = 0;
  for (auto const& s : v)
    sum += stoi(s);
  return sum;
}

float sumOfFloat(vector<string> const& v) {
  float sum;
  for (auto const& s : v)
    sum += stof(s);
  return sum;
}

int main() {
  vector<string> v = { "1", "2", "3", "4.5" };
  cout << sumOfInt(v) << endl;
  cout << sumOfFloat(v) << endl;
  return 0;
}
