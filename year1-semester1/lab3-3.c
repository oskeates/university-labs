#include <stdio.h>

int main(void){

    int year1, year2, i;

    printf("Enter two years: ");
    scanf("%d %d", &year1, &year2);

    for (i = year1; i <= year2; i++){
        if (i % 100 == 0){
            if (i % 400 == 0){
                printf("%d \t", i);
            }
        } else if (i % 4 == 0){
            printf("%d \t", i);
        }
    }

}