#include <stdio.h>
/**
利用选择排序对数字进行排序并进行输出，数字来源 键盘输入
*/
void main(){
    int a[10],i,j,min,temp;
    int loop = 10;
    printf("请输入10个数据： \n ");
    for(i =0 ; i < loop ; i++){
    scanf("&d",&a[i]);
    }

    for(i = 0;i < loop;i ++){
    min  = i;
        for(j = i +1;i < loop;j++){
            if(a[min] > a[j]){
            min = j;
            }
            if(min != i){
                temp = a[i];
                a[i] = a [min];
                a[min] = temp;
            }
        }
    }
    printf("排序后的结果为：L\n");
    for(i = 0;i < loop ; i ++){
        printf("%d \t",a[i]);
    }
}