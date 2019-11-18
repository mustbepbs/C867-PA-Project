#pragma once
#include <string>
#include "student.h"
#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H

class SoftwareStudent : public Student {
    
    public:
        SoftwareStudent();
        
        SoftwareStudent(string, string, string, string, int, int*, DegreeProgram);
             
        DegreeProgram getDegreeProgram(); // Overrides Student::getDegreeProgram
        void print();
        
        ~SoftwareStudent(); // Destructor
        
     private:
         DegreeProgram degree;
};
#endif /* SOFTWARESTUDENT_H */