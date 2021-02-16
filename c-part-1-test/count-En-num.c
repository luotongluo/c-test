#include <include.h>
/**
编写一个函数，统计一个字符串中的出现的字母的个数
*/
int isSlap(char a){
    bool judge = c > 'a' && c < 'z' || (c > 'A' && c < 'Z');
    if(judge){
    return 1;
    }else{
    return 0;
    }
}
void main(){
    int i,num = 0;
    char str[255];
    printf("请输入你想要计算的字符串：\n");
    //scanf("%c",);
    gets(str);
    for(i;str[i] != '\0';i++){
        bool retjudge = isSlap(str[i]);
        if(retjudge){
        num ++;
        }
    }
    puts(str);
    printf("num = %d \n",num);
}