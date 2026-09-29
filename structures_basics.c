#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s[3];

    printf("--- Enter Details for 3 Students ---\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d Roll Number: ", i + 1);
        scanf("%d", &s[i].rollNo);
        printf("Student %d Name: ", i + 1);
        scanf("%s", s[i].name);
        printf("Student %d Marks: ", i + 1);
        scanf("%f", &s[i].marks);
    }

    printf("\n====================================");
    printf("\n          STUDENT RECORDS           ");
    printf("\n====================================\n");
    printf("Roll No\t\tName\t\tMarks\n");
    printf("------------------------------------\n");

    for (int i = 0; i < 3; i++) {
        printf("%d\t\t%s\t\t%.2f\n", s[i].rollNo, s[i].name, s[i].marks);
    }

    return 0;
}
