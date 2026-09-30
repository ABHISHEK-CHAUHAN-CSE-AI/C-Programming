#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArrayUsingPointers(int *arr, int size) {
    printf("Array elements using pointer arithmetic: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int num1 = 25, num2 = 50;

    printf("--- Before Swap ---\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    // Swap using function pass-by-reference
    swap(&num1, &num2);

    printf("\n--- After Swap ---\n");
    printf("num1 = %d, num2 = %d\n\n", num1, num2);

    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printArrayUsingPointers(numbers, size);

    return 0;
}
