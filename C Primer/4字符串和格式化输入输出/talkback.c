#include <stdio.h>
#include <string.h>
#define DENSETY 62.4
/********************************
 * 字符串数组最后一个位置显示 \0 这个字符就是空字符 null character ，C用它来标记字符串的结束，
 * 空字符不是数字0，他是非打印字符，其ASCII码的值为0；该字符的存在表示数组的单元数必须必字符数多1
 * 
 * */
int main(){
    float weight,volumn;
    int size,letters;
    char name[40];

    printf("Hi what's your first name? \n");
    scanf("%s",name);
    printf("%s, what's your weight in pounds \n",name);
    scanf("%f",&weight);
    size = sizeof name;
    letters = strlen(name);
    volumn = weight/DENSETY;
    printf("well %s your volumn is %2.2f cubic feet \n",name,volumn);
    printf("also your first name has %d letters",letters);
    printf("and we have %d bytes to store it \n",size);
    return 0;
}