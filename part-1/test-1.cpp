#include  <iostream>
#include <string>
using namespace std;

int main() {
	int a = 10;
	const int *p = &a;
	const int ca = 30;
	int *q;
	cout << "a �ĵ�ַ�ǣ�\t " << &a << "\ta��ֵ�ǣ�\t" << a << endl;
	cout << "*pָ��ĵ�ַΪ��\t" << p << "\t *p ��ֵ�ǣ� \t" << *p << endl

	system("pause");
	return 0;
}