#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    
    int n;

    printf("Enter the number of elements: ");
    scanf(" %d", &n);

    int list[n];

    for (int i = 0; i < n; i++) {
        list[i] = -1000 + rand() % (1000 + 1000 + 1);
    }

    printf("\nOriginal array: ");

    for (int j = 0; j < n; j++) {
        printf("%d, ", list[j]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (list[j] > list[j + 1]) {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }

    printf("\n\nSorted array: ");
    
    for (int j = 0; j < n; j++) {
        printf("%d, ", list[j]);
    }
}