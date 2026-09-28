#include <stdio.stdio.h>
#include <stdio.h>

void readMatrix(int rows, int cols, int matrix[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int rows, int cols, int matrix[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int r1, int c1, int A[10][10], int r2, int c2, int B[10][10], int C[10][10]) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int r1, c1, r2, c2;
    int A[10][10], B[10][10], C[10][10];

    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter elements of Matrix A:\n");
    readMatrix(r1, c1, A);

    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("\nError: Matrix multiplication not possible! Columns of A must equal Rows of B.\n");
        return 0;
    }

    printf("Enter elements of Matrix B:\n");
    readMatrix(r2, c2, B);

    multiplyMatrices(r1, c1, A, r2, c2, B, C);

    printf("\nResultant Product Matrix (A x B):\n");
    printMatrix(r1, c2, C);

    return 0;
}
