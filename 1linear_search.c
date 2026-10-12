#include <stdio.h>

// Program to implement Linear Search in C
int main() {
    int n, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear Search Logic
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at index %d (Position %d).\n", key, i, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
