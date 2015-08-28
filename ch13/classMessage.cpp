/*
  classMessage.cpp
  
  Exercise as.Me

  Created by Wang Zhe on Mon Aug 17 17:35:34 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include "classMessage.h"
#include <iostream>

using std::cout;
using std::endl;


// methods for class Message:
void Message::save(Folder &f) {
  folders.insert(&f);
  f.addMsg(this);
  cout << "Message saved in folder: " << f.name  << endl;
}

void Message::remove(Folder &f) {
  folders.erase(&f);
  f.remMsg(this);
}

void Message::add_to_Folders(const Message &m) {
  for (auto f : m.folders)
    f->addMsg(this);
}

void Message::remove_from_Folders() {
  for (auto f : folders)
    f->remMsg(this);
}

Message::Message(const Message& cp) : contents(cp.contents), folders(cp.folders) {
  add_to_Folders(cp);
}

Message::~Message() {
  remove_from_Folders();
  //cout << "Message destroyed." << endl;
}

Message& Message::operator=(const Message &cp) {
  remove_from_Folders(); // remove the pointers in the invoking object and be ready to receive the new message.
  contents = cp.contents;
  folders = cp.folders;
  add_to_Folders(cp);
  return *this;
}

// methods fot class Folder
void Folder::add_to_Message(const Folder &f) {
  for (auto m : f.msgs)
    m->addFld(this);
}

Folder::Folder(const Folder &cp) : msgs(cp.msgs)
{ add_to_Message(cp);}

void Folder::remove_to_Message() {
  for (auto m : msgs)
    m->remFld(this);
  msgs.clear();
}

Folder::~Folder() {
  remove_to_Message();
  //cout << "Folder destroyed." << endl;
}

void Folder::showMsg() {
  for (auto m : this->msgs)
    cout << m->contents << endl;
}


// Friend functions
void swap(Message &m1, Message &m2) {
  using std::swap;
  // clear each message from their original folders.
  for (auto f : m1.folders)
    f->remMsg(&m1); // why reference here??
  for (auto f : m2.folders)
    f->remMsg(&m2);
  // swap the contents and folders
  swap(m1.contents, m2.contents);
  swap(m1.folders, m2.folders);
  // link the new folder to the message
  for (auto f : m1.folders)
    f->addMsg(&m1);
  for (auto f : m2.folders)
    f->addMsg(&m2);
}

void swap(Folder &f1, Folder &f2) {
  using std::swap;
  // clear each folder from their original messages
  for (auto m : f1.msgs)
    m->remFld(&f1);
  for (auto m : f2.msgs)
    m->remFld(&f2);
  //
  swap(f1.msgs, f2.msgs);
  swap(f1.name, f2.name);
  //
  for (auto m : f1.msgs)
    m->addFld(&f1);
  for (auto m : f2.msgs)
    m->addFld(&f2);
}

// some test
int main() {
  Message m1("this is message 1.");
  Message m2("this is message 2.");
  Folder f1, f2;
  f1.setName("data");
  f2.setName("message");
  m1.save(f1);
  m2.save(f2);
  f1.showMsg();
  f2.showMsg();
  swap(f1, f2);
  cout << "Swap the content of f1 and f2." << endl;
  f1.showMsg();
  f2.showMsg();
  return 0;
}
