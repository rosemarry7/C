#include <stdio.h>

void cllatz(int *a,int *i);

int main(void){
    int a = 0;
    int i = 0;
    scanf("%d", &a);
    while(a != 1){
        printf("%d----%d \n",a,i);
        cllatz(&a,&i);

    }
    printf("%d",i);
    return 0;

                    
}

void cllatz(int *a,int *i){
    if(*a%2 != 1){
       (*a)/=2;
    } else {
        *a = ((*a)*3+1) /2;
    }
    (*i)++;
}
