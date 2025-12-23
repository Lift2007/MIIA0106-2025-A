#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displayStudentInfo(string name, string id, double score, char grade)
{
    
    cout << "Student Name: " << name << "\n";
    cout << "Student ID  : " << id << "\n";
    cout << "Total Score : " << fixed << setprecision(2) << score << "\n";
    cout << "Grade       : " << grade << "\n";
    
}

void calculateGrade(double score, char& grade)
{
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';
}

int main()
{
    int size;
    cout << "Enter number of students: ";
    cin >> size;
    cin.ignore();

    string* name = new string[size];
    string* id = new string[size];
    double* score = new double[size];
    char* grade = new char[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        getline(cin, name[i]);
        cout << "Enter ID of student " << i + 1 << ": ";
        cin >> id[i];

        double total = 0;
        for (int j = 0; j < 3; j++) {
            double sub_score;
            cout << "  Enter score for subject " << j + 1 << ": ";
            cin >> sub_score;
            total += sub_score;
        }
        cin.ignore();

        score[i] = total;
        calculateGrade(score[i], grade[i]);
        displayStudentInfo(name[i], id[i], score[i], grade[i]);
    }

    delete[] name;
    delete[] id;
    delete[] score;
    delete[] grade;

    return 0;
}