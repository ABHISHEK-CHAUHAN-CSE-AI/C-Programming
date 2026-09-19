#include <stdio.h>

int main() {
    int year;

    printf("Koi bhi saal (Year) enter karein: ");
    scanf("%d", &year);

    // Leap year logic
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d ek Leap Year (लीप वर्ष) hai.\n", year);
    } else {
        printf("%d ek Leap Year NAHI hai.\n", year);
    }

    return 0;
}
