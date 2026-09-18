#include <stdio.h>

int main() {
    char op;
    double num1, num2;

    printf("Operator chunein (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Do numbers dalein: ");
    scanf("%lf %lf", &num1, &num2);

    switch (op) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Error! 0 se divide nahi kar sakte.\n");
            break;
        default:
            printf("Sahi operator nahi chuna gaya!\n");
    }

    return 0;
}
