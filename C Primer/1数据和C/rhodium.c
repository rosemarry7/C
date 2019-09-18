/**
 * int 
 * long 
 * short 
 * unsigned
 * char
 * float
 * double
 * 
 * C90
 * signed
 * void 
 * 
 * 
 * C99
 * _Bool
 * _Complex
 * _Imaginary
 * 
 * 
 * ****************************************************************/
#include <stdio.h>
int main(void) {
    float weight;
    float value;

    printf("Are you worth your weight in rhodium\n");
    printf("Let's check it our \n");
    printf("please enter your weight in pounds.\n");

    scanf("%f", &weight);
    value = 770 * weight * 14.5833;
    printf("Your weight in rhodium is worth $%.2f.\n", value);
    printf("you are easily worth that , If rhodium price drop.\n");
    printf("eat more to maintain your weight \n");
    return 0;
}



