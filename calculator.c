#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    printf("--- SIMPLE C CALCULATOR ---\n");
    printf("ऑपरेटर चुनें (+, -, *, /): ");
    scanf("%c", &operator);

    printf("दो संख्याएँ दर्ज करें: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            printf("परिणाम: %.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("परिणाम: %.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("परिणाम: %.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0.0)
                printf("परिणाम: %.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("त्रुटि! शून्य (zero) से भाग देना संभव नहीं है।\n");
            break;
        default:
            printf("अमान्य ऑपरेटर!\n");
    }

    return 0;
}
