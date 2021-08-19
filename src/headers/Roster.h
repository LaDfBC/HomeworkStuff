#ifndef HOMEWORK_ROSTER_H
#define HOMEWORK_ROSTER_H

#include "vector"
#include "string"
#include "Student.h"
using namespace std;

class Roster {
    private:
        vector<Student> studentClassArray;

    public:
        void printInvalidEmails();
        void deleteStudent(string p_studentId);
        void addStudent(
                string studentId,
                string firstName,
                string lastName,
                string email,
                int age,
                int daysInCourse,
                Degree degree);

        Student getStudentById(string p_studentId);
        Student* getAll();

};
#endif //HOMEWORK_ROSTER_H
