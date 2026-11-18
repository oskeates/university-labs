#include <stdio.h>

int main(void){

    char day;

    printf("Input a day code: ");
    scanf("%c", &day);

    switch (day){

        case 'M':
        case 'm':
            puts("Monday");
            break;
        
        case 'T':
        case 't':
            puts("Tuesday");
            break;

        case 'W':
        case 'w':
            puts("Wednesday");
            break;
            
        case 'R':
        case 'r':
            puts("Thursday");
            break;
            
        case 'F':
        case 'f':
            puts("Friday");
            break;
            
        case 'S':
        case 's':
            puts("Saturday");
            break;
            
        case 'U':
        case 'u':
            puts("Sunday");
            break;
        
        default:
            puts("Invalid day");
            break;

    }

}