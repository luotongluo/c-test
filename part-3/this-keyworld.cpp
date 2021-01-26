#include<iostream>
using namespace std;
class MyComplex{
	private:
	double real,imag;
	public:
	MyComplex():real(0),imag(0){
		cout << "MyComplex 无参构造函数" << endl;
	}
	MyComplex(double x,double y);
	MyComplex addRealOne();
	MyComplex addImageOne();
	void ourcom();
	~MyComplex(){
		cout << "MyComplex 析构函数" << endl;
	}
};
MyComplex::MyComplex(double x,double y){
		this->real = x;
		this->imag = y;
		cout << "MyComplex 带参参构造函数" << endl;

}
void MyComplex::ourcom(){
	cout << "("<<real << "," << imag<<")"<< endl;
}
MyComplex MyComplex::addRealOne(){
	this->real++;
	//返回此类
	return *this;
}
MyComplex MyComplex::addImageOne(){
	this->imag++;
	//返回此类
	return *this;
}
int main(){
	MyComplex c1(1,1),c2,c3;
	c1.ourcom();
	c2.ourcom();
	c3.ourcom();
	cout << "==========================="<<endl;
	c2 = c1.addRealOne();
	c1.ourcom();
	c3 = c1.addImageOne();
	c1.ourcom();
	c2.ourcom();
	c3.ourcom();
	cout<< endl;
	return 0;
}