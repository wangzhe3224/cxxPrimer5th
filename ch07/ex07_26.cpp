#include "ex07_26.h"
#include <string>
int main() {
  std::string null_isbn("9-999-99999-9");
  Sales_data itemx1(null_isbn);
  Sales_data item2("9-999-99999-9");
  Sales_data item3 = "11111";
  return 0;
}
