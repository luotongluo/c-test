#include <iostream>
using namespace std;

class Base{
int x,y;
public:
    Base(){
    cout << "Base 无参构造函数" << endl;
    }

    ~Base(){
    cout << "Base 析构函数" << endl;
    }
};

class BaseB:public Base{
BaseB(){
    cout << "Base 无参构造函数" << endl;
    }

    ~BaseB(){
    cout << "Base 析构函数" << endl;
    }
};

int main(){
 BaseB b;
 return 0;
}
