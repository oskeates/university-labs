#include <stdio.h>

int main(void) {

    long long isbn;
    int sum = 0, checkDigit;

    printf("Input the ISBN number: ");
    scanf(" %lld", &isbn);

    for (int pos = 12; pos >= 1; pos--){
        int digit = isbn % 10;
        isbn /= 10;

        if (pos % 2 == 0){
            sum += digit * 3;
        } else {
            sum += digit;
        }
    }

    int remainder = sum % 10;
    
    if (remainder == 0){
        checkDigit = 0;
    } else {
        checkDigit = 10 - remainder;
    }

    printf("The check digit is: %d\n", checkDigit);
}