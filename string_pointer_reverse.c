#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str);
    char *begin = str;
    char *end = str + length - 1;
    char temp;

    while (end > begin) {
        temp = *begin;
        *begin = *end;
        *end = temp;

        begin++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;

    reverseString(str);

    printf("Reversed string using pointers: %s\n", str);

    return 0;
}
