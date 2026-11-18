#include <stdio.h>

int main(void){

    int adult;
    int child;

    int adultCost;
    int childCost;

    printf("Input the amount of adult tickets: ");
    scanf("%d", &adult);

    printf("Input the amount of child tickets: ");
    scanf("%d", &child);

    adultCost = 15 * adult;
    childCost = 10 * child;

    puts("=========================");
    puts("      Movie Tickets");
    puts("=========================");

    printf("Adult tickets: %d\n", adult);
    printf("Child tickets: %d\n", child);

    printf("Adult cost: $%d\n", adultCost);
    printf("Child cost: $%d\n", childCost);

    puts("-------------------------");

    printf("Total: %d\n", adultCost + childCost);

    puts("=========================");

}