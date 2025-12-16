#ifndef STUDENT_H
#define STUDENT_H

class Student {
  public: 
    Student(int newID, const char* newName);
    ~Student();
    int getID();
    const char* getName();
  private:
    int id;
    char name[100];
}


#endif
