#include<stdio.h>
void main()
{
    int x , y , z;
    int mon = 100;
    int xmon = 5;
    int ymon = 3;
    double z3mon = 1.0 / 3.0;
    printf("请输入 鸡翁，鸡母，鸡雏的数量\n");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    int value =xmon * x + ymon * y + z3mon * z;
    printf("value: %d:\n %d * %d + %d * %d +  %d * %d = %d \n",value,xmon,x,ymon , y , z3mon , z,value);
}
