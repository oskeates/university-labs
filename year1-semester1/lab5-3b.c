#include <stdio.h>

int main(void) {
    int n, mid;

    printf("Input an odd integer greater than or equal to 3: ");

    do {

        if (scanf(" %d", &n) != 1){
            printf("Invalid input, try again: ");
            scanf("%*c");
            continue;
        }

        if (n < 3 || n % 2 == 0) {
            printf("Invalid input, try again: ");
        }

    } while (n < 3 || n % 2 == 0);

    mid = n / 2;

    for (int i = 0; i <= mid; i++) {
        int spaces = mid - i;

        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }

        printf("*");

        if (i > 0) {
            for (int k = 0; k < (i * 2 - 1); k++) {
                printf(" ");
            }
            printf("*");
        }

        printf("\n");
    }

    for (int i = mid - 1; i >= 0; i--) {
        int spaces = mid - i;

        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }

        printf("*");

        if (i > 0) {
            for (int k = 0; k < (i * 2 - 1); k++) {
                printf(" ");
            }
            printf("*");
        }

        printf("\n");        
    }

}