#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using std::string;
using namespace std::placeholders;

bool lessthan(const string &s, string::size_type sz) {
  return s.size() <= sz;
}

int main() {
  std::vector<string> svec{"wang", "zhe", "123123123", "wangzhe", "09877652"};
  auto Delessthan = bind(lessthan, _1, 6);
  auto number =  count_if(svec.cbegin(), svec .cend(), Delessthan);
  std::cout << number << "\n";

  return 0;
}

