#include <stdio.h>


int main(void) {

    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, math1;

    printf("Enter the first 12 digits of ISBN-13: ");
    
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12);

    math1 = (num1 + num2*3 + num3 + num4*3 + num5 + num6*3 + num7 + num8*3 + num9 + num10*3 + num11 + num12*3) % 10;

    math1 = (10 - math1) % 10;
    
    printf("Check digit: %d\n", math1);
    
}