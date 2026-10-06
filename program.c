#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store student record
struct Student {
    int id;
    char name[50];
    float marks;
};

void addStudent() {
    struct Student s;
    FILE *fp = fopen("students.dat", "ab");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\nEnter Student ID: ");
    scanf("%d", &s.id);
    printf("Enter Name: ");
    scanf(" %[^\n]s", s.name); // Reads string with spaces
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(struct Student), 1, fp);
    fclose(fp);
    printf("Student record added successfully!\n");
}

void displayStudents() {
    struct Student s;
    FILE *fp = fopen("students.dat", "rb");
    if (fp == NULL) {
        printf("\nNo records found!\n");
        return;
    }

    printf("\n--- Student Records ---\n");
    printf("%-10s %-20s %-10s\n", "ID", "Name", "Marks");
    printf("----------------------------------------\n");
    
    while (fread(&s, sizeof(struct Student), 1, fp)) {
        printf("%-10d %-20s %-10.2f\n", s.id, s.name, s.marks);
    }
    fclose(fp);
}

int main() {
    int choice;
    while (1) {
        printf("\n=== Student Management System ===\n");
        printf("1. Add Student\n2. Display All Students\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
