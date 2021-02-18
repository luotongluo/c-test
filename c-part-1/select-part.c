#include<stdio.h>
/**
输入三个整数，并且从大到小的顺序排序
*/
void main()
{
int x,y,z,system;
printf("请输入三个整数");
scanf("%d%d%d",&x,&y,&z);
if(x < y){
system = x;
x = y;
y = system;

}
if(x < z){
system = x;
x = z;
z = system;
}
if (y < z){
system = z;
z = y;
y = system;
}
printf("x = %d,y = %d,z = %d",x,y,z);
}