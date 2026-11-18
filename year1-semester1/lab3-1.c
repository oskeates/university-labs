#include <stdio.h>

int main(void){

    char choice;
    double num;

    printf("Enter conersion type (f for fahrenheit to celcius, c for celcius to fahrenheit): ");
    scanf(" %c", &choice);
    printf("Enter temperature: ");

    if (scanf(" %lf", &num) != 1) {
        printf("Invalid temperature.\n");
        return 0;
    }

    switch (choice){
        case 'c':
        case 'C':
            printf("Temperature in fahrenheit: %lf", num * 1.8 + 32);
            break;

        case 'f':
        case 'F':
            printf("Temperature in celcius: %lf", (num - 32) / 1.8);
            break;

        default:
            printf("Invalid conversion choice");
            break;
    }

}