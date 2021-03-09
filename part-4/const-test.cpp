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
   public:
    BaseB(){
    cout << "BaseB 无参构造函数" << endl;
    }

    ~BaseB(){
    cout << "BaseB 析构函数" << endl;
    }
};

int main(){
 BaseB b;
 return 0;
}
