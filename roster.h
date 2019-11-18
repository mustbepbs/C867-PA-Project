#pragma once
#include <string>
#include <iostream>
#include "degree.h"
#include "student.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#ifndef ROSTER_H
#define ROSTER_H

// Class Roster
class classRoster {
private:
    Student* classRosterArray[5]; // Array of pointers
    
public:
    classRoster(); // Empty Constructor
    void add(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degree);
    void print_All();
    void remove(string studentID);
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(string degree);
    int  addIndex = 0;
    ~classRoster(); // Destructor
};
#endif /* ROSTER_H */