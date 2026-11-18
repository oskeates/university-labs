#include <stdio.h>

int main (void) {

    int n, again;
    double sum, denominator;

    while (1) {

        sum = 0;

        printf("Please enter a positive integer value (between 1 and 7, inclusive): ");
        
        do {
            if (scanf(" %d", &n) != 1) {
                printf("Invalid input, enter an integer between 1 and 7, inclusive: ");
                scanf(" %*c");
            }
            if (n < 1 || n > 7) {
                printf("Invalid input, enter an integer between 1 and 7, inclusive: ");
            }
        } while (n < 1 || n > 7);

        for (int i = 1; i <= n; i++){

            denominator = 1;

            for (int j = 1; j <= (i + 1); j++) {
                denominator *= j;
            }

            printf("1 / %.2f", denominator);
            sum += 1 / denominator;

            if (i <= n - 1) {
                printf(" + ");
            }

        }

        printf(" = %.3f", sum);

        printf("\nDo you want to try again? (1/yes, 0/no): ");
        scanf(" %d", &again);

        if (again == 0){
            printf("Goodbye!");
            break;
        }
    }
}