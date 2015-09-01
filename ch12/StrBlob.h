/*
  StrBlob.h
  
  Exercise rB.ob

  Created by Wang Zhe on Thu Aug 20 15:48:11 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#ifndef STRBLOB_H
#define STRBLOB_H
#include <vector>
#include <memory>
#include <string>
#include <initializer_list>
#include <exception>

class StrBlob {
 public:
  typedef std::vector<std::string>::size_type size_type;
  StrBlob();
  StrBlob(std::initializer_list<std::string> il);
  size_type size() const { return data->size(); }
  bool empty() const { return data->empty(); }
  const std::string& front() const {
    check(0, "front on empty StrBlob.");
    return data->front();
  }

  const std::string& back() const {
    check(0, "back on empty StrBlob.");
    return data->back();
  }
  std::string& front() {
    check(0, "front on Empty StrBlob");
    return data->front();
  }
  std::string& back() {
    check(0, "back on Empty StrBlob");
    return data->back();
  }
  
  void push_back(const std::string &t) { data->push_back(t); }
  void pop_back();
 private:
  std::shared_ptr<std::vector<std::string>> data;
  void check(size_type i, const std::string &msg) const;
};

// constructors
StrBlob::StrBlob() : data(std::make_shared<std::vector<std::string>>()) {}
StrBlob::StrBlob(std::initializer_list<std::string> il) : data(std::make_shared<std::vector<std::string>> (il)) {}

void StrBlob::check(size_type i, const std::string &msg) const {
  if (i >= data->size())
    throw std::out_of_range(msg);
}

void StrBlob::pop_back() {
  check(0, "pop_back on empty StrBlob");
  data->pop_back();
}

#endif
