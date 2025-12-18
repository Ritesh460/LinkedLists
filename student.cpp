#include <iostream>
#include <cstring>
#include "student.h"
using namespace std;
//constructor
Student::Student(int newID, const char* newName) {
  id = newID;
  strcpy(name, newName);
}
//destructor
Student::~Student() {
  
}
//return student ID
int Student::getID() {
  return id;
}
//return student name
const char* Student::getName() {
  return name;
}
