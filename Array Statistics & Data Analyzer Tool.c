#include <stdio.h>

int main() {
    int n, i;
    int max, min, sum = 0;
    int evenCount = 0, oddCount = 0;
    float average;

    printf("=======================================\n");
    printf("     C PROGRAM: ARRAY ANALYZER TOOL    \n");
    printf("=======================================\n\n");

    printf("Enter number of elements (1 to 20): ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integer values:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with first element
    max = arr[0];
    min = arr[0];

    for(i = 0; i < n; i++) {
        sum += arr[i];

        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];

        if(arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    average = (float)sum / n;

    printf("\n---------------------------------------\n");
    printf("           STATISTICAL ANALYSIS        \n");
    printf("---------------------------------------\n");
    printf("Total Sum         : %d\n", sum);
    printf("Average Value     : %.2f\n", average);
    printf("Maximum Element   : %d\n", max);
    printf("Minimum Element   : %d\n", min);
    printf("Even Numbers Count: %d\n", evenCount);
    printf("Odd Numbers Count : %d\n", oddCount);
    printf("---------------------------------------\n");

    return 0;
}
