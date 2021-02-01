#include<iostream>

usinng namespace std;

class MyCom{
double real,imag;
public:
    MyCom(double r1=0,double r2=3):real(r),image(i){};

operator double (){
return real;
}
};

int main(){
MyCom c1(1.2,2.3);
cout << (double)c1 << endl;
double n = 12 + c1;
cout << n << endl;
return 0;
}