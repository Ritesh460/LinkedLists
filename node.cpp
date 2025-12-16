#include <iostream> 
using namespace std;
#include "node.h"

//constructor
Node::Node(Student* newStudent) {
  student = newStudent;
  next = nullptr;
}
//destructor
Node::~Node() {
  next = nullptr;
}

Node* Node::getNext() {
  return next;
}

void Node::setNext(Node* newNext) {
  next = newNext;
}

Student* Node::getStudent() {
  return student;
}
