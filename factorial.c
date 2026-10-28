#include <stdio.h>

// फैक्टोरियल निकालने का फंक्शन
unsigned long long findFactorial(int n) {
    unsigned long long fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    printf("--- FACTORIAL CALCULATOR ---\n");
    printf("एक धनात्मक संख्या दर्ज करें: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("त्रुटि: ऋणात्मक संख्या का फैक्टोरियल संभव नहीं है!\n");
    } else {
        printf("%d का Factorial = %llu\n", n, findFactorial(n));
    }
    
    return 0;
}
