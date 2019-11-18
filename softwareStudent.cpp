#include <iostream>
#include "softwareStudent.h"
using std::cout;

SoftwareStudent::SoftwareStudent():Student() {}

SoftwareStudent::SoftwareStudent(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int *daysInCourse, DegreeProgram deg) : Student(studentID, firstName, lastName, emailAddress, studentAge, daysInCourse) {
    
    degree = deg;
}

DegreeProgram SoftwareStudent::getDegreeProgram() {
    
    return degree;
}

void SoftwareStudent::print() {
	cout << "\t" << "First Name: " << getFirstName() << "\t" << "Last Name: " << getLastName() << "\t" << "Age: " << getStudentAge()
		<< "\t" << "daysInCourse: {"; cout << getdaysInCourse()[0] << ", " << getdaysInCourse()[1] << ", " << getdaysInCourse()[2] << "}";
	cout << " Degree Program: Software" << '\n';
}

SoftwareStudent::~SoftwareStudent() {}