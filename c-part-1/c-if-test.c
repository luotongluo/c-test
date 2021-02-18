#include "stdio.h"
int main()
{
int n ;
printf("请输入一个数：");
scanf("%d",&n);
if(n% 2 == 0){
printf("这是一个偶数");
}else{
printf("这是一个奇数");
}
}