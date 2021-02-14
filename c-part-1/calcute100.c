#include<stdio.h>
void main()
{
    int x , y , z;
    int mon = 100;
    int xmon = 5;
    int ymon = 3;
    int z3mon = 1.0 / 3.0;
    printf("请输入 鸡翁，鸡母，鸡雏的数量\n");
    scanf("%d,%d,%d",&x,&y,&z);

    printf(xmon * x + ymon * y + z3mon * z);
}