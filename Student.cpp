#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int stdID, const char sname[]) {
  
  studentId = stdID;
  strcpy(name, sname);
}

// Display StudentId and Name
void Student::display() {
  cout << "----------------------"<<endl;
  cout << "Student ID : "<<studentId<<endl;
  cout << "Student name : "<<name<<endl;
  cout<< "-----------------------"<< endl;
}
