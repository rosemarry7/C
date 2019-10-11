/* #include <stdio.h>
int main(void) {
    printf("%d \n",123);
    printf("%c \n",123);
    printf("%d %%\n",123);
    printf("%-2d\n",123);
    printf("%+4d\n",123);
    printf("% 10d\n",123);
    printf("%05.2f\n",123445.5555555);
    printf("%#X\n",123445);
    return 0;
} */
/* 
#include <stdio.h>
#define PAGES 931
int main(void) {
    printf("*%d* \n",PAGES);
    printf("*%2d* \n",PAGES);
    printf("*%10d* \n",PAGES);
    printf("*%-10d* \n",PAGES);
    return 0;
} */

/* #include <stdio.h>
int main(void) {
    const double RENT = 395223.992323;
    printf("*%f* \n",RENT);
    printf("*%e* \n",RENT);
    printf("*%4.2f* \n",RENT);
    printf("*%3.1f* \n",RENT);
    printf("*%10.3f* \n",RENT);
    printf("*%10.3e* \n",RENT);
    printf("*%+4.2f* \n",RENT);
    printf("*%010.2f* \n",RENT);
    return 0;

} */

/* #include <stdio.h>
int main(void){
    printf("%x %X %#x \n",31,31,31);
    printf("* *%d* *% d* *% d* *\n",42,42,-42);
    printf("* *%5d* *%5.3d* *%05d* *%05.3d* *\n",6,6,6,6);
    return 0;
} */

/* #include <stdio.h>
#define BLURB "Authentic imitation"
int main(void) {
    printf("/%2s/\n",BLURB);
    printf("/%24s/\n",BLURB);
    printf("/%24.5s/\n",BLURB);
    printf("/%-24s/\n",BLURB);
    return 0;
} */

/** #include <stdio.h>
#define PAGES 336
#define WORDS 65618
void f(int n);
int main(void) {
    short num = PAGES;
    short mnum = -PAGES;
    char bit = num << 8 >> 8;

    printf("num as short and unsigned short: %hd %hu\n",num,mnum);
    printf("-num as short and unsigned short: %hd %hu\n",mnum,mnum);
    printf("num as int and char: %d %c\n",num,num);
    printf("num as int and char: %d %d\n",num>>8,336%256);
    printf ("*%c* \n",bit);
    printf("%lu \n",sizeof(bit));
    f(336);
    return 0;
}

void f(int n)
{
if(n) f(n/2);
else return;
printf("%d",n%2);
} **/

#include <stdio.h>

int main(void) {
    float n1=3.0;
    double n2=3.0;
    long n3=2000000000;
    long n4=1234567890;

    printf("%.1e %.1e %.1e %.1e \n",n1,n2,n3,n4);
    printf("%ld %ld %ld %ld \n",n1,n2,n3,n4);

    printf ("/Users/wind/CLionProjects/C/C Primer/4字符串和格式化输入输出git:(master) ✗ >./main \n");
    printf ("/Users/wind/CLionProjects/C/C Prime"
    "r/4字符串和格式化输入输出git:(master) ✗ >./main \n");
    printf ("/Users/wind/CLionProjects/C/C Primer/4字 \
符串和格式化输入输出git:(master) ✗ >./main \n");
    printf ("%d \n",(2+3)*6);
    printf ("%d \n",(12+6)/2*3);
    printf ("%d \n",(int)3.8+3.3);
    printf ("%d \n",(int)3.8+3.3);
    printf ("%d \n",(int)3.8+3.3);
    printf ("%d \n",(int)3.8+3.3);
    printf ("%d \n",(int)3.8+3.3);
    printf ("%d \n",(int)3.8+3.3);
    return 0;
}