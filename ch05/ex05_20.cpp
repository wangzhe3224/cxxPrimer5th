#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;

int main() {
  string buff = "", str = " ";
  str = buff;
  int limit = 0; // the limitation of the input number
  while (cin >> buff) {
    if (str == buff) {
      cout << str << " occurs twice.\n"; 
      break;
    }
    else {
      str = buff;
      ++limit;
      if (limit == 5) {
	cout << "no word was repeated.\n";
	break;
      }
    }
  }
  return 0;
}
