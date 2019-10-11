#include <stdio.h>
int sum(int ar[],int n);

int main(void) {
    int urn[5] = {100,200,300,400,500};
    int * ptr1, * ptr2, * ptr3;
    int length = sizeof(urn)/sizeof(urn[0])-1;
    for (int i = 0; i < length; i++){
        printf("element [%d] address is : %p\n", i, &urn[i]);
    }
    ptr1 = urn;
    ptr2 = &urn[length];
        printf ("数组大小:%ld\n",ptr2-ptr1);

    printf("pointer value ,dereferenced pointer,pointer address \n");
    printf("ptr1=%p,*ptr1=%d,&ptr1=%p \n", ptr1, *ptr1,&ptr1);

    ptr3 = ptr1 +4;
    printf("\n adding a int to a pointer: \n");
    printf("ptr1 + 4 = %p, *(ptr4+3)=%d \n",ptr1+4,*(ptr1+3));
    printf("ptr1 + 4 dereferenced pointer = %p \n",ptr1+4);

    ptr1++;
    printf("ptr1++=%d,&ptr1=%p \n",*ptr1,ptr1);
    sum(urn,5);
    for (int i = 0; i < 5; i++){
        printf("element [%d]  is : %d\n", i, urn[i]);
    }
    return 0;
}

int sum(int ar[],int n){
    int i;
    int total = 0;
    int *ptr = &ar[0];
    for(i=0;i<n;i++){
        
        total += ar[i]++;
    }
    printf("total:%d \n", total);
    return 0;
}