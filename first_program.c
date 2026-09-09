#include <stdio.h>

int main() {
    char name[50];
    float marks1, marks2, marks3, total, percentage;

    printf("==========================================\n");
    printf("   STUDENT MARKS & GRADE CALCULATOR IN C  \n");
    printf("==========================================\n\n");

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks in C Programming (out of 100): ");
    scanf("%f", &marks1);
    printf("Enter Marks in Physics (out of 100): ");
    scanf("%f", &marks2);
    printf("Enter Marks in Calculus (out of 100): ");
    scanf("%f", &marks3);

    total = marks1 + marks2 + marks3;
    percentage = (total / 300.0) * 100;

    printf("\n------------------------------------------\n");
    printf("Student Name : %s\n", name);
    printf("Total Marks  : %.2f / 300\n", total);
    printf("Percentage   : %.2f%%\n", percentage);

    if (percentage >= 90) {
        printf("Grade        : A+ (Excellent)\n");
    } else if (percentage >= 75) {
        printf("Grade        : A (Very Good)\n");
    } else if (percentage >= 60) {
        printf("Grade        : B (Good)\n");
    } else if (percentage >= 40) {
        printf("Grade        : C (Pass)\n");
    } else {
        printf("Grade        : F (Fail)\n");
    }
    printf("------------------------------------------\n");

    return 0;
}
