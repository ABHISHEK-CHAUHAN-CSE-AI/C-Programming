#include <stdio.h>

int main() {
    int arr[100], n, search, found = 0;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    // Linear Search Algorithm
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("%d is present at position %d (Index %d).\n", search, i + 1, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("%d is not present in the array.\n", search);
    }

    return 0;
}
