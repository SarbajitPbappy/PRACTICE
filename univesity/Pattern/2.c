#include <stdio.h>

int main(void) {
    int n;
    printf("Enter the number of rows\n");
    scanf("%d", &n);

    // Upper part of the pattern
    for (int i = 0; i < n / 2; i++) {
        // Print leading spaces
        for (int j = i; j < n / 2; j++) {
            printf(" ");
        }

        // Print left stars
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }

        // Print spaces between the two parts
        for (int j = 0; j < 2 * (n / 2 - i) - 1; j++) {
            printf(" ");
        }

        // Print right stars
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    // Middle row of the pattern, which is a full line of asterisks
    for (int i = 1; i <= n*2; i++) {
        printf("*");
    }
    printf("\n");

    // Lower part of the pattern
    for (int i = n / 2 - 1; i >= 0; i--) {
        // Print leading spaces
        for (int j = i; j < n / 2; j++) {
            printf(" ");
        }

        // Print left stars
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }

        // Print spaces between the two parts
        for (int j = 0; j < 2 * (n / 2 - i) - 1; j++) {
            printf(" ");
        }

        // Print right stars
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
