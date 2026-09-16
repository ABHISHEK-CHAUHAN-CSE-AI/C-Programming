#include <stdio.h>

int main() {
    int num, isPrime = 1;

    printf("Ek integer number dalein: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0; // 1 ya usse chhote number prime nahi hote
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Agar kisi se divisible ho gaya to prime nahi hai
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d ek PRIME (अभाज्य) number hai.\n", num);
    } else {
        printf("%d ek PRIME number NAHI hai.\n", num);
    }

    return 0;
}
