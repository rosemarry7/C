/* #include <stdio.h>

int main(void){
     char temp[20];
     int num = 32;
     for(int i=0; i<20; i++){
         num += num;
         temp[i] = num;
         printf("%u \n", temp[i]);
     }
     return 0;
} */
#include <stdio.h>
#define MONTHS 12
int main(){
    int days[MONTHS] = {30, 29, [4]=30, 30, 31, [1]=12};
    int i;
    for(i=0;i<MONTHS;i++){
        printf("%d",days[i]);
    }
    return 0;
}