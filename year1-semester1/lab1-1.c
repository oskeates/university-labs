#include <stdio.h>

int main(void){

    int num1;
    int num2;

    printf("Input the first integer: ");
    scanf("%d", &num1);

    printf("Input the second integer: ");
    scanf("%d", &num2);

    printf("The sum of the two integers is: %d\n", num1 + num2);
    printf("The difference of the two integers is: %d\n", num1 - num2);
    printf("The product of the two integers is: %d\n", num1 * num2);

}