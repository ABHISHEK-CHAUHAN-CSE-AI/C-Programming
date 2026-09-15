#include <stdio.h>

int main() {
    int number;

    printf("Koi bhi ek number dalein: ");
    scanf("%d", &number);

    // Modulus (%) operator ka istemal karke remainder check karte hain
    if (number % 2 == 0) {
        printf("%d ek EVEN (सम) number hai.\n", number);
    } else {
        printf("%d ek ODD (विषम) number hai.\n", number);
    }

    return 0;
}
