#ifndef ex07_31_h
#define ex07_31_h

class Y;

class X {
private:
  Y *yp;
};

class Y {
  X x;
};

#endif
