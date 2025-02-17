#include <stdio.h>

int main() {
    char ch;

    // Read a single character from the input
    scanf(" %c", &ch); // Note the space before %c to consume any leading whitespace

    // Check if it's an alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // Convert to lowercase for easier vowel check
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32; // Convert to lowercase
        }

        // Check if it's a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else if (ch >= '0' && ch <= '9') {
        // Check if it's a digit
        printf("Digit\n");
    } else {
        // It's a special character
        printf("Special Character\n");
    }

    return 0;
}