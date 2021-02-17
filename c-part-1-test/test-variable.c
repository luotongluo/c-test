#include <stdio.h>
/**
自动型变量与静态变量的区别
*/
void auto_ststic(){
    int car_auto = 0;
    static var_auto = 0;
    printf("car_auto = %d,var_auto = %d \n",car_auto,var_auto);
    ++car_auto;
    ++var_auto;
}

void main(){
    int a;
    for( a =0;a<2 ;a++){
        auto_ststic();
    }
}