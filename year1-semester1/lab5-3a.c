#include <stdio.h>

int main(void) {
    int n, mid;

    do {
        printf("Enter an odd integer greater than or equal to 3: ");

        if (scanf(" %d", &n) != 1){
            scanf("%*c");
            continue;
        }

    } while (n < 3 || n % 2 == 0);

    mid = n / 2;

    for (int i = 0; i <= mid; i++) {
        int spaces = mid - i;

        for (int j = 0; j <= spaces; j++) {
            printf(" ");
        }

        for (int k = 0; k <= i * 2; k++) {
            printf("*");
        }

        printf("\n");
    }

    for (int i = mid - 1; i >= 0; i--) {
        int spaces = mid - i;

        for (int j = 0; j <= spaces; j++) {
            printf(" ");
        }

        for (int k = 0; k <= i * 2; k++) {
            printf("*");
        }

        printf("\n");        
    }

}