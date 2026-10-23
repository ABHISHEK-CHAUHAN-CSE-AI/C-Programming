#include <stdio.h>

struct Student {
    int rollNo;
    char name[30];
    float marks;
};

// Function prototype
void displayStudent(struct Student s);

int main() {
    struct Student s1 = {101, "Abhishek", 88.5};

    // Passing structure to function
    displayStudent(s1);

    return 0;
}

// Function definition
void displayStudent(struct Student s) {
    printf("--- Student Details ---\n");
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name       : %s\n", s.name);
    printf("Marks      : %.2f\n", s.marks);
}
