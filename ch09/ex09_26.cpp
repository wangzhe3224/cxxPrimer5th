#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
  int ai[] = {0,1,1,2, 3, 5, 8, 13, 21, 55, 89};
  vector<int> vec(ai, end(ai));
  list<int> lst(vec.begin(), vec.end());
  
  for(auto it = lst.begin();  it != lst.end(); ) {
    if(*it%2 == 0)
      it = lst.erase(it); // erase returns an iterator denotes to the next element of the erased element
    else
      ++it;
  }

  cout << "list : ";
  for(auto i : lst)   cout << i << " ";
  cout << "\nvector : ";
  for(auto i : vec)   cout << i << " ";
  cout << std::endl;
  return 0;
}
