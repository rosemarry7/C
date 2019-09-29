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

/**
 * includ <stdio.h>
 * int main(void) {
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
**/
/* #include <stdio.h>
int main(void){
    int ten = 10;
    int two = 2;
    printf("Doing it right.\n");
    printf("%d minus %d is %d.\n", ten, 2,ten-two);
    printf("doing it wrong.\n");
    printf("%d minus %d is %d.\n",ten);
    return 0;
} */

/********************************
 * short int 或者简写为short类型，可能占用比int类型更少的存储空间，用于仅需小数值的场合以节省空间，它是一种有符号类型
 * long int 与short int 相反
 * long long int 需要更大数的场合
 * unsigned int 用于非负值的场合
 * C90 unsigned short int , unsigned long int 
 * C99 unsigned long long int
 * 
 * *******************************/
/* #include <stdio.h>
int main(void){
    int i = 2147483647;
    unsigned int j = i*2+1;
    printf("%d %d %d\n",i,i+1,i+2);
    printf("%u %u %u\n",j,j+1,j+2);
    int a;
    scanf("%d",&a);
    printf("%c",a);
    return 0;
} */
#include <stdio.h>
#include <string.h>
#define DENSETY 62.4

int main(){
    float weight,volumn;
    int size,letters;
    char name[40];

    printf("Hi what's your first name? \n");
    scanf("%s",name);
    return 0;
}

