#include <stdio.h>

int main(void){

    int grade;

    printf("Input a grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100){
        puts("Invalid grade");
    } else {
        if (grade >= 50){
            puts("Pass");
        } else{
            puts("Fail");
        }
    }

}