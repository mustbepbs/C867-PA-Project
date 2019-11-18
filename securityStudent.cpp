#include <iostream>
#include "securityStudent.h"
using std::cout;

SecurityStudent::SecurityStudent():Student() {}

SecurityStudent::SecurityStudent(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int *daysInCourse, DegreeProgram deg) : Student(studentID, firstName, lastName, emailAddress, studentAge, daysInCourse) {
    
    degree = deg;
}

DegreeProgram SecurityStudent::getDegreeProgram() {
    
    return degree;
}

void SecurityStudent::print() {
	cout << "\t" << "First Name: " << getFirstName() << "\t" << "Last Name: " << getLastName() << "\t" << "Age: " << getStudentAge()
		<< "\t" << "daysInCourse: {"; cout << getdaysInCourse()[0] << ", " << getdaysInCourse()[1] << ", " << getdaysInCourse()[2] << "}";
	cout << " Degree Program: Security" << '\n';
}

SecurityStudent::~SecurityStudent() {}