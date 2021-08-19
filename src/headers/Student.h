#ifndef HOMEWORK_STUDENT_H
#define HOMEWORK_STUDENT_H

#include <iostream>
#include <string>
using namespace std;

#include "../sources/Degree.cpp"

class Student {
    private:
        string studentId;
        string firstName;
        string lastName;
        string email;
        int age;
        int daysInCourse;
        Degree degree;

    public:
    Student(const string studentId,
            const string firstName,
            const string lastName,
            const string email,
            int age,
            int daysInCourse,
            Degree degree);

    const string getStudentId();
        void setStudentId(string p_studentId);

        const string getFirstName();
        void setFirstName(const string p_firstName);

        const string getLastName();
        void setLastName(const string p_lastName);

        const string getEmail() const;
        void setEmail(const string p_email);

        const int getAge() const;
        void setAge(int p_age);

        const int getDaysInCourse() const;
        void setDaysInCourse(int p_daysInCourse);

        const Degree getDegree() const;
        void setDegree(const Degree p_degree);

        void print();
};

#endif //HOMEWORK_STUDENT_H
