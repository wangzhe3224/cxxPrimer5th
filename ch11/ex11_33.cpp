/*
  ex11_33.cpp
  
  Exercise 11.33

  Created by Wang Zhe on Thu Aug 20 15:22:44 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <map>
#include <string>
#include <fstream> 
#include <iostream>
#include <sstream>
#include <stdexcept>

using std::string;
using std::ifstream;
using std::runtime_error;

std::map<string, string> buildmap(ifstream &map_file) {
  std::map<string, string> trans_map;
  string key;       // a word to transfer
  string value;     // phrase to use instead
  // read the file to the map
  while (map_file >> key && getline(map_file, value)) {
    if (value.size() > 1)
      trans_map[key] = value.substr(1).substr(0,value.find_last_not_of(' '));
    else
      throw runtime_error("no rule for " + key);
  }
  return trans_map;
}

const string & transform(const string &s, const std::map<string, string> &m) {
  auto map_it = m.find(s);
  return map_it == m.cend() ? s : map_it->second;
}

void word_transform(ifstream &map, ifstream &input) {
  auto trans_map = buildmap(map);
  for (string text; getline(input, text); ) {
    std::istringstream iss(text);
    for (string word; iss >> word; )
      std::cout << transform(word, trans_map) << " ";
    std::cout << std::endl;
  }
}

int main() {
  ifstream ifs_map("../ch11/map.txt"), ifs_content("../ch11/transform.txt");
  if (ifs_map && ifs_content)
    word_transform(ifs_map, ifs_content);
  else
    std::cerr << "can't find the documents." << std::endl;
}
