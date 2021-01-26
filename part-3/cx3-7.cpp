#include<iostream>
using namespace std;
class MyComplex{
	private:
	double real,imag;
	public:
	MyComplex(){
		real = 0;
		imag = 0;
		cout << "MyComplex 无参构造函数" << endl;
	}
	MyComplex (double x,double y);
	//定义友元类
	friend class Oper;
};
MyComplex::MyComplex(double x,double y){
	real = x;
	imag = y;
}
class Oper{
	public:
	MyComplex addCom(MyComplex m1,MyComplex m2);
	
	void outcom(MyComplex m3);
};
MyComplex Oper::addCom(MyComplex m1,MyComplex m2){
	return MyComplex(m1.real + m2.real,m1.imag + m2.imag);
}
void Oper::outcom(MyComplex m3){
	cout << "m3:"<<m3.real << "," << m3.imag<< endl;
}
int main(){
	MyComplex c1(1,2),c2(3,4),res;
	Oper o;
	res = o.addCom(c1,c2);
	o.outcom(c1);
	cout << "+";
	o.outcom(c2);
	cout<<"=";
	o.outcom(res);
	cout<<endl;
	return 0;
}