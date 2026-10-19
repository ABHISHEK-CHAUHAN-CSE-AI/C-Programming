#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0;

    printf("========================================\n");
    printf("        ARMSTRONG NUMBER CHECKER        \n");
    printf("========================================\n");
    
    printf("Enter a 3-digit integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    printf("\n----------------------------------------\n");
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    printf("========================================\n");

    return 0;
}
