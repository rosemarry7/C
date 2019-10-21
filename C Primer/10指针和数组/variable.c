/**
 * 在本地变量定义时加上static修饰符就成为静态本地变量
 * 当函数离开的时候静态本地变量会继续存在并保持其值
 * 静态本地变量的初始化只会在第一次进图这个函数的时候做，以后进入函数时会保持上次离开时的值
 *
 * 静态本地变量实际上是全局变量,查看全局变量的地址 可以看到 全局变量的地址都是连续的
 */
#include <stdio.h>
int f(void);

int gAll = 12;

int main(void){
    f();
    f();
    f();
    return 0;
}

int f(void){
    //static int all = 1;
    
    int all = 1;
    printf("in %s all=%d \n",__func__,all);
    all +=2;

    printf("again %s all=%d \n",__func__,all);
    return all;
}
