#include <stdio.h>
enum COLOR {RED,YELLOW,BLUE,NumOfColor};
int main(void){
    int color = -1;
    char * ColorNames[NumOfColor] = {"red","yellow","blue"};
    char *colorName = NULL;

    printf("请输入你喜欢的颜色：");
    scanf("%d",&color);
    if(color >=0 && color < NumOfColor){
        colorName = ColorNames[color];
    } else {
        colorName = "unknow!";
    }
    printf("你喜欢的颜色是%s \n",colorName);

    return 0;
}
