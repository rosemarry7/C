#include <stdio.h>
void interChange(int * u,int * v);
int main(void){
    int x=5,y=10;
    printf("Originally  x=%d and y=%d\n",x,y);
    printf("Pointer  x=%p and y=%p\n",&x,&y);
    interChange(&x,&y);
    printf("Now x=%d and y=%d\n",x,y);
    return 0;
}

void interChange(int  * u,int  * v){
    printf("Begin Pointer  u=%p and v=%p\n",&u,&v);
    int temp;
    temp = *u;
    *u = *v;
    *v = temp;
    printf("After Pointer  u=%p and v=%p\n",&u,&v);
}