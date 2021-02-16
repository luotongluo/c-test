#include <stdio.h>
/**
已有数组a中有5个已经排序的数据，
从键盘中得到整数，然后插入到已有的数据中，保持数据有序
*/
void main(){
int a[6] = {1,2,3,4,5},x;
int i,j,min,temp,loop;
loop = 5;
printf("请输入一个整数：\n");
scanf("%d",&x);
a[5] = x;

for(i = 0;i < loop;i++){
  if(a[i]  > x){
    temp = i;
    break;
  }
}
if( i > 0){
    for(i;i<= loop; i ++){
    temp = a[i];
    a[i] = [i + 1];
    }
}

}