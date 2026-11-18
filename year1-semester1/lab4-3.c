#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int n, rmin, rmax;

    srand(time(NULL));

    while (1) {
        printf("Enter n, rmin, and rmax: ");
        if (scanf(" %d %d %d", &n, &rmin, &rmax) != 3) {
            printf("Invalid input, try again\n");
            continue;
        }

        if (n <= 0 || rmax < rmin) {
            printf("Invalid input, try again\n");
            continue;
        } else {
            break;
        }
    }

        double average = 0;

        for (int i = n; i >= 1; i--){
            int randNum = rmin + rand() % (rmax - rmin + 1);

            printf("%d ", randNum);

            average += randNum;
        }

        printf("\nAverage = %.2f\n", average / n);

        return 0;
    

}