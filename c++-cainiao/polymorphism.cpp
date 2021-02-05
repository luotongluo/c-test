#include <iostream>
using namespace std;
/*
多态的测试类 使用virtual 关键字
参考菜鸟博客
https://www.runoob.com/cplusplus/cpp-polymorphism.html
纯虚函数
您可能想要在基类中定义虚函数，以便在派生类中重新定义该函数更好地适用于对象，
但是您在基类中又不能对虚函数给出有意义的实现，这个时候就会用到纯虚函数。
*/

class Sahpe
{
protected:
	int width,height;
public:
	Sahpe(int a =0,int b=0)
	{
		width = a;
		height = b;
	}
	/*
	virtual int area ()
	{
		cout << "parent class area" <<endl;
		return 0;
	}*/
	//下面的函数表示的纯虚函数
	virtual int area() = 0;
};

class RectAngle : public Sahpe
{
	public:
		RectAngle(int a=0,int b=0):Sahpe(a,b){}

		int area()
		{
			cout << "RectAngle class area:" << endl;
			return (width * height);
		}

};

class Triangle : public Sahpe
{
public:
	Triangle(int a = 0,int b=0):Sahpe(a,b){}

	int area()
	{
		cout << "Triangle class area : "<< endl;
		return (width * height / 2);
	}
};

int main()
{
	Sahpe *s1;
	RectAngle r1(10,7);
	Triangle t1(10,5);

	s1 = &r1;

	s1 -> area();

	s1 = &t1;
	s1 -> area();
	return 0;
}