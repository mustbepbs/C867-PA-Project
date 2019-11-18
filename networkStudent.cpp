#include <iostream>
#include "networkStudent.h"
using std::cout;

NetworkStudent::NetworkStudent():Student() {}

NetworkStudent::NetworkStudent(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int *daysInCourse, DegreeProgram deg) : Student(studentID, firstName, lastName, emailAddress, studentAge, daysInCourse) {
    
    degree = deg;
}

DegreeProgram NetworkStudent::getDegreeProgram() {
    
    return degree;
}

void NetworkStudent::print() {
	cout << "\t" << "First Name: " << getFirstName() << "\t" << "Last Name: " << getLastName() << "\t" << "Age: " << getStudentAge()
		<< "\t" << "daysInCourse: {"; cout << getdaysInCourse()[0] << ", " << getdaysInCourse()[1] << ", " << getdaysInCourse()[2] << "}";
	cout << " Degree Program: Network" << '\n';
}

NetworkStudent::~NetworkStudent() {}