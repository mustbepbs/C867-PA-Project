#pragma once
#include <string>
#include "student.h"
#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

class SecurityStudent : public Student {
    
    public:
        SecurityStudent();
        
        SecurityStudent(string, string, string, string, int, int*, DegreeProgram);
             
        DegreeProgram getDegreeProgram(); // Overrides Student::getDegreeProgram
        void print();
        
        ~SecurityStudent(); // Destructor
        
     private:
         DegreeProgram degree;
};
#endif /* SECURITYSTUDENT_H */