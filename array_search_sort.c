#include <stdio.h>

/*
  Project: Array Operations (Bubble Sort & Linear Search)
  Repository: C-Programming
  Description: Program to sort an integer array and search for a specific element.
*/

// Function to perform Bubble Sort on an array
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap adjacent elements if they are in wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform Linear Search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return array index if key is found
        }
    }
    return -1; // Return -1 if key is not present
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int searchKey = 22;

    printf("=== Original Array ===\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // Sorting array
    bubbleSort(arr, n);

    printf("=== Sorted Array (Ascending) ===\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // Searching element in array
    int result = linearSearch(arr, n, searchKey);
    if (result != -1) {
        printf("[Success] Element %d found at index %d in sorted array.\n", searchKey, result);
    } else {
        printf("[Not Found] Element %d is not in the array.\n", searchKey);
    }

    return 0;
}
