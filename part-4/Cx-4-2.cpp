#include <iostream>
#include <string>
using namespace std;
class MyComplax{
    private:
    double real,imag;
    public:
    MyComplax();
    MyComplax(double r,double a);
    ~MyComplax(){
    cout << "析构函数" << endl;
    }
    MyComplax addMyComplax(MyComplax x);
    void outCome();
    void outCome(string string);
    void changeReal(double r);
    friend MyComplax operator+(const MyComplax &c1,const MyComplax &c2);
    friend MyComplax operator+(const MyComplax &c1,double d1);
    friend MyComplax operator+(double d1,const MyComplax &c1);
    friend MyComplax operator-(const MyComplax &c1,const MyComplax &c2);
    friend MyComplax operator-(const MyComplax &c1,double d1);
    friend MyComplax operator-(double d1,const MyComplax &c1);

    MyComplax &operator=(const MyComplax m1);
    MyComplax &operator=(double d1);
};
MyComplax::MyComplax(){
real = 0;
imag = 0;
}
MyComplax::MyComplax(double r,double a){
real = r;
imag = a;
}
MyComplax MyComplax::addMyComplax(MyComplax x){
return MyComplax(this -> real + x.real,this->imag + x.imag);
}

void MyComplax::outCome(){
cout << "(" << real << "," << imag << ")"<<endl;
}
void MyComplax::outCome(string string){
}
void MyComplax::changeReal(double r){
this -> real = r;
}
MyComplax operator+(const MyComplax &c1,const MyComplax &c2){
return MyComplax(c1.real + c2.real,c1.imag + c2.imag);
}
MyComplax operator+(const MyComplax &c1,double d1){
return MyComplax(c1.real + d1,c1.imag);
}
MyComplax operator+(double d1,const MyComplax &c1){
return MyComplax(c1.real + d1,c1.imag);
}
MyComplax operator-(const MyComplax &c1,const MyComplax &c2){
return MyComplax(c1.real - c2.real,c1.imag - c2.imag);
}
MyComplax operator-(const MyComplax &c1,double d1){
return MyComplax(c1.real - d1,c1.imag);
}
/**
*/
MyComplax operator-(double d1,const MyComplax &c1){
return MyComplax(c1.real - d1,c1.imag);
}
MyComplax &MyComplax::operator=(const MyComplax m1){
this -> real = m1.real;
this -> imag = m1.imag;
//返回当前引用的对象
return *this;
}
MyComplax &MyComplax::operator=(double d1){
this -> real = d1;
this -> imag = 0;
return *this;
}
int main(){
MyComplax c1(1,2),c2(3,4),c3(3,4),res;
c1.outCome();
cout << "operator+";
c2.outCome();
cout << endl;
cout << "==";
res = c1 + c2;
res.outCome();

cout << endl;
c1.outCome();
cout << "operator-";
c2.outCome();
cout << endl;
cout << "==";
res = c1 - c2;
res.outCome();
cout << endl;
return 0;
}
