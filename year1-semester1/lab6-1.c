#include <stdio.h>

int main(void) {

    int mark = 0, total, count = 0;
    double average, highest;

    for (int j = 1; j <= 3; j++) {

        total = 0;

        printf("Student %d\n", j);

        for (int i = 1; i <= 3; i++) {
            printf("Enter marks for subject %d: ", i);
            scanf(" %d", &mark);
            total += mark;

        }
        
        average = (double)total / 3;

        if (average >= 50) {
            count += 1;
        }

        printf("Total marks = %d\n", total);
        printf("Average: %.2f\n", average);

        if (average > highest) {
            highest = average;
        }
    }

    printf("Number of students with average >= 50: %d\n", count);
    printf("Highest average: %.2f\n", highest);


}