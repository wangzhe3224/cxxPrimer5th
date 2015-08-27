#include <iostream>
#include <string>

#include "ex07_02.h"
using std::string; using std::cout; using std::cin;

int main() {
  Sales_data  total;
  if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
    Sales_data trans;
    while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
      if (total.bookNo == trans.bookNo) {
        total.combine(trans);
      }
      else {
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << "\n";
        total = trans;
      }
    }
    cout << total.bookNo << " " << total.units_sold << " " << total.revenue << "\n";
  }
  else {
    std::cerr << "NO data.\n";
    return -1;
  }

  return 0;
}
