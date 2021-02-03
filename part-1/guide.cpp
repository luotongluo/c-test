#include <iostream>
using namespace std;
/*
指针是一个变量，其值存储的是另一个变量的地址。即内存位置的直接地址，就行其他变量或者常量一样
在使用指针存储其他变量之前，对其进行申明
eg：type *var-name;
*/

int main()
{
    int var = 20;
    int *ip;
    //在指针变量中存储var的值
    ip = &var;

    cout << "value of var variable" << var << endl;

    cout << "address stoed in ip varable:" << ip << endl;
    cout << "address stoed in *ip varable:" << *ip << endl;

}