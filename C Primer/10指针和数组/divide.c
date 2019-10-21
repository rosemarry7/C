#include <stdio.h>
int divide(int a,int b, int *result);
int main(void){
    int a=5;
    int b=2;
    int c;
    if (divide(a,b,&c)){
        printf("%d/%d=%d\n", a, b, c);
    }
    return 0;
}

int divide(int a, int b, int *result){
    int ret = 1; 
    if(b==0) ret =0;
    else{
        *result = a/b;
    }
    return ret;
}
/**
 *数组变量是特殊的指针

 数组变量本身表达地址，所以
 1. int a[10]; int *p=a; //无需用&取地址
 2. 但是数组的单元表达的是变量，需要用&取地址
 3. a == &a[0]
 
      '[]' 运算符可以对数组作，也可以对指针做：
         p[0] <==> a[0]
    
     '*'运算符可以对指针做，也可以对数组作

4. 数组变量是const的指针
数组变量是常量指针，两个数组之间不能直接做赋值

int * const p=&i;  和 const int * p=&i;的区别:
const int * p=&i; 这句的意思是
    *p = 26; //ERROR! (*p) 是const
    i=26; //OK
    p=&j; //OK
int * const p=&i; 这句的意思是：
    p++; //ERROR! 指针本身不可变，它指向的变量可以变 它也可以指向别的变量

一种表示指针不能被修改，一种表示指针指向的值不能被修改
判断哪个被const了的标志是const在*前面表示值不能被修改，如果const在* 的后面表示指针本身不能被修改


const int a[] = {1,2,3,4,5,6}
 数组变量已经是const的指针了，这里的const表名数组的每个单元都是const int，所以必须通过初始化进行赋值

总结：
    指针可以用来做什么:
     需要传入较大的数据时用作参数
     传入数组后对数组做操作
     函数返回不止一个结果
        需要用函数来修改不止一个变量
     动态申请内存
 */
