#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;
class Node {
 public: 
  Node* getNext();
  void setNext(Node*);
  Node(Student*);
  ~Node()
 private:
   int value;
}
#endif
