#include <iostream>
#include <iomanip>
#include "student.h"
#include "degree.h"
using std::cout;

Student::Student() // Default constructor to set all default values
{ 
}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int* daysInCourse) { // Full constructor
    
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->studentAge = studentAge;
    this->daysInCourse[0] = daysInCourse[0];
    this->daysInCourse[1] = daysInCourse[1];
    this->daysInCourse[2] = daysInCourse[2];
}

// Getters
string Student::getID() {
    
    return studentID;
}

string Student::getFirstName() {
    
    return firstName;
}

string Student::getLastName() {
    
    return lastName;
}

string Student::getEmailAddress() {
    
    return emailAddress;
}

int Student::getStudentAge() {
    
    return studentAge;
}

int * Student::getdaysInCourse() {
    
    return daysInCourse;
}

DegreeProgram Student::getDegreeType() {
    
    return DegreeProgram();
}

// Setters
void Student::setID(string ID) {
    
    this->studentID = ID;
}

void Student::setFirstName(string firstname) {
    
    this->firstName = firstname;
}

void Student::setLastName(string lastname) {
    
    this->lastName = lastname;
}

void Student::setEmailAddress(string email) {
    
    this->emailAddress = email;
}

void Student::setdaysInCourse(int daysInCourse1, int daysInCourse2, int daysInCourse3) { 
    
    for (int i = 0; i <= 3; i++)
        this->daysInCourse[i] = daysInCourse[i];
}

void Student::setDegree(string degree) {
    
    degree = degree;
}

DegreeProgram Student::getDegreeProgram() {
    return DegreeProgram::SOFTWARE;
}

void Student::print() {
}

Student::~Student() {
    // Destructor
}