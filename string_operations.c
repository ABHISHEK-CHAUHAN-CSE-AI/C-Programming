#include <stdio.h>

/*
  Project: String Manipulation without Header Library
  Repository: C-Programming
  Description: Custom C logic to calculate string length, reverse a string, 
               and copy strings manually.
*/

// Function to calculate length of a string
int getLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to reverse a string in-place
void reverseString(char str[]) {
    int len = getLength(str);
    int start = 0;
    int end = len - 1;
    
    while (start < end) {
        // Swap characters
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }
}

int main() {
    char myText[] = "ABHISHEK CHAUHAN";
    char copyText[50];
    
    printf("=== Original String: %s ===\n", myText);

    // 1. Calculate Length
    int len = getLength(myText);
    printf("String Length: %d characters\n", len);

    // 2. Manual Copying
    for (int i = 0; i <= len; i++) {
        copyText[i] = myText[i];
    }
    printf("Copied String: %s\n", copyText);

    // 3. Reversing String
    reverseString(myText);
    printf("Reversed String: %s\n", myText);

    return 0;
}
