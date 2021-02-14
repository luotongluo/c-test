#include <stdio.h>
/**
四则运算符计算
*/
void main()
{
float x =1,y=2;
char op = '+';
printf("当前计算的运算符是：%c,数字为：%f,%f");
switch(op){
case '+':
    printf("%d+%d = ",x,y,x + y);break;
    case '-':
    printf("%d-%d = ",x,y,x - y);break;
 case '*':
    printf("%d*%d = ",x,y,x * y);break;
case '/':
    if(y == 0){
    printf("除数不能为0");
    }
    printf("%f*%f = ",x,y,x / y);break;
default:
    printf("输入的运算符不在四则运算符之内");
}
}