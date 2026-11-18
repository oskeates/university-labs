#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int n, sum = 0;

    srand(time(NULL));

    printf("Enter the number of array elements: ");
    scanf(" %d", &n);

    int element[n];

    for (int i = 0; i <= n; i++) {
        element[i] = 5 + rand() % (50 - 5 + 1);
    }

    printf("Array elements: ");

    for (int k = 0; k < n; k++) {
        printf("%d ", element[k]);
    }

    for (int j = 0; j < n; j++) {
        sum += element[j];
    }

    printf("\nSum: %d\n", sum);

    printf("Average: %.2f", (double)sum / n);

}