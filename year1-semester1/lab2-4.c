#include <stdio.h>

int main(void){

    char week;
    
    printf("Enter a day code: ");
    scanf("%c", &week);
    
    if (week == 'm' || week == 'M'){
        puts("Monday");
        
    } else if (week == 't' || week == 'T'){
        puts("Tuesday");

    } else if (week == 'w' || week == 'W'){
        puts("Wednesday");

    } else if (week == 'r' || week == 'R'){
        puts("Thursday");

    } else if (week == 'f' || week == 'F'){
        puts("Friday");

    } else if (week == 's' || week == 'S'){
        puts("Saturday");

    } else if (week == 'u' || week == 'U'){
        puts("Sunday");

    } else {
        puts("Invalid Day");
    }

}
