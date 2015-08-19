#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using std::string; using  std::vector;
using std::cout;
using namespace std::placeholders;

inline auto check_size(const string &s, string::size_type n) -> bool
{
  return s.size() < n;
}

inline auto findFirstGreat(std::vector<int> &v, const string &s) -> std::vector<int>::iterator
{
  auto lambda = [&](int i){ return bind(check_size, s, i)(); };
  // here has a pair of (). if no () here will leads to error..
  // if used in the return of a lambda function....
  // return find_if(v.begin(), v.end(), lambda);
  return find_if(v.begin(), v.end(),
		 [&](int i){ return bind(check_size, s, i)(); });
}

int main() {
  std::vector<int> lst {1,2,3,4,5,6,7};
  string s = "wang";
  cout << *findFirstGreat(lst, s) << "\n";
  return 0;
}

