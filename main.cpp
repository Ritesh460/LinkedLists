#include <iostream>
#include <cstring>
#include <vector>
#include "node.h"
#include "student.h"
using namespace std;
int main () {
  Student1 = new Student(326354,"Sarah");
  Student2 = new Student(383948, "Aadhav"); 
  Node1 = new Node(Student1);
  Node2 = new Node(Student2);	  
  cout << Node1->getID();
  return 0;
}
//work on this next class : functions for demonstrating node class functioning, maybe test function?
