#include<studio.h>
/**
鸡翁1，钱值5；鸡母1钱值3，鸡雏3 值钱1
百钱买百鸡，问 鸡翁，鸡雏，鸡母各几只
*/
void main()
{
//x 鸡翁 ； y 鸡母；z 鸡雏
int x,y,z;

int mon = 100;
int xmon = 5;
int ymon = 3;
int z3mon = 1 / 3;
//鸡翁的数量不会超过20只
int loopX = 100 / xmon;
printf("鸡翁的 loopx ： %d \n",loopX);
int loopY = 100 / ymon;
printf("鸡母的 loopY ： %d \n",loopY);
int loopZ = (100 / z3mon) > 100 ? 100 : (100 / z3mon);
printf("鸡母的 loopY ： %d \n",loopY);
for (x = 1;a <= loopX; x ++ ){
//鸡母最多能购买 100 / 3 向上取整
    for (y = 1;y <= loopY; y ++){
     for(z = 1 ; z< loopZ; z++){
        if (x + y + z ==100 && xmon * x + ymon * y + z3mon * z == 100 ){
        printf("鸡翁： %d,鸡母 %d, 鸡雏 %d \n", x,y,z);
        }
     }
    }
}
printf("");
}