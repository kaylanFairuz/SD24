#include <bits/stdc++.h>
using namespace std;

typedef struct {
    string student_registration_number;
    bool CS20A, CS21A, CS29A, CS30A, CS35A, CS36A;
} student;

int main() {
    // File path bisa disesuaikan
    char file_path[100] = "D:/Kaylan 2023/Data/Study/STRUKDAT/Tugas/Pg.48/Prob12_sample2.txt";
    ifstream file(file_path);
    string line;

    vector<student> students;
    while (getline (file, line)) {
        stringstream ss(line);
        student temporary;

        ss >> temporary.student_registration_number;
        if(temporary.student_registration_number.compare("0") == 0) {
            break;
        }
        ss >> temporary.CS20A >> temporary.CS21A >> temporary.CS29A >> temporary.CS30A >> temporary.CS35A >> temporary.CS36A;

        students.push_back(temporary);
    }

    file.close();

    sort(students.begin(), students.end(), [](const student& a, const student& b) {
        return a.student_registration_number < b.student_registration_number;
    });

    vector<vector<string>> classes_list;
    vector<string> class_names = {"CS20A", "CS21A", "CS29A", "CS30A", "CS35A", "CS36A"};
    vector<string> class_CS20A;
    vector<string> class_CS21A;
    vector<string> class_CS29A;
    vector<string> class_CS30A;
    vector<string> class_CS35A;
    vector<string> class_CS36A;

    for(int i = 0; i < students.size(); i++) {
        if(students[i].CS20A) {
            class_CS20A.push_back(students[i].student_registration_number);
        }
        if(students[i].CS21A) {
            class_CS21A.push_back(students[i].student_registration_number);
        }
        if(students[i].CS29A) {
            class_CS29A.push_back(students[i].student_registration_number);
        }
        if(students[i].CS30A) {
            class_CS30A.push_back(students[i].student_registration_number);
        }
        if(students[i].CS35A) {
            class_CS35A.push_back(students[i].student_registration_number);
        }
        if(students[i].CS36A) {
            class_CS36A.push_back(students[i].student_registration_number);
        }
    }

    classes_list.push_back(class_CS20A);
    classes_list.push_back(class_CS21A);
    classes_list.push_back(class_CS29A);
    classes_list.push_back(class_CS30A);
    classes_list.push_back(class_CS35A);
    classes_list.push_back(class_CS36A);

    for(int i = 0; i < classes_list.size(); i++) {
        cout << endl << class_names[i] << endl << "----------" << endl;
        for (int j = 0; j < classes_list[i].size(); j++) {
            cout << classes_list[i][j] << endl;
        }
    }
}