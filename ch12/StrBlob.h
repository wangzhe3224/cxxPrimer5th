/*
  StrBlob.h
  
  Exercise rB.ob

  Created by Wang Zhe on Thu Aug 20 15:48:11 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#idndef STRBLOB_H
#define STRBLOB_H
#include <vector>
#include <memory>
#include <string>
#include <initializer_list>

class StrBlob {
 public:
  typedef std::vector<std::string>::size_type size_type;
  StrBlob();
  StrBlob(std::initializer_list<std::string> il);
  size_type size() const { return data->size(); }
  bool empty() const { return data->empty(); }

  void push_back(const std::string &t) { data->push_back(t); }
  void pop_back();
  std::string& front();
  std::string& back();
 private:
  std::share_ptr<std::vector<std::string>> data;
  void check(size_type i, const std::string &msg) const;
};

// constructors
StrBlob::StrBlob() : data(make_shared<std::vector<std::string>>()) {}
StrBlob::StrBlob(initializer_list<std::string> il)
: data(make_shared<std::vector<std::string>> (il)) {}

void StrBlob::check(size_type i, const std::string &msg) {
  if (i >= data->size())
    throw out_of_range(mag);
}

std::string& StrBlob::front() {
  check(0, "front on Empty StrBlob");
  return data->front;
}

std::string& StrBlob::back() {
  check(0, "back on Empty StrBlob");
  return data->back();
}

void StrBlob::pop_back() {
  check(0, "pop_back on empty StrBlob");
  data->pop_back();
}


#endif
