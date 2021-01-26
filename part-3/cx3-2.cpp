#include<iostream>
using namespace std;
class Demo{
	int id;
	public:
	Demo(int i){
		id = i;
		cout << id <<  "构造函数调用" << endl;
	}
	void printDemo();
	
	~Demo(){
		//id = i;
		cout << id <<  "析构函数调用" << endl;
	}
};

void Demo::printDemo(){
	cout << "id = " <<  id << endl;
}
int main (){
	//声明对象初值，并赋值
	Demo d4(4);
	d4.printDemo();
	//将6创建为一个临时的demo对象，使用这个对象对d4赋值
	d4 = 6;
	d4.printDemo();
	return 0 ;
}