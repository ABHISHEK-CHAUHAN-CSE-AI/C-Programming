#include <stdio.h>

int main() {
    int arr[100], n, search;
    int low, high, mid, found = 0;

    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);

    printf("Enter %d sorted integers (Ascending Order):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    // Binary Search Algorithm
    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == search) {
            printf("Element %d found at position %d (Index %d).\n", search, mid + 1, mid);
            found = 1;
            break;
        }

        if (arr[mid] < search) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Element %d is not present in the array.\n", search);
    }

    return 0;
}
