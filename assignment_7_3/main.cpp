#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student {
public: string name;string course;char grade;
    Student(string name, string course, char grade): name(name), course(course), grade(grade) {}
};

int main() {
    vector<Student> students;
    string sName, cName;
    char grade;

    cout << "To finish enter 'stop'\n";
    while (true) {
        cout << "Enter the name: ";
        getline(cin, sName);
        if (sName == "stop") break;

        while (true) {
            cout << "Enter the course: ";
            getline(cin, cName);
            if (cName == "stop") break;

            cout << "Enter the grade: ";
            cin >> grade;
            cin.ignore();

            students.emplace_back(sName, cName, grade);
        }
    }

    for (const auto& student : students) {
        cout << student.name << " - " << student.course << " - " << student.grade << endl;
    }

    return 0;
}