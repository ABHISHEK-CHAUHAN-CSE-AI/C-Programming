#include <stdio.h>

int main() {
    int n, reversed = 0, remainder, original;
    
    printf("--- PALINDROME NUMBER CHECKER ---\n");
    printf("एक संख्या दर्ज करें: ");
    scanf("%d", &n);
    
    original = n;

    // संख्या को उलटने का लॉजिक
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // चेक करना कि मूल संख्या और उल्टी संख्या बराबर है या नहीं
    if (original == reversed)
        printf("%d एक Palindrome संख्या है!\n", original);
    else
        printf("%d Palindrome संख्या नहीं है।\n", original);

    return 0;
}
