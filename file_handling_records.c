#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int rollNo;
    float marks;

    // Writing data to file in 'w' mode
    fp = fopen("student_data.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter Student Name: ");
    scanf("%s", name);
    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);
    printf("Enter Marks: ");
    scanf("%f", &marks);

    fprintf(fp, "Name: %s\nRoll No: %d\nMarks: %.2f\n", name, rollNo, marks);
    fclose(fp);
    printf("\nData successfully written to student_data.txt\n");

    // Reading data from file in 'r' mode
    fp = fopen("student_data.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\n--- Reading Data from File ---\n");
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);

    return 0;
}
