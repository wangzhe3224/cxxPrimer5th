#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
  string expression{"This is (wangzhe)."};
  bool bSeen = false;
  stack<char> stk;
  for (const auto &s : expression) {
    if (s == '(') {
      bSeen = true; continue;
    }
    else if (s == ')')
      bSeen = false;
    
    if (bSeen)
      stk.push(s);
  }
    
  string repstr;
  while (!stk.empty()) {
    repstr += stk.top();
    stk.pop();
  }
  
  expression.replace(expression.find("(")+1, repstr.size(), repstr);
  
  cout << expression << endl;
  
  return 0;
}
