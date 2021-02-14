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
    int value =xmon * x + ymon * y + z3mon * z;
    printf(" %d:"value);
}
/**
鸡翁： 2,鸡母 30, 鸡雏 68
鸡翁： 5,鸡母 25, 鸡雏 70
鸡翁： 8,鸡母 20, 鸡雏 72
鸡翁： 11,鸡母 15, 鸡雏 74
鸡翁： 14,鸡母 10, 鸡雏 76
鸡翁： 17,鸡母 5, 鸡雏 78
*/