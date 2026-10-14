#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Structure to store subject details
struct Subject {
    string name;
    int credits;
    float marks;
    float gradePoint;
};

// Function to calculate grade point based on marks
float calculateGradePoint(float marks) {
    if (marks >= 90) return 10.0;
    else if (marks >= 80) return 9.0;
    else if (marks >= 70) return 8.0;
    else if (marks >= 60) return 7.0;
    else if (marks >= 50) return 6.0;
    else if (marks >= 40) return 5.0;
    else return 0.0;
}

int main() {
    int numSubjects;
    cout << "========================================\n";
    cout << "   ACADEMIC CGPA & GRADE CALCULATOR    \n";
    cout << "========================================\n";
    
    cout << "Enter total number of subjects: ";
    cin >> numSubjects;

    vector<Subject> subjects(numSubjects);
    float totalCreditPoints = 0;
    int totalCredits = 0;

    for (int i = 0; i < numSubjects; i++) {
        cout << "\n--- Subject " << (i + 1) << " Details ---\n";
        cout << "Subject Name: ";
        cin >> subjects[i].name;
        cout << "Credits (e.g., 3 or 4): ";
        cin >> subjects[i].credits;
        cout << "Marks obtained (out of 100): ";
        cin >> subjects[i].marks;

        subjects[i].gradePoint = calculateGradePoint(subjects[i].marks);
        totalCreditPoints += (subjects[i].gradePoint * subjects[i].credits);
        totalCredits += subjects[i].credits;
    }

    float cgpa = totalCreditPoints / totalCredits;

    cout << "\n========================================\n";
    cout << "             ACADEMIC REPORT            \n";
    cout << "========================================\n";
    cout << left << setw(15) << "Subject" << setw(10) << "Credits" << setw(10) << "Marks" << setw(12) << "Grade Point" << endl;
    cout << "----------------------------------------\n";

    for (int i = 0; i < numSubjects; i++) {
        cout << left << setw(15) << subjects[i].name 
             << setw(10) << subjects[i].credits 
             << setw(10) << subjects[i].marks 
             << setw(12) << subjects[i].gradePoint << endl;
    }

    cout << "----------------------------------------\n";
    cout << fixed << setprecision(2);
    cout << "Total Credits: " << totalCredits << endl;
    cout << "Final Calculated CGPA: " << cgpa << " / 10.0\n";
    cout << "========================================\n";

    return 0;
}
