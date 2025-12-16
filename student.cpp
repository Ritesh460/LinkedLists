#include <iostream>
#include <cstring>
#include "node.h"
using namespace std;
//constructor
Student::Student(int newID, const char* newName) {
  int id;
  char name[100];
}
//destructor
Student::~Student() {
  return nullptr;
}
//return student ID
int Student::getID() {
  return id;
}
//return student name
const char* Student::getName() {
  return name;
}
