#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void elimDup(std::vector<std::string> &s)
{
  std::sort(s.begin(), s.end());
  auto new_end = std::unique(s.begin(), s.end());
  s.erase(new_end, s.end());
}

void biggies(std::vector<std::string> &vs, std::size_t sz)
{
  using std::string;
  
  elimDup(vs);

  //! sort by size, but maintain alphabetical order for same size.
  std::stable_sort(vs.begin(), vs.end(),[](string const& lhs, string const& rhs){
      return lhs.size() < rhs.size();
    });
  
  //! get an iterator to the first one whose size() is >= sz
  auto wc = std::find_if(vs.begin(), vs.end(),[sz](string const& s){
            return s.size() >= sz;
    });
  
  //! print the biggies
  std::for_each(wc, vs.end(), [](const string &s){
      std::cout << s << " ";
    }); 
}

int main() {
  std::vector<std::string> svec {
    "wang", "Zhe", "1234", "32233" , "adfeasdf"
  };

  biggies(svec, 4);
  std::cout << "\n";
  
  return 0;
}
