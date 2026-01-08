#include <iostream>
#include <cstring>
#include <vector>
#include "node.h"
#include "student.h"
using namespace std;
int main () {
  //creating student and nodes
  Student* s1 = new Student(326354,"Sarah");
  Student* s2 = new Student(383948, "Aadhav"); 
  Node* n1 = new Node(s1);
  Node* n2 = new Node(s2);
  //test student code & linked nodes
  n1->setNext(n2);
  cout << "First student: " << n1->getStudent()->getName() << " (ID " << n1->getStudent()->getID() << ")" << endl;
  cout << "Second student: " << n1->getNext()->getStudent()->getName() << " (ID " << n1->getNext()->getStudent()->getID() << ")" << endl;
  //clean up memory
  delete n1;
  delete n2;
  return 0;
}

