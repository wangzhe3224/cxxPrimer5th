#include <iostream>
#include <string>

using namespace std;

int main() {
  string prev = " ", curr = " ";
  bool flag = true;
  while (cin >> curr) {
    if (isupper(curr[0])) {
      if (prev == curr) {
	cout << "twice.\n";
	flag = false;
	break;
      }
      else {
	prev = curr;
	continue;
      }
    }
    else {
      prev = curr;
      continue;
    }
  }

  if (flag)
    cout << "no word was repeated.\n";
  return 0;
}
