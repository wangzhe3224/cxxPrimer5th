#ifndef ex07_27_h
#define ex07_27_h

#include <string>
#include <iostream>

class Screen {
public:
  typedef std::string::size_type pos;
  // constructor
  Screen() = default;
Screen(pos ht, pos wd, char c)
    : height(ht), width(wd), content(ht*wd, c) {}
Screen(pos ht, pos wd, int n)
    : height(ht), width(wd), content(n, ' ') {} // Why can not use " " here?
  /*
    the constructor of `std::string` is std::string(size_t n, char c)
    but " " has a type of const char*.(is a c-style string...)
   */
  
  // member functions
  const char get() {
    // return the content of the current cursor posiotion.
    // implicit inline function
    return content[cursor];
  }

  inline const char get(pos r, pos c);// overload get()
  Screen &move(pos r, pos c); // move the screen
  Screen &set(char); // set the content at current cursor location
  Screen &set(pos, pos, char); //set the content at (pos, pos)
  
  Screen &display(std::ostream &os) {
    do_display(os);
    return *this;
  }
  const Screen &display(std::ostream &os) const {
    do_display(os);
    return *this;
  }
  
private:
  pos cursor;
  pos height = 0, width = 0;
  std::string content;
  // private function
  void do_display(std::ostream &os) const {
    os << content;
  }
};

// function members
inline
Screen &Screen::move(pos r, pos c) {
  pos row = r * width;
  cursor = row + c;
  return *this;
} // move the screen

const char Screen::get(pos r, pos c) {
  return content[r*width + c];
}

Screen &Screen::set(char c) {
  content[cursor] = c;
  return *this;
}

Screen &Screen::set(pos r, pos c, char ch) {
  content[r*width+c] = ch;
  return *this;
}


#endif
