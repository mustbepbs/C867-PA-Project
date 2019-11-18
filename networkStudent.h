#pragma once
#include <string>
#include "student.h"
#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H

class NetworkStudent : public Student {
    
    public:
        NetworkStudent();
        
        NetworkStudent(string, string, string, string, int, int*, DegreeProgram);
             
        DegreeProgram getDegreeProgram(); // Overrides Student::getDegreeProgram
        void print();
        
        ~NetworkStudent(); // Destructor
        
     private:
         DegreeProgram degree;
};
#endif /* NETWORKSTUDENT_H */