#include  <iostream>
#include <string>
using namespace std;

int main() {
	int a = 10;
	const int *p = &a;
	const int ca = 30;
	int *q;
	cout << "a 的地址是：\t " << &a << "\ta的值是：\t" << a << endl;
	cout << "*p指向的地址为：\t" << p << "\t *p 的值是： \t" << *p << endl

	system("pause");
	return 0;
}