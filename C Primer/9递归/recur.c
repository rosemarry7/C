/* #include <stdio.h>
void up_and_down(int n);
int main(void){
    up_and_down(1);
}
void up_and_down(int n){
    printf("Level %d: n location %p \n",n,&n);
    printf("Level %d: n location %p : munbers: %lu \n",n,&n,sizeof(n));
    if (n<4)
    {
       up_and_down(n+1);
       printf("Level %d: n location %p \n",n,&n);
    }
    
} **/


#include <stdio.h>
int main(void){
    return 0;
}