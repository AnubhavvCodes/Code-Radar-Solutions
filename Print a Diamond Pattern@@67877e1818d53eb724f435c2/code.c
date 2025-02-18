#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Upper triangle (including the middle row)
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int space = 1; space <= n - i; space++) {
            printf("  "); // Two spaces for a wider diamond
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower triangle (excluding the middle row)
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces (same as upper triangle)
        for (int space = 1; space <= n - i; space++) {
            printf("  ");
        }
        // Print stars (same as upper triangle)
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}