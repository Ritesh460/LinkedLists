#ifndef STUDENT_H
#define STUDENT_H

class Student {
  public:
    //consturctor, destructor, etc. 
    Student(int newID, const char* newName);
    ~Student();
    int getID();
    const char* getName();
  private:
    //variables
    int id;
    char name[100];
};


#endif
