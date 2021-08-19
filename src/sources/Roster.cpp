#include "../headers/Roster.h"
using namespace std;

void Roster::printInvalidEmails() {
    for(int i = 0; i < studentClassArray.size(); i++) {
        string currentEmail = studentClassArray[i].getEmail();
        if(currentEmail.find("@") == -1 ||
            currentEmail.find(".") == -1 ||
            currentEmail.find(" ") != -1) {
            cout << "INVALID EMAIL: " << currentEmail << endl;
        }
    }
}

void Roster::deleteStudent(string p_studentId) {
    for(int i = 0; i < studentClassArray.size(); i++) {
        if (studentClassArray[i].getStudentId() == p_studentId) {
            studentClassArray.erase(studentClassArray.begin() + i);
            return; // We're done! Get out of here.
        }
    }

    cout << "ERROR: Student ID does not exist" << endl;
}

void Roster::addStudent(string studentId, string firstName, string lastName, string email, int age, int daysInCourse,
                        Degree degree) {
    studentClassArray.push_back(Student(studentId, firstName, lastName, email, age, daysInCourse, degree));
}

Student Roster::getStudentById(string p_studentId) {
    for(int i = 0; i < studentClassArray.size(); i++) {
        if (studentClassArray[i].getStudentId() == p_studentId) {
            return studentClassArray[i];
        }
    }
}

