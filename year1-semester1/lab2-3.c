#include <stdio.h>

int main(void){

    int num;

    printf("Input a number: ");

    scanf("%d", &num);

    if (num > 0){
        if (num % 2 == 0){
            puts("Positive and even");
        } else {
            puts("Positive and odd");
        }
    } else {
        if (num % 2 == 0){
            puts("Negative and even");
        } else {
            puts("Negative and odd");
        }
    }

}