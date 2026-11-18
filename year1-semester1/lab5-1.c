#include <stdio.h>

int main(void) {
    int num;
    
    do {
        printf("Input an integer greater than 1: ");

        if (scanf(" %d", &num) != 1){
            printf("Invalid input. Please enter an integer.\n");
            scanf("%*s");
        } else if (num <= 1){
            printf("Invalid input. Integer must be greater than 1.\n");
        }
    } while (num <= 1);

    for (int i = 2; i <= num - 1; i++) {
        if (num % i == 0) {
            printf("%d is not a prime number.\n", num);
            return 0;
        }
    }

    printf("%d is a prime number.\n", num);
}