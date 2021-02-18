#include <stdio.h>
/**
寄存器型变量  register int x,y;
只有局部变量才能定义为寄存器型变量，
对于占用字节数较多的不能定义为寄存区变量
由于pc寄存器有限，不能定义任意的寄存器变量
*/
void main(){
    int a ;
    printf("%d\n",a);
}