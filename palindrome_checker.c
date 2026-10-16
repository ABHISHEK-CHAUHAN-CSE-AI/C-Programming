#include <stdio.h>
#include <string.h>

// Program to check if a string is a palindrome
int main() {
    char str[100];
    int length, i, flag = 0;

    printf("========================================\n");
    printf("        STRING PALINDROME CHECKER       \n");
    printf("========================================\n");
    
    printf("Enter a word/string: ");
    scanf("%s", str);

    length = strlen(str);

    // Logic to check palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    printf("\n----------------------------------------\n");
    if (flag) {
        printf("Result: '%s' is NOT a palindrome.\n", str);
    } else {
        printf("Result: '%s' IS a palindrome!\n", str);
    }
    printf("========================================\n");

    return 0;
}
