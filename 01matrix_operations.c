#include <stdio.h>

#define MAX 10

void calculateDiagonalSum(int matrix[MAX][MAX], int n) {
    int mainDiagonalSum = 0;
    int antiDiagonalSum = 0;

    for (int i = 0; i < n; i++) {
        mainDiagonalSum += matrix[i][i];
        antiDiagonalSum += matrix[i][n - 1 - i];
    }

    printf("\nSum of Main Diagonal Elements = %d\n", mainDiagonalSum);
    printf("Sum of Anti-Diagonal Elements = %d\n", antiDiagonalSum);
}

int main() {
    int matrix[MAX][MAX];
    int n;

    printf("Enter the size of N x N Matrix (max 10): ");
    scanf("%d", &n);

    printf("Enter elements for %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n--- Entered Matrix ---\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    calculateDiagonalSum(matrix, n);

    return 0;
}
