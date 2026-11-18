#include <stdio.h>

int main(void) {

    double grade1, grade2, grade3, grade4, grade5, avg;

    scanf("%lf %lf %lf %lf %lf", &grade1, &grade2, &grade3, &grade4, &grade5);

    avg = (grade1 + grade2 + grade3 + grade4 + grade5) / 5;

    if (avg < 100 && avg > 0){

        printf("Average: %lf", avg);

        if (avg >= 80){
            puts("Letter Grade: A");
        } else if (avg >= 70){
            puts("Letter Grade: B");
        } else if (avg >= 60){
            puts("Letter Grade: C");
        } else if (avg >= 50){
            puts("Letter Grade: D");
        } else{
            puts("Letter Grade: F");
        }

    } else {
        puts("Error: Average must be between 0 and 100.");
    }

}