/*#include <stdio.h>
#include <string.h>
#define DENSETY 62.4

int main(){
    float weight,volumn;
    int size,letters;
    char name[40];

    printf("Hi what's your first name? \n");
    scanf("%s",name);
    printf("%s, what's your weight in pounds \n",name);
    scanf("%f",&weight);
    size = sizeof name;
    letters = strlen(name);
    volumn = weight/DENSETY;
    printf("well %s your volumn is %2.2f cubic feet \n",name,volumn);
    printf("also your first name has %d letters",letters);
    printf("and we have %d bytes to store it \n",size);
    return 0;
}**/


/*stdio.h 定义EOF 为-1，EOF=End Of File*/
#include <stdio.h>
int main(void){
    int ch;
    while((ch = getchar()) != EOF){
        putchar(ch);
    }
    return 0;
}