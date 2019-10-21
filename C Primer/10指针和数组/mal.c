#include <stdlib.h>
#include <stdio.h>
int main(void){
    void *p;
    int cnt =0;
    while((p = malloc(100*1024*1024))){
        cnt++;
    }

    printf("分配了%d00G的空间 \n",cnt/1024);

    return 0;
}
