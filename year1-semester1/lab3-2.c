#include <stdio.h>

int main(void){

    int num, total, i;

    total = 0;

    printf("Enter a positive integer: ");
    scanf(" %d", &num);

    for (i = 1; i < num; i++) {

        if (num % i == 0) {
            total += i;
        }

    }

    if (total == num) {
        printf("%d is a perfect number", num);
    } else {
        printf("%d is not a perfect number", num);
    }

}