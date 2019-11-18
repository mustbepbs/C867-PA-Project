#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "roster.h"

using namespace std;


classRoster::classRoster(){
}

// Add info
void classRoster::add(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram dp) {
    
    int daysCourse[] = {daysInCourse1, daysInCourse2, daysInCourse3};
    if (dp == DegreeProgram::NETWORKING) {
        classRosterArray[addIndex++] = new NetworkStudent(studentID, firstName, lastName, emailAddress, studentAge, daysCourse, dp);
    }
    if (dp == DegreeProgram::SECURITY) {
        classRosterArray[addIndex++] = new SecurityStudent(studentID, firstName, lastName, emailAddress, studentAge, daysCourse, dp);
    }
    if (dp == DegreeProgram::SOFTWARE) {
        classRosterArray[addIndex++] = new SoftwareStudent(studentID, firstName, lastName, emailAddress, studentAge, daysCourse, dp);
    }
}

// Printing Roster
void classRoster::print_All() {
    cout << "Printing Roster: " << "\n";
    for (int i = 0; i < 5; i++) {
        classRosterArray[i]->print();
    }
    cout << endl;
}

// Removing and checking
void classRoster::remove(string studentID) {
    bool isremoved = false;
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != NULL) {
            if (studentID == classRosterArray[i]->getID()) {
                classRosterArray[i] = nullptr;
                isremoved = true;
                cout << "Student with ID: " << studentID << " is removed." << endl;
            }
        }
    } 
    if (isremoved == false) {
        cout << "Error! Student with ID: " << studentID << " cannot be found." << endl;
    }
}

// Printing by degree program
void classRoster::printByDegreeProgram(string degree) {
	DegreeProgram tDegree = tDegree;
	if (degree == "NETWORKING") {
		tDegree = DegreeProgram::NETWORKING;
		cout << "Students in the Networking Degree Program: " << endl;
        }
        if (degree == "SECURITY") {
		tDegree = DegreeProgram::SECURITY;
		cout << "Students in the Security Degree Program: " << endl;
        }
	if (degree == "SOFTWARE") {
		tDegree = DegreeProgram::SOFTWARE;
		cout << "Students in the Software Degree Program: " << endl;
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		if (tDegree == (classRosterArray[i])->getDegreeProgram()) {
			(classRosterArray[i])->print();
	}
        }
        cout << endl;
}

// Printing Invalid Email Addresses
void classRoster::printInvalidEmails() {
    
    for (int i = 0; i < 5; i++) {
        string email = "";
        email = classRosterArray[i]->getEmailAddress();
        bool validEmail = false;
        
        size_t found = email.find("@");
		if (found != string::npos) {
			found = email.find(".");
			if (found != string::npos) {
				found = email.find(" ");
				if (found == string::npos) {
					validEmail = true;
        }
			}
		}
        if (!validEmail) {
            cout << "Sorry, " << email << " is not a valid email address." << endl;
        }
    } cout << "\n";
}

// Printing Average Days In Course
void classRoster::printAverageDaysInCourse(string studentID) {
    
    bool found = false;
    for (int i = 0; i < 5; i++) {
        if (this->classRosterArray[i]->getID() == studentID) {
            found = true;
            int *c = classRosterArray[i]->getdaysInCourse();
            cout << "Average days in courses for student " << studentID << " is " << (c[0] + c[1] + c[2]) / 3 << "\n" << endl;
        }
    }
    if (!found) cout << "Student not found." << endl;
}



int main() {
    
    cout << "Course: Scripting and Programming - Applications C867" << endl;
    cout << "Language Used: C++" << endl;
    cout << "Student ID: 000166270" << endl;
    cout << "Student Name: Robert Giuffrida" << "\n" << endl;
    
    const string studentData[] =
    {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
    "A5,Robert,Giuffrida,robbieg@wgu.edu,30,10,15,18,SOFTWARE"
    };
    
    classRoster Roster;
    
    DegreeProgram degree;
    
    // Populating Roster
    for (int i = 0; i < 5; i++) {
		stringstream ss(studentData[i]);   

		vector<string> temp;

		while (ss.good()) {
			string substr;
			getline(ss, substr, ',');
			temp.push_back(substr);
		}
                if (temp[8] == "NETWORK") {
			degree = DegreeProgram::NETWORKING;
		}
		if (temp[8] == "SECURITY") {
			degree = DegreeProgram::SECURITY;
		}
		if (temp[8] == "SOFTWARE") {
			degree = DegreeProgram::SOFTWARE;
		}
		Roster.add(temp[0], temp[1], temp[2], temp[3], stoi(temp[4]), stoi(temp[5]),stoi(temp[6]), stoi(temp[7]), degree);
	};
    
        Roster.print_All();

	Roster.printInvalidEmails();

	Roster.printAverageDaysInCourse("A1");

	Roster.printByDegreeProgram("SOFTWARE");
	
	Roster.remove("A3");
	
	Roster.remove("A3");
}

classRoster::~classRoster(){
}