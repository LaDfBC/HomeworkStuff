#include <algorithm>
#include <string>
#include "src/headers/Roster.h"

using namespace std;

string find_next_value_and_shrink_string(string &p_str) {
    int comma_index = p_str.find(',');
    string result = p_str.substr(0, comma_index);

    p_str = p_str.substr(comma_index + 1);

    return result;
}

int main() {
    string initialArray[5] = {"A5, Sam, Milliano, smilliano@gmail.com, 29, 3, COMP_SCI",
                              "A2, George, Mausshardt, this should fail@fake.com, 29, 0, GEOLOGY",
                              "A2, Blah, Yah, this should fail@fake.com, 29, 0, GEOLOGY",
                              "A2, No, Dice, this should fail@fake.com, 29, 0, GEOLOGY",
                              "A2, Please, More, this should fail@fake.com, 29, 0, GEOLOGY"
                              };

    Roster roster = Roster();

    //C++ arrays suck - it's hard to remember their size.  Just use the initial size here.
    for(int i = 0; i < 5; i ++) {
        string csv_string = initialArray[i];

        string studentId = find_next_value_and_shrink_string(csv_string);
        string firstName = find_next_value_and_shrink_string(csv_string);
        string lastName = find_next_value_and_shrink_string(csv_string);
        string email = find_next_value_and_shrink_string(csv_string);

        string age_string = find_next_value_and_shrink_string(csv_string);
        age_string.erase(remove(age_string.begin(), age_string.end(), ' '), age_string.end()); // Removing whitespaces so we get a pure number
        int age = stoi(age_string); // "STOI" is "String to Integer"

        string days_string = find_next_value_and_shrink_string(csv_string);
        days_string.erase(remove(days_string.begin(), days_string.end(), ' '), days_string.end());
        int daysInCourse = stoi(days_string);

        string degreeString = csv_string;
        Degree degree;
        if(degreeString == "GEOLOGY") {
            degree = GEOLOGY;
        } else if (degreeString == "COMP_SCI") {
            degree = COMP_SCI;
        } else if (degreeString == "MATH") {
            degree = MATH;
        }

        roster.addStudent(studentId, firstName, lastName, email, age, daysInCourse, degree);
    }

    // We now have a roster full of students.  I'm not sure what else you have to do.

}


