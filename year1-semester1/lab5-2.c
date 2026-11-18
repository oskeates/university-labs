#include <stdio.h>
#include <limits.h>

int main(void) {
    double n;
    int power;
    
    do {
        printf("Input a positive integer: ");

        if (scanf(" %lf", &n) != 1){
            printf("Invalid input. Please enter a positive integer.\n");
            scanf("%*s");
        } else if (n <= 1){
            printf("Invalid input. Integer must be positive.\n");
        }
    } while (n <= 0);

    for (int i = 0; i <= n; i++) {
        power = 1;

        for (int j = 0; j < i; j++) {
            if (power > INT_MAX / 2) {
                printf("Integer overflow will occur. Stopping generation.");
                return 0;
            } else {
                power = power * 2;
            }
        }

        printf("2^%d = %d\n", i, power);
    }

}