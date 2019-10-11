/* #include <stdio.h>
int main(void) {
    int a;
    printf("value is %d\n",a);
    printf("pointer is %p\n",&a);
    printf ("Enter an ASCII code: \n");
    scanf("%d",&a);
    // ascii = a;
    printf("value is %d\n",a);
    printf("pointer is %p\n",&a);
    printf("Character for ascii code %d is %c \n",a,a);
    return 0;
    
} */
/* #include <stdio.h>
int main(void){
    printf("\a");
     printf("Warning!!! \n");
     return 0;
} */

/* #include <stdio.h>
int main(void){
    float flt_input;
    printf("Enter your age: \n");
    scanf("%f", &flt_input);
    printf("Your age for F is: %f \n",flt_input);
    printf("Your age for E is: %e \n",flt_input);
    return 0;
} */

/* #include <stdio.h>
int main(void){
    unsigned int per_year_second = 31560000;
    unsigned int age;
    printf("Enter your age : \n");
    scanf("%u",&age);
    printf("you are %u second old \n",per_year_second*age);
    return 0;
} */
#include <stdio.h>
int main(void){
    float H20_MASS = 3.0e-23;
    float H20_PER_QUART = 950;
    float quarts;
    printf("Enter a mount of water :\n");
    scanf("%f",&quarts);
    printf("There are %f molecules in %f quarts of water",H20_PER_QUART*quarts/H20_MASS,quarts);
    return 0;
}