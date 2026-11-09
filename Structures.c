#include <stdio.h>
#include <string.h>

// Define Structure for Student
struct Student {
    int rollNo;
    char name[50];
    float marks;
    char grade;
};

// Function to calculate grade based on marks
char calculateGrade(float marks) {
    if (marks >= 90) return 'A';
    else if (marks >= 75) return 'B';
    else if (marks >= 60) return 'C';
    else if (marks >= 40) return 'D';
    else return 'F';
}

int main() {
    int n, i;
    
    printf("=========================================\n");
    printf("     STUDENT RECORD MANAGEMENT SYSTEM    \n");
    printf("=========================================\n");
    printf("Enter total number of students: ");
    if (scanf("%d", &n) != 1) return 1;

    struct Student students[n];

    for (i = 0; i < n; i++) {
        printf("\n--- Enter Details for Student %d ---\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks (out of 100): ");
        scanf("%f", &students[i].marks);
        
        students[i].grade = calculateGrade(students[i].marks);
    }

    printf("\n\n=========================================\n");
    printf("           STUDENT REPORT CARD           \n");
    printf("=========================================\n");
    printf("%-10s | %-20s | %-10s | %-5s\n", "Roll No", "Name", "Marks", "Grade");
    printf("-----------------------------------------\n");
    
    for (i = 0; i < n; i++) {
        printf("%-10d | %-20s | %-10.2f | %-5c\n", 
               students[i].rollNo, students[i].name, students[i].marks, students[i].grade);
    }
    printf("=========================================\n");

    return 0;
}
