#include<iostream>
using namespace std;

int main(){
	//定义整型变量并且赋值
	int oneInt = 1;
	//给变量oneInt定义引用
	int & ref = oneInt;
	int const &refc = oneInt; 
	ref = 2;
	cout << "oneInt = " << oneInt << "," << "ref = " << ref <<endl;
	cout << "refc = " << refc << endl;
	oneInt =3;
	cout << "ref = " << ref << endl;
	cout << "refc = " << refc << endl;
	int & ref2 = ref;
	cout << "ref2 = " << ref2 << endl;
	return 0;
}