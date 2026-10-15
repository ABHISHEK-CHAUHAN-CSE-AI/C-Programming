#include <stdio.h>

// Define structure for Student
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int n;
    printf("========================================\n");
    printf("      STUDENT RECORD MANAGEMENT         \n");
    printf("========================================\n");
    
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Taking input for each student
    for (int i = 0; i < n; i++) {
        printf("\n--- Enter details for Student %d ---\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks (out of 100): ");
        scanf("%f", &s[i].marks);
    }

    // Displaying all records
    printf("\n========================================\n");
    printf("          SAVED STUDENT RECORDS         \n");
    printf("========================================\n");
    printf("Roll No\t\tName\t\tMarks\n");
    printf("----------------------------------------\n");
    
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%s\t\t%.2f\n", s[i].rollNo, s[i].name, s[i].marks);
    }
    printf("========================================\n");

    return 0;
}
