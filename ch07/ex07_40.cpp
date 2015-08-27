#include "ex07_40.h"

int main() {
  Date da1;
  da1.show();
  da1.set(1988, 04, 19).show();
  Date da2(2000, 02, 30);
  da2.show();
  da2.set(1988, 02, 29).show();
  return 0;
}
