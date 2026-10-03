#include <stdio.h>

// Function to reverse an array
void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to print array elements
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numbers[] = {12, 45, 7, 89, 23, 56};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original Array: ");
    printArray(numbers, size);

    reverseArray(numbers, size);

    printf("Reversed Array: ");
    printArray(numbers, size);

    return 0;
}
