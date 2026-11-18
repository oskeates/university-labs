#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {

    int elements[30], n, count = 0;

    srand(time(NULL));

    for (int i = 0; i < 30; i++) {
        elements[i] = 0 + rand() % (100 - 0 + 1);
    }


    printf("Array elements:\n");

    for (int j = 0; j < 30; j++) {
        printf("%d ", elements[j]);
    }

    printf("\nEnter an integer between 0 and 100: ");
    scanf(" %d", &n);

    for (int k = 0; k <= 30; k++) {
        if (elements[k] == n) {
            count += 1;
        }
    }

    printf("The number %d occurs %d times in the array.", n, count);

}