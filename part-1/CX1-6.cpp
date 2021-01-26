#include <iostream>
using namespace std;

/**
引用和函数参数的传递
引用的定义，引用相当于给变量起了一个别名。
变量对应某个某个内存地址，如果 给某个变量起了别名，相当于变量和这个引用都对应到同一地址
程序中使用哪个名字都是允许的。
在c++中，引用的定义格式如下
2.引用名也必须是一个合法的标识符，其命名规则和普通变量相同。
定义引用是需要进行 初始化，
通常会用他所 引用的变量去初始化

3不能用常量初始化引用
通常也不能用表达式初始化引用
除非该表达式的返回值是某个变量的引用
4 同一个变量的引用可以有多个
5.常引用和普通引用的区别在于，不能通过长引用去修改其引用的变量
*/
/*
值的替换
*/
void SwapVlaue(int a,int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "在 SwapVlaue 函数中 a = " << a << "\t b = " << b << endl;
	return;
}
/*
引用值的替换
*/
void swapRef(int &a,int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "在 swapRef 函数中 a = " << a << "\t b = " << b << endl;
	return;
}

int main(){
	int a = 10;
	int b = 20;
	cout << "数据交换前 ： a："<< a << "\t b:" << b << endl;
	SwapVlaue(a,b);
	cout << "数据交换后 ： a："<< a << "\t b:" << b << endl;
	a = 10,b =20;
	swapRef(a,b);
	cout << "reference数据交换后 ： a："<< a << "\t b:" << b << endl;
	return 0;
}