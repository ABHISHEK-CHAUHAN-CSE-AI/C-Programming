#include <stdio.h>

int main() {
    int n, original, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;

    // Logic to reverse the number
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    printf("Reversed Number: %d\n", reversed);

    // Palindrome check (AKTU CT-1 Question)
    if (original == reversed) {
        printf("%d is a Palindrome number.\n", original);
    } else {
        printf("%d is NOT a Palindrome number.\n", original);
    }

    return 0;
}
