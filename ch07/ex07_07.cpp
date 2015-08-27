#include <iostream>
#include <string>

#include "ex07_12.h"
using std::string; using std::cout; using std::cin;

int main()
{
  // Sales_data total;
  if (Sales_data total(std::cin))
    {
      //Sales_data trans;
      while (Sales_data trans(std::cin)) {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                print(std::cout, total) << std::endl;
                total = trans;
            }
        }
        print(std::cout, total) << std::endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    
    return 0;
}

