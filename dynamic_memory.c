#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Memory allocation using malloc
    ptr = (int*) malloc(n * sizeof(int));

    // Check if memory has been successfully allocated
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Sum of elements = %d\n", sum);

    // Freeing the allocated memory
    free(ptr);

    return 0;
}
