#ifndef NODE_H
#define NODE_H
#include "student.h"
using namespace std;

class Node {
 public:
  //constructor, destructors, etc.
  Node(Student* newStudent);
  ~Node();  
  Node* getNext();
  void setNext(Node* newNext);
  Student* getStudent();
 private:
  //variables
  Student* student;
  Node* next;
};
#endif
