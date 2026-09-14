#include <stdio.h>

int main() {
    int num1, num2;

    printf("Pehla number dalein: ");
    scanf("%d", &num1);

    printf("Doosra number dalein: ");
    scanf("%d", &num2);

    printf("\n--- Results ---\n");
    printf("Addition (+): %d\n", num1 + num2);
    printf("Subtraction (-): %d\n", num1 - num2);
    printf("Multiplication (*): %d\n", num1 * num2);

    if (num2 != 0) {
        printf("Division (/): %.2f\n", (float)num1 / num2);
    } else {
        printf("Division (/): Zero se divide nahi ho sakta!\n");
    }

    return 0;
}
