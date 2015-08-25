#include <vector>
#include <iostream>

using std::vector;

void printVec(std::vector<int>::const_iterator beg, std::vector<int>::const_iterator end)
{
  if (beg != end) {
    std::cout << *beg << " ";
    printVec(++beg, end);
  }
}

int main(int argc, char *argv[])
{
  std::vector<int> v = {1,2,3,4,5,6};
  printVec(v.cbegin(), v.cend());
  return 0;
}
