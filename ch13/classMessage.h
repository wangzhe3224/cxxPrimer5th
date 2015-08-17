// class Message

#ifndef Message_h
#define Message_h

#include <string>
#include <set>

class Folder;

class Message {
  friend class Folder;
  friend void swap(Message&, Message&);
  friend void swap(Folder&, Folder&);
 public:
  explicit Message(const std::string& str = ""): contents(str) {}
  Message(const Message & cp);
  Message& operator=(const Message&);
  ~Message();
  // add and remove functions
  void save(Folder&); 
  void remove(Folder&);
  
 private:
  std::string contents;
  std::set<Folder*> folders; // container filled with pointers to Folder.
  void add_to_Folders(const Message&);
  void remove_from_Folders();

  void addFld(Folder *f) { folders.insert(f); }
  void remFld(Folder *f) { folders.erase(f); }
};

void swap(Message&, Message&);

class Folder {
  friend void swap(Message&, Message&);
  friend void swap(Folder&, Folder&);
  friend class Message;
 public:
  Folder() = default;
  Folder(const Folder&);
  Folder& operator=(const Folder&);
  ~Folder();

  //user methods
  void setName(const std::string &s) {name = s;}
  void showMsg();
 private:
  std::set<Message*> msgs;
  std::string name;
  
  void add_to_Message(const Folder&);
  void remove_to_Message();

  void addMsg(Message *m) { msgs.insert(m); }
  void remMsg(Message *m) { msgs.erase(m); }
};

void swap(Folder&, Folder&);

#endif
