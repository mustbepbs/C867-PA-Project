#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include "degree.h"
#include <string>
using std::string;

class Student { // Student Class
    
public:
    Student(); // Default constructor
    // Student(string, string, string, string, int, int*);
    Student(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int* daysInCourse); // Full constructor
    
    // Getters
    string getID();
    string getFirstName();
    string getLastName();
    string getEmailAddress();
    int    getStudentAge();
    int    *getdaysInCourse(); // Days to complete courses, pointer to array of days
    DegreeProgram getDegreeType();
  
    // Setters
    void setID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmailAddress(string emailAddress);
    void setStudentAge(int studentAge);
    void setdaysInCourse(int daysInCourse1, int daysInCourse2, int daysInCourse3);
    void setDegree(string degree);
    
    virtual void print();
    virtual DegreeProgram getDegreeProgram();
    
    ~Student(); // Destructor
    
    private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int studentAge;  
    int daysInCourse[3];
};
#endif /* STUDENT_H */