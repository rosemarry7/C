#include <stdio.h>
#define SIZE 4

int main(){
    short date[SIZE] = {1,2,3,4};
    short * pti;
    short index;
    double bill[SIZE] = {5,6,7,8};
    double * ptf;
    pti = date;
    ptf = bill;
    printf(" %s %d \n",pti,ptf);
    printf("pointers %10p %d %10p \n",pti,*pti,&pti);
    printf("%23s %10s \n","short","double");
    for(index = 0; index < SIZE; index++){
        printf("pointers %d: %10p %10p \n",index,pti+index,ptf+index);

    }
    return 0;
}