#include <iostream>
#include <string>
using namespace std;

#include "../headers/Student.h"

const string Student::getStudentId() {
    return studentId;
}

void Student::setStudentId(string p_studentId) {
    studentId = p_studentId;
}

const string Student::getFirstName() {
    return firstName;
}

void Student::setFirstName(const string p_firstName) {
    firstName = p_firstName;
}

const string Student::getLastName() {
    return lastName;
}

void Student::setLastName(const string p_lastName) {
    lastName = p_lastName;
}

const string Student::getEmail() const {
    return email;
}

void Student::setEmail(const string p_email) {
    email = p_email;
}

const int Student::getAge() const {
    return age;
}

void Student::setAge(int p_age) {
    age = p_age;
}

const int Student::getDaysInCourse() const {
    return daysInCourse;
}

void Student::setDaysInCourse(int p_daysInCourse) {
    daysInCourse = p_daysInCourse;
}

const Degree Student::getDegree() const {
    return degree;
}

void Student::setDegree(const Degree p_degree) {
    degree = p_degree;
}

void Student::print() {
    cout << "Student ID: " << studentId << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Email: " << email << endl;
    cout << "Age: " << age << endl;
    cout << "Days in Course: " << daysInCourse <<  endl;
    cout << "Degree: " << degree << endl;
}

Student::Student(const string studentId,
                 const string firstName,
                 const string lastName,
                 const string email,
                 int age,
                 int daysInCourse,
                 Degree degree
                 ) :
                 studentId(studentId), firstName(firstName), lastName(lastName),
                 email(email), age(age), daysInCourse(daysInCourse), degree(degree) {}
