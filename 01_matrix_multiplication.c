#include <stdio.h>

// Program to multiply two 2x2 matrices
int main() {
    int a[2][2], b[2][2], mul[2][2];

    printf("Enter elements of first 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of second 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Logic for Matrix Multiplication
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            mul[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display Result
    printf("\n--- Resultant Matrix (A x B) ---\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
