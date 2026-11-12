#include <stdio.h>
#include <stdlib.h> // malloc और free के लिए जरूरी लाइब्रेरी

int main() {
    int n, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamic memory allocation (malloc)
    ptr = (int*) malloc(n * sizeof(int));

    // चेक करें कि मेमोरी अलॉट हुई या नहीं
    if (ptr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Enter elements:\n");
    for(i = 0; i < n; ++i) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Sum = %d\n", sum);

    // मेमोरी को फ्री करना न भूलें
    free(ptr);

    return 0;
}
